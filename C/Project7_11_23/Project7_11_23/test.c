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
//	int* p = arr;//p��һ��ָ��
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(p, sz);//������һ��ָ��,������һ��ָ��ĵ�ַ
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
//void test(int** ptr)//����ָ�����
//{                   //����ָ����Խ��ն���ָ�����һ��ָ��ĵ�ַ
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;  //һ��ָ��
//	int** pp = &p;//����ָ��
//	test(pp);     //�����Ƕ���ָ��
//	test(&p);     //��һ��ָ��ĵ�ַ
//	return 0;
//}


//#include <stdio.h>
//void test(int arr[])    //����,���Բ���ע����Ĵ�С
//{}
//void test(int arr[10])  //����,���úʹ��ݵ�������ͬ�ı�ʾ����
//{}
//void test(int* arr)     //����,��������������ָ��
//{}
//void test2(int* arr[20])//����,�봫������������ͬ
//{}
//void test2(int** arr)   //����,���������൱����һ��ָ��
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);  //���ݵ���һά������Ԫ�صĵ�ַ(����ָ��)
//	test2(arr2);//���ݵ���һά������Ԫ�صĵ�ַ(һ��ָ��),���൱�ڴ��ݵ���һ��ָ��ĵ�ַ
//}


//#include <stdio.h>
//void test(int arr[3][5])//����,�봫�ݵ�������ͬ
//{}
//void test(int arr[][])//������,��ά���鲻����ʡ������
//{}
//void test(int arr[][5])//����,���Բ�֪���ж�����,������֪���ж�����
//{}
//void test(int* arr)//������,������������Ϊ����ĵ�ַ,��СΪ20���ֽ�,�����Ĳ���������ָ���СΪ4���ֽ�,��С��ƥ��
//{}
//void test(int* arr[5])//������,�����Ĳ�����һ��ָ������,������
//{}
//void test(int(*arr)[5])//����,�����Ĳ���������ָ��,��ָ��
//{}
//void test(int** arr)//������,�������Ĳ���һ��ָ��ĵ�ַ,����ָ���ŵ���һ��ָ��ĵ�ַ
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//��һά�������Ԫ�ص�ַ��������,��Ϊ�������Ԫ��Ҳ���ǵ�һ�еĵ�ַ,�൱��һ��һά����
//	          //���ݸ�������������ָ��
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
