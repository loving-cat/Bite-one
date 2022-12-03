#define _CRT_SECURE_NO_WARNINGS 1
#define _WINSOCK_DEPRECATED_NO_WARNINGS 1

#include<stdio.h>
#include<WinSock2.h>
#pragma comment(lib,"ws2_32.lib")
#include<windows.h>

typedef struct sockaddr sockaddr;

int main()
{
	//1.确定协议版本
	WSADATA wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (HIBYTE(wsaData.wVersion) != 2 ||
		LOBYTE(wsaData.wVersion) != 2)
	{
		printf("确定协议版本失败:%d\n", GetLastError());
		return -1;
	}
	printf("确定协议版本成功！\n");
	//2.创建socket
	SOCKET CSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (SOCKET_ERROR == CSocket)
	{
		printf("创建socket失败:%\n", GetLastError());
		//7.清理协议版本信息
		WSACleanup();
		return -1;
	}
	printf("创建socket成功！\n");
	//3.获取服务器协议地址簇
	SOCKADDR_IN addr = { 0 };
	addr.sin_family = AF_INET;//必须和socket函数的第一个参数一致
	addr.sin_addr.S_un.S_addr = inet_addr("192.168.0.111");//IP地址
	addr.sin_port = htons(9527);
	//4.连接
	int ret = connect(CSocket, (sockaddr*)&addr, sizeof(addr));
	if (-1 == ret)
	{
		printf("连接服务器失败:%d\n", GetLastError());
		//6.断开连接
		closesocket(CSocket);
		//7.清理协议版本信息
		WSACleanup();
		return -1;
	}
	//5.通信
	char buff[1024];
	while (1)
	{
		printf("发送给服务器:");
		scanf("%s", buff);

		send(CSocket, buff, strlen(buff), NULL);
	}

	//6.断开连接
	closesocket(CSocket);
	//7.清理协议版本信息
	WSACleanup();

	return 0;
}