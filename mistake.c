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


//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		for (int j = 0; j < 100; j++)
//		{
//			if (1003 * i + 503 * j == 27805)
//			{
//				printf("x=%d,y=%d", i, j);
//			}
//		}
//		
//	}
//	return 0;
//}


//int func(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x >> 1;
//	}
//	return count;
//}
//int main()
//{
//	int n = -1;
//	int ret = func(n);
//	printf("%d", ret);
//	return 0;
//}


//int main()
//{
//	int a = 1, b = 2, m = 0,n = 0, k;
//	k = (n = b < a) && (m = a);
//	printf("%d,%d\n", k, m);
//	return 0;
//}

//void func()
//{
//	int k = 1 ^ (1 << 31 >> 31);
//	printf("%d\n", k);
//}
//int fun(unsigned int x)
//{
//	int n = 0;
//	while (x + 1)
//	{
//		n++;
//		x = x | (x + 1);
//	}
//	return n;
//}
//int main()
//{
//	//func();
//	/*unsigned short x = 65530;
//	unsigned int y = x;
//	printf("%p", y);*/
//	int n = 2014;
//	int ret = fun(n);
//	printf("%d", ret);
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	if (NULL == p && num <= 0)
//		return;
//	*p = (char*)malloc(num);
//	return;
//}
//int main()
//{
//	char* str = NULL;
//	GetMemory(&str, 80);
//	if (NULL != str)
//	{
//		strcpy(&str, "hello");
//		printf(str);
//	}
//	return 0;
//}

//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
//    int* ans = malloc(sizeof(int) * (numsSize + 1));//����ռ䣬��Ϊ���׹�ϣ��
//    for (int i = 0; i < numsSize; i++)
//    {
//        ans[nums[i]] = 1;//��¼����Ԫ��
//    }
//    *returnSize = 0;
//    for (int i = 1; i <= numsSize; i++)
//    {
//        if (ans[i] != 1)//��Ϊ���ֵ�Ԫ�ر������
//        {
//            ans[(*returnSize)++] = i;
//        }
//    }
//    return ans;
//}

//int findMaxConsecutiveOnes(int* nums, int numsSize) {
//    int ret = 0;    //����һ������ֵ
//    int ret_temp = 0;//����һ�����ص��ݴ�ֵ
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == 1) {      //���ֵΪ1
//            ret_temp++;         //�ݴ�ֵ�ĸ�����һ
//            if (ret_temp > ret) {
//                ret = ret_temp; //ˢ�·��ظ���
//            }
//        }
//        else {
//            ret_temp = 0;       //����
//        }
//    }
//    return ret;
//}
//#define r -1

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int right = nums1Size + nums2Size;
    double nums[right];//��������
    int s = 0;
    int i = 0; int j = 0;
    while (1)//Ѱ����λ��
    {
        if (i < nums1Size && j < nums2Size)//������������ϲ�
        {
            if (nums1[i] < nums2[j])
            {
                nums[s++] = nums1[i];
                i++;
            }
            else
            {
                nums[s++] = nums2[j];
                j++;
            }
        }
        else if (i < nums1Size)
        {
            nums[s++] = nums1[i];
            i++;
        }
        else if (j < nums2Size)
        {
            nums[s++] = nums2[j];
            j++;
        }
        //�ж��Ƿ�������λ������
        if (right % 2)
        {
            if (right / 2 + 1 == s)
            {
                return nums[s - 1];
            }
        }
        else
        {
            if (right / 2 + 1 == s)
            {
                return (nums[s - 1] + nums[s - 2]) / 2;
            }
        }
    }
    return 0;
}
