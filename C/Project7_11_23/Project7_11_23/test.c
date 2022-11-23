#define  _CRT_SECURE_NO_WARNINGS 

//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;//p是一级指针
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(p, sz);//传的是一级指针,而不是一级指针的地址
//	return 0;
//}


//#include <stdio.h>
//
//void test(int** p)
//{
//	printf("%d\n", **p);
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	test(&p);
//	return 0;
//}


//#include <stdio.h>
//void test(int** ptr)//二级指针接收
//{                   //二级指针可以接收二级指针或者一级指针的地址
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;  //一级指针
//	int** pp = &p;//二级指针
//	test(pp);     //传的是二级指针
//	test(&p);     //传一级指针的地址
//	return 0;
//}


//#include <stdio.h>
//void test(int arr[])    //可行,可以不标注数组的大小
//{}
//void test(int arr[10])  //可行,可用和传递的数组相同的表示方法
//{}
//void test(int* arr)     //可行,传过来的是整型指针
//{}
//void test2(int* arr[20])//可行,与传过来的数组相同
//{}
//void test2(int** arr)   //可行,传过来的相当于是一级指针
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);  //传递的是一维数组首元素的地址(整型指针)
//	test2(arr2);//传递的是一维数组首元素的地址(一级指针),则相当于传递的是一级指针的地址
//}


//#include <stdio.h>
//void test(int arr[3][5])//可行,与传递的数组相同
//{}
//void test(int arr[][])//不可行,二维数组不可以省略列数
//{}
//void test(int arr[][5])//可行,可以不知道有多少行,但必须知道有多少列
//{}
//void test(int* arr)//不可行,传过来的是以为数组的地址,大小为20个字节,函数的参数是整型指针大小为4个字节,大小不匹配
//{}
//void test(int* arr[5])//不可行,函数的参数是一个指针数组,是数组
//{}
//void test(int(*arr)[5])//可行,函数的参数是数组指针,是指针
//{}
//void test(int** arr)//不可行,传过来的不是一级指针的地址,二级指针存放的是一级指针的地址
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//将一维数组的首元素地址传给函数,以为数组的首元素也就是第一行的地址,相当于一个一维数组
//	          //传递给函数的是数组指针
//}



//#include <stdio.h>
//void test()
//{
//	printf("txw,yyds\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}
