#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	/*int age = 0;
//	scanf("%d", &age);
//	if (age<18) 
//	{
//		printf("δ����\n");
//		printf("���ܺȾ�\n");
//	}
//	else
//	{
//		printf("����\n");
//		printf("��������\n");
//	}*/
//	//<18 ������
//	//18 - 26 ����
//	//31 - 45 ����
//	//46 - 60 ׳��
//	//60 - 90 ����
//	//90 -    ������
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("����\n");
//	}
//	else if(age>=18 && age <30)
//	{
//		printf("����\n");
//	}
//	else if (age >= 30 && age < 45)
//	{
//		printf("����\n");
//	}
//	else if (age >= 45 && age < 60)
//	{
//		printf("׳��\n");
//	}
//	else if (age >= 60 && age < 90)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//	return 0;
//}
//C���� 0��ʾ�٣���0��ʾ�档

//int main()
//{
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//
//	}
//	return 0;
//}

//int test()
//{
//	if (0)
//		return 1;
//
//	return 0;
//}
//int main()
//{
//	int a = test();
//
//	return 0;
//}

//int mian()
//{
//	int num = 1;
//	/*if (num == 5)
//	{
//		printf("hehe\n");
//	}*/
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1) //�ж��Ƿ�Ϊ����
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("ż��\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	while(num<=100)
//	{
//		if (num % 2 == 1)
//		{
//			printf("����:%d\n", num);
//		}
//		num++;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
//		break;
//	default:
//		printf("����Ĳ��ǵ���ʱ��");
//		break;
//	}
//	return 0;
//}

//1-5 ������
//6-7 ��Ϣ��
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default:
//		printf("����Ĳ��ǵ���ʱ��");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	while (1)
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	} 
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	return 0;
//}


//EOF end of file �ļ�������־
//int main()
//{
//	int ch = 0;
//	while ((ch=getchar())!= EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);
//	//����\n
//	int tmp = 0;
//	while((tmp=getchar())!='\n')//��������ȥ��tmp
//	{
//		;	
//	}
//	printf("��ȷ������(Y/N):");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF )
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <=10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	//for�ĳ�ʼ�����жϣ������������ֿ���ʡ��
	//����ʡ�Ե��жϲ��֣�����ζ���жϺ�Ϊ��
	//��ѭ��
	/*for (;;)
	{
		printf("hehe\n");
	}*/
	int i = 0;
	int j = 0;
	int count = 0;
	for ( i = 0; i < 10; i++)
	{
		for ( j = 0; j < 10; j++)
		{
			printf("hehe");
			count++;
			printf("%d", count);
		}
	}
	return 0;
}