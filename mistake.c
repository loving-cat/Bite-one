#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//喝汽水
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

//变种水仙花数

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
//		//从前往后找一个偶数停下来
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
//        return 0;      // 如果只有一a个数字，题目中满足条件，所以返回下标0
//    int max = 0;       // 已知所有int都大于等于0
//    int second = 0;
//    int index = 0;     // 用index储存最大值的下标
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] > max)
//        {
//            second = max;  // 原来最大值更新为次大值
//            max = nums[i]; // 更新最大值
//            index = i;     // 更新最大值下标
//        }
//        else if (nums[i] > second) // 但小于max
//        {
//            second = nums[i]; // 更新次大值
//        }
//    }
//    return (max >= (2 * second)) ? index : -1;
//}


//int cmp(const void* a, const void* b) {                  //按升序排序
//    return (*(int*)a - *(int*)b);
//}
//
//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//    int* res = (int*)malloc(sizeof(int) * nums1Size);   //结果数组
//    *returnSize = 0;
//
//    qsort(nums1, nums1Size, sizeof(nums1[0]), cmp);     //num1排序
//    qsort(nums2, nums2Size, sizeof(nums2[0]), cmp);     //num2排序
//
//    for (int i = 0, j = 0; i < nums1Size; ++i) {              //遍历num1
//        if (i != 0 && nums1[i] == nums1[i - 1])            //跳过重复值
//            continue;
//        int low = 0, high = nums2Size - 1, mid;
//        while (low <= high) {                             //二分法查找num2中是否有同样的值
//            mid = (low + high) / 2;
//            if (nums2[mid] == nums1[i]) {                 //有同样的值则存入结果数组
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
//    int* ans = malloc(sizeof(int) * (numsSize + 1));//申请空间，作为简易哈希表
//    for (int i = 0; i < numsSize; i++)
//    {
//        ans[nums[i]] = 1;//记录出现元素
//    }
//    *returnSize = 0;
//    for (int i = 1; i <= numsSize; i++)
//    {
//        if (ans[i] != 1)//对为出现的元素保存输出
//        {
//            ans[(*returnSize)++] = i;
//        }
//    }
//    return ans;
//}

//int findMaxConsecutiveOnes(int* nums, int numsSize) {
//    int ret = 0;    //定义一个返回值
//    int ret_temp = 0;//定义一个返回的暂存值
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == 1) {      //如果值为1
//            ret_temp++;         //暂存值的个数加一
//            if (ret_temp > ret) {
//                ret = ret_temp; //刷新返回个数
//            }
//        }
//        else {
//            ret_temp = 0;       //清零
//        }
//    }
//    return ret;
//}
//#define r -1

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int right = nums1Size + nums2Size;
    double nums[right];//构造数组
    int s = 0;
    int i = 0; int j = 0;
    while (1)//寻找中位数
    {
        if (i < nums1Size && j < nums2Size)//两个有序数组合并
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
        //判断是否满足中位数长度
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
