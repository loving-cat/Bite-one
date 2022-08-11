#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int cdd(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pf)(int x, int y) = cdd;
//	int sum = (*pf)(3, 5);
//	return 0;
//}

#include<stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        int j = 0;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (i > 1 && i < n)
                {
                    if (j>1&&j<n)
                    { 
                        printf("  ");
                    }
                    else
                    {
                        printf("* ");
                    }
                }
                else
                {
                    printf("* ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}