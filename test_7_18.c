#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//define ���峣��
#define M 1000
#define SIZE 10

//int main()
//{
//	int arr[SIZE];
//	printf("%d\n", SIZE);
//	return 0;
//}

//define�����
//�����ɲ������ͺ�������

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//#define ADD(x,y) ((x)+(y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum1 = Add(a, b);
//	printf("sum1 = %d\n", sum1);
//	int sum2 = ADD(a, b);
//	printf("sum2 = %d\n", sum2);
//	return 0;
//}

//%p - ��ӡ��ַ��16��������
//int main()
//{
//	int a = 10;
//	//00000000 00000000 00000000 00001010
//	//0x	00 00	00  00	  00  00 a
//	// 0a 00 00 00
//	//printf("%p\n",&a);//ȡ��a��ռ4���ֽ��е�һ���ֽڵĵ�ַ
//	int* pa = &a;//&ȡ��ַ������
//
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//	//pa �ͽУ�ָ�����
//	return 0;
//}

//1.ָ�룬�����ǵ�ַ
//2.��ͷ���У�˵��ָ����ָ��ָ�����

//int main()
//{
//	int a = 10;
//	int* pa = &a;//&ȡ��ַ������
//	*pa = 20; //*�����ò���
//	printf("%d\n", a);
//
//	return 0;
//}

//Ҫ��֪��ָ������ж��
//ָ������洢����ʲô�� -��ַ
//��ַ�Ĵ洢��Ҫ���ռ䣬ָ������Ĵ�С���Ƕ��
//32λ���� - һ����ַ��32��������λ���洢��Ҫ32��bitλ�Ŀռ䣬��32λ�����ϣ�ָ������Ĵ�С��4���ֽ�
//64λ���� - һ����ַ��64��������λ���洢��Ҫ64��bitλ�Ŀռ䣬��64λ�����ϣ�ָ������Ĵ�С��8���ֽ�
//

//int main()
//{
//	printf("%zu\n", sizeof(char*));//%zu ר�Ŵ�ӡsizeof�ķ���ֵ
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//
//
//	return 0;
//}
//void test(double* pd)
//{
//	*pd = 5.6;
//}
//int main()
//{
//	double d = 3.14;
//	test(&d);
//	//double* pb = &d;
//	//*pb = 5.6;
//	//d = 5.6;
//	printf("%lf\n", d);
//	return 0;
//}

//struct Stu//����
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[15];
//};
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).id);
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->id);
//	//�ṹ��ָ�� -> �ṹ���Ա
//}
//
//int main()
//{
//	//struct Stu s = {"zhangsan",20,"man","2022010578"};//�ṹ�����
//	struct Stu s = { 0 };
//	//����
//	scanf("%s %s %s %d", s.name, s.sex, s.id, &(s.age));
//	printf("%s %d %s %s\n", s.name,s.age,s.sex,s.id);
//	printf(&s);
//	return 0;
//

/*nt main() {
	int i = 0;
	scanf("%d", &i);
	while (i)
	{
		int k = i % 10;
		printf("%d", k);
		i /= 10;
	}
	return 0;
}*/

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        if (n < 12)
//        {
//            printf("%d", 2);
//            break;
//        }
//        if (n >= 12) {
//            printf("%d",n/2)
//        }
//    }
//    return 0;
//}

//int main()
//{
//	int a = printf("Hello world!");
//	printf("\n%d", a);
//	return 0;
//}
int main()
{
	char a = 0;
	while (scanf("%c", &a) != EOF)
	{
		if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z') {
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		getchar();

	}
	
	return 0;
}