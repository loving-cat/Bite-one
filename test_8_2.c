#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	char ch;
//	int* pa = &a;//pa���Լ��ĵ�ַ���������������a(����)�ĵ�ַ
//	char* pc = &ch;
//	//printf("%p", &a);//�ó�a����ʼ��ַ
//	//printf("%p", &a);
//	return 0;
//}

//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("pa = %p\n", pa);
//	printf("pc = %p\n", pc);
//	printf("pa+1= %p\n", pa+1);
//	printf("pc+1= %p\n", pc+1);
// return 0;
//
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//1~10
//	int* p = arr;//����������������Ԫ�صĵ�ַarr-->&arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p+i)=i+1;//* �����ã��ǵ�ַ�ڵ�ֵ
//	}
//	return 0
//	//for ( i = 0; i < 10; i++)
//	//{
//	//	*p = i + 1;//*p�����ã��ǵ�ַ�ڵ�ֵ
//	//	p++;//��ַ
//	//}
//	//return 0;
//}

//int main()
//{
//	int* p;//p����Ұָ��
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for ( i = 0; i <=sz; i++)
//	{
//		//Խ��Ұָ��
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//int* test()
//{
//	int num = 100;
//	return &num;//����������ʱ�������٣�p��ס����ʱ�����ĵ�ַ������Ұָ��
//}
//int main()
//{
//	int* p = test();
//	*p = 200;
//	return;
//}

//��α���Ұָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;//��ȷ��ʼ��
//	//NULL - ���ǳ�ʼ��ָ��ģ����ʾ���0
//	int* p = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int* p = NULL;
//	//*p = 20;
//	int *p = &a;
//	if (p != NULL)
//	{
//		printf("%d\n", *p);
//	}
//	return 0;
//}

//int main()
//{
//	double arr[5] = { 0 };
//	double* p = arr;
//	int i = 0;
//	for ( i = 0; i < 5; i++)
//	{
//		printf("%lf ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	//����ָ�������ǰ���ǣ�������һ�������Ŀռ�
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//
// //err
// int a =10;
// char c = 'w';
//	return 0;
//}

//1.����������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//}

//2.�ݹ�汾



//3.ָ��-ָ��汾
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//#include<stdio.h>
//void print(int* p,int sz)
//{
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ", *(p + i));
//    }
//}
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int* p = arr;
//    print(p, sz);
//    return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char a[20] = "0";
//    scanf("%s", a);
//    char* p = a;
//    char tmp = 0;
//    char* p2 = strlen(a) - 1;
//    while (p >= p2)
//    {
//        tmp = *p;
//        *p = *p2;
//        *p2 = tmp;
//        p++;
//        p2--;
//    }
//    printf("%s", a);
//    return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//void reverse(char* start, char* end)
//{
//    char tmp;
//    while (start < end)
//    {
//        tmp = *start;
//        *start = *end;
//        *end = tmp;
//        start++;
//        end--;
//    }
//}
//int main()
//{
//    char arr[1000] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//    int i = 0;
//    //���ַ������巭ת
//    reverse(arr, arr + len - 1);
//    printf("%s", arr);
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int l = 0;
//	scanf("%d", &l);
//	for ( i = 1; i <=l; i++)
//	{
//		
//		for (j = 1; j <=l-i; j++)
//		{
//			printf(" ");
//		}
//		for ( j = 1; j <=2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <=l; i++)
//	{
//
//		for (j = 1; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <=2 * (l - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<math.h>
//#define M 100000
//int main() {
//    printf("0��%d��ˮ�ɻ���Ϊ��\n", M);
//    for (int i = 1; i <= M; i++) {
//        //count����ʾˮ�ɻ�����λ��
//        int count = 1;//ˮ�ɻ���������һλ
//        int sum = 0;
//        int temp = i;
//        while (temp / 10) {
//            count++;
//            temp /= 10;
//        }
//        temp = i;//���¸�temp��ֵ����Ϊtemp��whileѭ�����Ѿ����޸���
//        while (temp) {//�жϸ����Ƿ���ˮ�ɻ���
//            //��temp������������ÿһλ����������pow��������ÿһλ��n�η���nΪ����λ��
//            sum += pow(temp % 10, count);
//            //��temp��10��ÿ�ν��������λ��ȥ
//            temp /= 10;
//        }
//        if (i == sum) {
//            printf("%d\n", sum);
//        }
//    }
//    return 0;
//}


int main()
{
	int num = 0;
	int sum = 0;
	int tmp = 0;
	scanf("%d", &num);
	for (int i = 0; i < 5; i++)
	{
		tmp = tmp * 10 + num;
		sum = sum + tmp;
	}
	printf("sum=%d", sum);
	return 0;
}