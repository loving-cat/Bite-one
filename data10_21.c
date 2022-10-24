#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<time.h>
//int main()
//{
//	size_t begin = clock();
//	size_t n = 0;
//	for (size_t i = 0; i < 100; i++)
//	{
//		++n;
//	}
//	size_t end = clock();
//	printf("%dºÁÃë\n", begin - end);
//	return 0;
//}

//void swap(int* x, int* y)
//{
//    int tmp = *x;
//    *x = *y;
//    *y = tmp;
//}
//
//void reverse(int* nums, int left, int right)
//{
//    while (left < right) {
//        swap(&nums[left], &nums[right]);
//        ++left;
//        --right;
//    }
//}
//
//void rotate(int* nums, int numsSize, int k) {
//
//    k %= numsSize;
//    reverse(nums, 0, numsSize - 1);
//    reverse(nums, 0, k - 1);
//    reverse(nums, k, numsSize - 1);
//}

int removeElement(int* nums, int numsSize, int val) {
    int left = 0;
    int right = numsSize;
    while (left < right)
    {
        if (nums[left] == val)
        {
            nums[left] = nums[right - 1];
            right--;
        }
        else
        {
            left++;
        }
    }
    return left;
}