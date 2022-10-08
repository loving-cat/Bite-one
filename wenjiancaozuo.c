#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//文件操作

//写文件
//int main()
//{
//	//打开文件
//	//相对路径
//	FILE *pf = fopen("c:\\code\\test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		fputc('a' + i, pf);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	//相对路径
//	FILE* pf = fopen("c:\\code\\test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
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
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	//相对路径
//	FILE* pf = fopen("c:\\code\\test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件 -  一行一行写
//	fputs("hello\n", pf);
//	fputs("bic", pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	//相对路径
//	FILE* pf = fopen("c:\\code\\test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件 -  一行一行读
//	char arr[] = "########";
//	fputs(arr, 8, pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	//相对路径
//	FILE* pf = fopen("c:\\code\\test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件 -  一行一行读
//	char arr[20] = "########";
//	fgets(arr, 20, pf);
//	printf("%s", arr);
//
//	fgets(arr, 20, pf);
//	printf("%s", arr);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//写一个结构体的数据

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
//	//把s中的数据写到文件重
//	FILE* pf = fopen("test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fprintf(pf,"%s %d %f",s.name,s.age,s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//读取一个结构体数据

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
//	//把s中的数据写到文件重
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
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

//二进制的形式 :读取一个结构体数据

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
//	//把s中的数据写到文件重
//	FILE* pf = fopen("test.txt", "wb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制 写文件
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
	//把s中的数据写到文件重
	FILE* pf = fopen("test.txt", "rb");
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}
	//二进制 读文件
	fread(&s, sizeof(s), 1, pf);

	printf("%s %d %f\n", s.name, s.age, s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}