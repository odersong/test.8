#include<stdio.h>
#include<string.h>


//����Ĵ���
//type_t ��ָ�����Ԫ������
//const_n ��һ���������ʽ������ָ������Ĵ�С
//arr_name ��������
//����ĳ�ʼ�����ڴ��������ͬʱ�����������һЩ�����ʼֵ����ʼ������
//int arr[10] = { 1,2,3 };����ǲ���ȫ��ʼ����ʣ�µ�Ԫ��Ĭ��Ϊ0��
//char arr[10]={'a' ,'b'};ʣ�µ�Ԫ��Ĭ��Ϊ0��
//char arr[5] = "ab";�����a��b��\0��ʣ�µ������㣬\0����ֵҲ��0��
//char arr[] = "abcdef";û��ָ�������С��Ԫ����'a','b','c','d','e','f','\0'
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//sizeof �Ǽ���arr��ռ�ռ�Ĵ�С
//strlen �����ַ�������  ��\0,���ǲ�ȡ\0��


//1.strlen ��sizeofû��ʲô��ϵ
//2.strlen �����ַ������ȵģ�ֻ������ַ�������    �⺯����ʹ�õ���ͷ�ļ�
//3.sizeof ������������顢���͵Ĵ�С����λ���ֽ�    ������

//int main()
//{
//	char arr[10] = "abcd";
//	printf("%d\n", sizeof(arr));//10
//	printf("%d\n", strlen(arr));//4
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//'a' , 'b' , 'c' , '\0'
//	char arr2[] = { 'a','b','c' };//'a' , 'b' , 'c'
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));// ֮����\0֮ǰ���ַ���\0�������ַ��������ȫ�������룬ֻ��3��
//	printf("%d\n", strlen(arr2));// û��\0����������ַ�����
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%c", arr[3]);//���±����Ӧ�ַ�
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char arr[] = "abcdef";
//	for (i = 0; i < strlen(arr); i++)//strlen(arr)=6     ��������strlenǰ��(int)
//	{
//		printf("%c ", arr[i]);//forѭ��,���±��ӡ��Ӧ�ַ�
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);//�����ڴ�����������ģ�һ������ĸ��ַ���Ԫ�صĵ�ַ���й��ɵĵ�����
//	}
//	return 0;
//}


//��ά����
//��������
// int arr[3][4];��������
// char arr[3][5];��������
// double arr[2][4];��������

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[][4] = { 1,2,3,4,5,6,7,8,9,10 };//�п���ʡ�ԣ��в�����ʡ��
//	//��ν������ָ��ά�������м������飬�о�����Щ���麬�ж��ٸ�Ԫ��
//	return 0;
//}

//��ά�����ʼ��
//int main()
//{
//	int arr[3][4] = { {1,2},{3,4} };
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2},{3,4} };
//	//1 2 0 0
//	//3 4 0 0
//	//0 0 0 0
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��ά�������ڴ��еĴ洢
//int main()
//{
//	int arr[3][4] = { {1,2},{3,4} };
//	//1 2 0 0
//	//3 4 0 0
//	//0 0 0 0
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i,j,&arr[i][j]);//��ӡ��ַ����������
//		}
//	}
//	return 0;
//}

//��ĭ������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int fleg = 1;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				fleg = 0;//������������ݲ���ȫ����
//			}
//		}
//		if (fleg == 1)//������������
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 9,10,1,2 };
//	//��arr���������ų�����
//    //arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ&arr[0]
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);//          Ԫ���׵�ַ
//	printf("%p\n", arr + 1);//		Ԫ�ؼ��Ա�ʾ�ڶ���Ԫ�أ���ַ��4���ֽ�
//
//	printf("%p\n", &arr[0]);//		Ԫ���׵�ַ
//	printf("%p\n", &arr[1]);//		Ԫ�ؼ��Ա�ʾ�ڶ���Ԫ�أ���ַ��4���ֽ�
//
//	printf("%p\n", &arr);//			��������ĵ�ַ����Ȼ���������׵�ַһ�����������岻һ��
//	printf("%p\n", &arr+1);//		���������һ����ַ��28���ַ���4*7=28
//
//	printf("%d\n", *arr);//			�׵�ַ��ֵ
//	printf("%d\n", *arr+1);
//	return 0;
//}
//��������Ԫ�ص��׵�ַ�����������⣩
// 1. sizeof(arr)/sizrof(arr[0])		sizeof(��������=������arr��sizeof�м��������������Ĵ�С����λ���ֽ�
// 2. &��������ȡ����������ĵ�ַ��     &����������������ʾ��������