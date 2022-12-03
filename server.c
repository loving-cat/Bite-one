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
	//WIN上时SOCKET类型，linux上是int类型
	SOCKET serverSocket = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	if (SOCKET_ERROR == serverSocket)
	{
		printf("创建socket失败:%\n", GetLastError());
		//清理协议版本信息
		WSACleanup();
		return -1;
	}
	printf("创建socket成功！\n");
	//3.设置服务器协议地址簇
	SOCKADDR_IN addr = { 0 };
	addr.sin_family = AF_INET;//必须和socket函数的第一个参数一致
	addr.sin_addr.S_un.S_addr = inet_addr("192.168.0.111");//IP地址
	addr.sin_port = htons(9527);//端口号 每台具备网络功能的计算机，都有端口号，PC机端口号的数量65536
	//4.绑定
	int ret = bind(serverSocket,(sockaddr*)&addr, sizeof addr);
	if (-1 == ret)
	{
		printf("绑定失败:%d\n", GetLastError());
		//断开链接
		closesocket(serverSocket);
		//清理协议版本信息
		WSACleanup();
		return -1;
	}
	printf("绑定成功！\n");
	//5.监听
	ret = listen(serverSocket, 10);
	if (-1 == ret)
	{
		printf("监听失败:%d\n", GetLastError());
		//断开链接
		closesocket(serverSocket);
		//清理协议版本信息
		WSACleanup();
		return -1;
	}
	printf("监听成功！\n");
	//6.接受连接
	SOCKADDR_IN cAddr = { 0 };
	int len = sizeof(cAddr);

	//accept 是个阻塞函数，类似scanf 和getchar
	SOCKET clientSocket = accept(serverSocket,(sockaddr*)&cAddr,&len);//接电话
	if (SOCKET_ERROR == clientSocket)
	{
		printf("服务器崩溃:%d\n", GetLastError());
		//断开链接
		closesocket(serverSocket);
		//清理协议版本信息
		WSACleanup();
		return -1;
	}
	printf("客户端连接服务器成功:%s\n", inet_ntoa(cAddr.sin_addr));
	//7.通信

	char buff[1024];
	while (1)
	{
		//等待接受客户端的数据
		ret = recv(clientSocket, buff, 1023, NULL);
		if (ret > 0)
		{
			buff[ret] = 0; //添加结束符号‘\0’
			printf("来自客户端的信息:%s\n", buff);
		}

	}

	//8.断开连接
	closesocket(serverSocket);
	//9.清理协议版本信息
	WSACleanup();


	return 0;
}