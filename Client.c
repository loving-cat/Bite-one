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
	SOCKET CSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (SOCKET_ERROR == CSocket)
	{
		printf("����socketʧ��:%\n", GetLastError());
		//7.����Э��汾��Ϣ
		WSACleanup();
		return -1;
	}
	printf("����socket�ɹ���\n");
	//3.��ȡ������Э���ַ��
	SOCKADDR_IN addr = { 0 };
	addr.sin_family = AF_INET;//�����socket�����ĵ�һ������һ��
	addr.sin_addr.S_un.S_addr = inet_addr("192.168.0.111");//IP��ַ
	addr.sin_port = htons(9527);
	//4.����
	int ret = connect(CSocket, (sockaddr*)&addr, sizeof(addr));
	if (-1 == ret)
	{
		printf("���ӷ�����ʧ��:%d\n", GetLastError());
		//6.�Ͽ�����
		closesocket(CSocket);
		//7.����Э��汾��Ϣ
		WSACleanup();
		return -1;
	}
	//5.ͨ��
	char buff[1024];
	while (1)
	{
		printf("���͸�������:");
		scanf("%s", buff);

		send(CSocket, buff, strlen(buff), NULL);
	}

	//6.�Ͽ�����
	closesocket(CSocket);
	//7.����Э��汾��Ϣ
	WSACleanup();

	return 0;
}