#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	printf("hello bit\n");
//	return 0;
//}

//main ������������˼
//main �ǳ�������,���ҽ���һ��
//F10
//
//stdio std input output
//.h header
//��׼�������
//#include<stdio.h>
//// int ����
////printf�ǿ⺯�����⺯����ʹ������Ҫ����ͷ�ļ���
//int main()
//{
//	//printf("hehe\n");//��""�������Ľ��ַ���
//	printf("hello zhangsan\n");
//	return 0;
//}
//��������ǿ��Ե�
//int main(void)//void��ʾmain��������Ҫ����
//{
//	return 0;
//}
//����������д
//void main()
//{
	//����д���Ƿǳ�����
//}

//����׼��д��
//main()
//{
//}

//int main()
//{//��λ���ֽ�
//	printf("%d\n", sizeof(char));	//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}

//int main()
//{
//	//int a$b;//err
//	//int _2b;
//	//int _2B;
//	//int float;err
//	return 0;
//}

//int b = 20;//ȫ�ֱ���
//
//void test()
//{
//	int c;//�ֲ����� 
//}
//int a = 20;
//int main()
//{//�ֲ�������ȫ�ֱ��������ֿ�����ͬ�������Ǽȿ���ʹ�þֲ����ֿ���ʹ��ȫ�ֱ�����ʱ�򣬾ֲ���������
//	int a = 10;//�ֲ�����
//	printf("%d\n", a);
//	return 0;
//}

//дһ���������2�������ĺ�
//printf - ���/��ӡ
//scanf - ����
//& ȡ��ַ
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//1.����2������
//	scanf("%d %d", &num1, &num2);
//	//2.���
//	sum = num1 + num2;
//	//3.���
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int b = 20;
//	{
//		int a = 10;
//		printf("1:%d\n", a);
//	}
//	printf("2:%d\n", b);
//	return 0;
//}

//int a = 10;
//
//void test()
//{
//	printf("test --> %d\n", a);
//}
//int main()
//{
//	printf("%d\n", a);
//	test();
//	return 0;
//}

//���������ⲿ�ķ���
//extern �����������ⲿ���ŵ�
//extern  int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

int main()
{
	{
		int a = 0;
		printf("%d\n", a);
	}
	return 0;
}