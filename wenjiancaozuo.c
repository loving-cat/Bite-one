#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�ļ�����

//д�ļ�
//int main()
//{
//	//���ļ�
//	//���·��
//	FILE *pf = fopen("c:\\code\\test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		fputc('a' + i, pf);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//���ļ�
//	//���·��
//	FILE* pf = fopen("c:\\code\\test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	//int ch = fgetc(pf);
//	int i = 0;
//	for ( i = 0; i < 26; i++)
//	{
//		int ch = fgetc(pf);
//		printf("%c", ch);
//	}
//	/*int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}*/
//
//	//printf("%c\n", ch);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//���ļ�
//	//���·��
//	FILE* pf = fopen("c:\\code\\test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ� -  һ��һ��д
//	fputs("hello\n", pf);
//	fputs("bic", pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//���ļ�
//	//���·��
//	FILE* pf = fopen("c:\\code\\test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ� -  һ��һ�ж�
//	char arr[] = "########";
//	fputs(arr, 8, pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//���ļ�
//	//���·��
//	FILE* pf = fopen("c:\\code\\test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ� -  һ��һ�ж�
//	char arr[20] = "########";
//	fgets(arr, 20, pf);
//	printf("%s", arr);
//
//	fgets(arr, 20, pf);
//	printf("%s", arr);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//дһ���ṹ�������

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "zhangsan",18,95.5f };
//	//��s�е�����д���ļ���
//	FILE* pf = fopen("test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fprintf(pf,"%s %d %f",s.name,s.age,s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��ȡһ���ṹ������

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "zhangsan",18,95.5f };
//	//��s�е�����д���ļ���
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//
//	printf("%s %d %f", s.name, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//scanf(...)
//fscanf(stdout,...)

//printf
//fprintf(stdout,....)
//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}

//�����Ƶ���ʽ :��ȡһ���ṹ������

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "zhangsan",18,95.5f };
//	//��s�е�����д���ļ���
//	FILE* pf = fopen("test.txt", "wb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//������ д�ļ�
//	fwrite(&s,sizeof(s),1,pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

struct S
{
	char name[20];
	int age;
	float score;
};

int main()
{
	struct S s = { 0 };
	//��s�е�����д���ļ���
	FILE* pf = fopen("test.txt", "rb");
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}
	//������ ���ļ�
	fread(&s, sizeof(s), 1, pf);

	printf("%s %d %f\n", s.name, s.age, s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}