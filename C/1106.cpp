#define _CRT_SECURE_NO_WARNINGS;

//����ַ��������ƶ�,���м���
//#include<stdio.h>
//int main()
//{
//    char arr1[] = "welcome to bit ...";
//    char arr2[] = "##################";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//    printf("%s\n", arr2);
//    for (left = 0, right = strlen(arr1) - 1; left <= right; left++, right--) {
//        Sleep(1000);//Sд��Сд�ĵ��µ�һ��û�����гɹ�
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//    }
//    return 0;
//}





//���ֲ���
//#include<stdio.h>
//int bin_search(int arr[], int left, int right, int key)
//{
//    int mid = 0;
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (arr[mid] > key)
//        {
//            right = mid - 1;
//        }
//        else if (arr[mid] < key)
//        {
//            left = mid + 1;
//        }
//        else
//            return mid;
//    }
//    return -1;
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int left = 0;
//    int right = sizeof(arr) / sizeof(arr[0]) - 1;
//    int key = 7;
//    int mid = 0;
//    mid = bin_search(arr, left, right, key);
//    if (mid > 0)
//        printf("�ҵ���,�±���%d\n", mid);
//    else
//        printf("�Ҳ���!");
//    return 0;
//}





//������Ϸ
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.play     **********\n");
//	printf("*********** 0.exit     **********\n");
//	printf("**********************************\n");
//}
////RAND_MAX--rand�����ܷ�������������ֵ��
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("������µ�����>:");
//		scanf_s("%d", &input);//scanf_s������VS
//		if (input > random_num)
//		{
//			printf("�´���\n");
//		}
//		else if (input < random_num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ�����,����������!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}