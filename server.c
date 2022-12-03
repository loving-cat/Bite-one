#define _CRT_SECURE_NO_WARNINGS 1
#define _WINSOCK_DEPRECATED_NO_WARNINGS 1
#include<stdio.h>
#include<WinSock2.h>
#pragma comment(lib,"ws2_32.lib")
#include<windows.h>

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
	SOCKET serverSocket = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
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
	int ret = bind(serverSocket,(sockaddr*)&addr, sizeof addr);
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
	SOCKET clientSocket = accept(serverSocket,(sockaddr*)&cAddr,&len);//�ӵ绰
	if (SOCKET_ERROR == clientSocket)
	{
		printf("����������:%d\n", GetLastError());
		//�Ͽ�����
		closesocket(serverSocket);
		//����Э��汾��Ϣ
		WSACleanup();
		return -1;
	}
	printf("�ͻ������ӷ������ɹ�:%s\n", inet_ntoa(cAddr.sin_addr));
	//7.ͨ��

	char buff[1024];
	while (1)
	{
		//�ȴ����ܿͻ��˵�����
		ret = recv(clientSocket, buff, 1023, NULL);
		if (ret > 0)
		{
			buff[ret] = 0; //��ӽ������š�\0��
			printf("���Կͻ��˵���Ϣ:%s\n", buff);
		}

	}

	//8.�Ͽ�����
	closesocket(serverSocket);
	//9.����Э��汾��Ϣ
	WSACleanup();


	return 0;
}