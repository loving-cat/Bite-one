#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����ˮ
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	/*total = money;
//	empty = money;
//	while (empty >= 2 )
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}*/
//
//	printf("%d\n", total);
//	return 0;
//}

//����ˮ�ɻ���

//void print2(int arr[],int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void move_even_odd(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		//��ǰ������һ��ż��ͣ����
//		while ((left<right)&&(arr[left]%2==1))
//		{
//			left ++;
//		}
//		while ((left<right)&&(arr[right]%2==0))
//		{
//			right;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//	print2(arr, sz);
//
//}
//int main()
//{
//	int arr[] = { 1,1,7,4,8,6,9,2,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move_even_odd(arr, sz);
//	return 0;
//}


//#include<math.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int ret = pow(10, n);
//    for (i = 1; i <= ret - 1; i++)
//    {
//        printf("%d ", i);
//    }
//	return 0;
//}

//int main()
//{
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	return 0;
//}

//int f(int n)
//{
//	static int i = 1;
//	if (n >= 5)
//		return n;
//	n = n + i;
//	i++;
//	return f(n);
//}
//int main()
//{
//	int n = 0;
//	int ret = f(n);
//	printf("%d", ret);
//	return 0;
//}

//void prt()
//{
//	for (int i = 5; i < 8; i++)
//		printf("%c", '*');
//	printf("\t");
//}
//int main()
//{
//	int i = 0;
//	for (i = 5; i <= 8; i++)
//		prt();
//	return 0;
//}\


//int main()
//{
//	int a = 3;
//	printf("%d\n", (a += a -= a * a));
//	return 0;
//}

//int main()
//{
//	int a[] = { 4,0,2,3,1 }, i, j, t;
//	for ( i = 1; i < 5; i++)
//	{
//		t = a[i];
//		j = i - 1;
//		while (j>=0&&t<a[j])
//		{
//			a[j + 1] = a[j];
//			--j;
//		}
//		a[j + 1] = t;
//	}
//	return 0;
//}

//int main()
//{
//	char ch[80] = "123abcdEFG*&";
//	int j;
//	puts(ch);
//	for ( j = 0; j != '\0'; j++)
//		if (ch[j] >= 'A' && ch[j] <= 'Z')
//			ch[j] = ch[j] + 'e' - 'E';
//	puts(ch);
//	
//	return 0;
//}


//int main()
//{
//	char ch;
//	while ((ch=getchar())!='\n')
//	{
//		if (ch % 2 != 0 && (ch >= 'a' && ch <= 'z'))
//			ch = ch - 'a' + 'A';
//		putchar(ch);
//	}
//	printf("\n");
//	return 0;
//}


//int dominantIndex(int* nums, int numsSize)
//{
//    if (numsSize == 1)
//        return 0;      // ���ֻ��һa�����֣���Ŀ���������������Է����±�0
//    int max = 0;       // ��֪����int�����ڵ���0
//    int second = 0;
//    int index = 0;     // ��index�������ֵ���±�
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] > max)
//        {
//            second = max;  // ԭ�����ֵ����Ϊ�δ�ֵ
//            max = nums[i]; // �������ֵ
//            index = i;     // �������ֵ�±�
//        }
//        else if (nums[i] > second) // ��С��max
//        {
//            second = nums[i]; // ���´δ�ֵ
//        }
//    }
//    return (max >= (2 * second)) ? index : -1;
//}


//int cmp(const void* a, const void* b) {                  //����������
//    return (*(int*)a - *(int*)b);
//}
//
//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//    int* res = (int*)malloc(sizeof(int) * nums1Size);   //�������
//    *returnSize = 0;
//
//    qsort(nums1, nums1Size, sizeof(nums1[0]), cmp);     //num1����
//    qsort(nums2, nums2Size, sizeof(nums2[0]), cmp);     //num2����
//
//    for (int i = 0, j = 0; i < nums1Size; ++i) {              //����num1
//        if (i != 0 && nums1[i] == nums1[i - 1])            //�����ظ�ֵ
//            continue;
//        int low = 0, high = nums2Size - 1, mid;
//        while (low <= high) {                             //���ַ�����num2���Ƿ���ͬ����ֵ
//            mid = (low + high) / 2;
//            if (nums2[mid] == nums1[i]) {                 //��ͬ����ֵ�����������
//                res[j++] = nums1[i];
//                (*returnSize)++;
//                break;
//            }
//            else if (nums2[mid] < nums1[i])
//                low = mid + 1;
//            else
//                high = mid - 1;
//        }
//    }
//
//    return res;
//}


int main()
{
	int x = 0;
	int y = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (1003 * i + 503 * j == 27805)
			{
				printf("x=%d,y=%d", i, j);
			}
		}
		
	}
	return 0;
}

