#define _CRT_SECURE_NO_WARNINGS 1
#define _WINSOCK_DEPRECATED_NO_WARNINGS 1
#include<stdio.h>
#include<WinSock2.h>
#pragma comment(lib,"ws2_32.lib")
#include<windows.h>

#define Client_NUM 100
//�ͻ��˵�socket һ���ͻ���һ��
SOCKET clientSocket[100];
void func(int i);


typedef struct sockaddr sockaddr;

int main()
{
	//1.ȷ��Э��汾
	WSADATA wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (HIBYTE(wsaData.wVersion) != 2 ||
		LOBYTE(wsaData.wVersion) != 2)
	{
		printf("ȷ��Э��汾ʧ��:%d\n", GetLastError());
		return -1;
	}
	printf("ȷ��Э��汾�ɹ���\n");
	//2.����socket
	//WIN��ʱSOCKET���ͣ�linux����int����
	SOCKET serverSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (SOCKET_ERROR == serverSocket)
	{
		printf("����socketʧ��:%\n", GetLastError());
		//����Э��汾��Ϣ
		WSACleanup();
		return -1;
	}
	printf("����socket�ɹ���\n");
	//3.���÷�����Э���ַ��
	SOCKADDR_IN addr = { 0 };
	addr.sin_family = AF_INET;//�����socket�����ĵ�һ������һ��
	addr.sin_addr.S_un.S_addr = inet_addr("192.168.0.111");//IP��ַ
	addr.sin_port = htons(9527);//�˿ں� ÿ̨�߱����繦�ܵļ���������ж˿ںţ�PC���˿ںŵ�����65536
	//4.��
	int ret = bind(serverSocket, (sockaddr*)&addr, sizeof(addr));
	if (-1 == ret)
	{
		printf("��ʧ��:%d\n", GetLastError());
		//�Ͽ�����
		closesocket(serverSocket);
		//����Э��汾��Ϣ
		WSACleanup();
		return -1;
	}
	printf("�󶨳ɹ���\n");
	//5.����
	ret = listen(serverSocket, 10);
	if (-1 == ret)
	{
		printf("����ʧ��:%d\n", GetLastError());
		//�Ͽ�����
		closesocket(serverSocket);
		//����Э��汾��Ϣ
		WSACleanup();
		return -1;
	}
	printf("�����ɹ���\n");
	//6.��������
	SOCKADDR_IN cAddr = { 0 };
	int len = sizeof(cAddr);

	//accept �Ǹ���������������scanf ��getchar
	for (int i = 0; i < Client_NUM ;i++)
	{
	 clientSocket[i] = accept(serverSocket, (sockaddr*)&cAddr, &len);//�ӵ绰
		if (SOCKET_ERROR == clientSocket[i])
		{
			printf("����������:%d\n", GetLastError());
			//�Ͽ�����
			closesocket(serverSocket);
			//����Э��汾��Ϣ
			WSACleanup();
			return -1;
		}
		printf("�ͻ���%d���ӷ������ɹ�:%s\n",i+1,inet_ntoa(cAddr.sin_addr));

		CreateThread(NULL, NULL,
			(LPTHREAD_START_ROUTINE)func, (void*)i,
			NULL, NULL);
	}

	//8.�Ͽ�����
	closesocket(serverSocket);
	//9.����Э��汾��Ϣ
	WSACleanup();


	return 0;
}

//�̺߳���
void func(int i)
{
	//7.ͨ��
	int ret;
	char buff[1024];
	while (1)
	{
		//�ȴ����ܿͻ��˵�����
		ret = recv(clientSocket[i], buff, 1023, NULL);
		if (ret > 0)
		{
			buff[ret] = 0; //��ӽ������š�\0��
			printf("���Կͻ���i:%d����Ϣ:%s\n",i+1,buff);
		}

	}
}
