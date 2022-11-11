#define  _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "abc";//字符串结尾有个隐藏的'\0'
//	char arr2[3] = { 'a','b','c' };
//	int a = sizeof(arr1);
//	int b = sizeof(arr2);
//	printf("%d %d\n", a, b);
//	return 0;
//}
////4 3


//#include <stdio.h>
//int  main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//冒泡排序
//#include <stdio.h>
//
//void bubble_sort(int arr[],int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz - 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < sz - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
//    bubble_sort(arr,sz);
//    for (i = 0; i <sz - 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//	return 0;
//}



//二维数组数组名的理解
//#include <stdio.h>
//
//int main()
//{
//	int arr[3][4];
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", arr[0]);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int sz1 = sizeof(arr[0]) / sizeof(arr[0][0]);
//	printf("%d\n", sz);
//	printf("%d\n", sz1);
//
//
//	return 0;
//}



//一维数组数组名的理解
#include <stdio.h>
int main()
{
	int arr[10];
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);


	return 0;
}