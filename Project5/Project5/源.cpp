#include<stdio.h>
#include<string.h>


//数组的创建
//type_t 是指数组的元素类型
//const_n 是一个常量表达式，用来指定数组的大小
//arr_name 是数组名
//数组的初始化：在创建数组的同时给数组的内容一些合理初始值（初始化）。
//int arr[10] = { 1,2,3 };这个是不完全初始化，剩下的元素默认为0。
//char arr[10]={'a' ,'b'};剩下的元素默认为0。
//char arr[5] = "ab";里面的a，b，\0和剩下的两个零，\0的码值也是0。
//char arr[] = "abcdef";没有指定数组大小，元素是'a','b','c','d','e','f','\0'
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//sizeof 是计算arr所占空间的大小
//strlen 是求字符串长度  到\0,但是不取\0。


//1.strlen 和sizeof没有什么联系
//2.strlen 是求字符串长度的，只能针对字符串长度    库函数，使用得引头文件
//3.sizeof 计算变量、数组、类型的大小，单位是字节    操作符

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
//	printf("%d\n", strlen(arr1));// 之计入\0之前的字符，\0不计入字符，后面的全部不计入，只有3个
//	printf("%d\n", strlen(arr2));// 没有\0，随机计入字符个数
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%c", arr[3]);//用下标求对应字符
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char arr[] = "abcdef";
//	for (i = 0; i < strlen(arr); i++)//strlen(arr)=6     若报错在strlen前加(int)
//	{
//		printf("%c ", arr[i]);//for循环,用下表打印对应字符
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
//		printf("&arr[%d]=%p\n", i, &arr[i]);//数组在存放中是连续的，一个存放四个字符。元素的地址在有规律的递增。
//	}
//	return 0;
//}


//二维数组
//创建数组
// int arr[3][4];三行四列
// char arr[3][5];三行五列
// double arr[2][4];两行四列

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[][4] = { 1,2,3,4,5,6,7,8,9,10 };//行可以省略，列不可以省略
//	//所谓的行是指二维数组里有几个数组，列就是这些数组含有多少个元素
//	return 0;
//}

//二维数组初始化
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

//二维数组在内存中的存储
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
//			printf("&arr[%d][%d]=%p\n", i,j,&arr[i][j]);//打印地址，连续递增
//		}
//	}
//	return 0;
//}

//泡沫排序函数
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
//				fleg = 0;//本趟排序的数据不完全有序
//			}
//		}
//		if (fleg == 1)//本次排序有序
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 9,10,1,2 };
//	//对arr进行排序，排成升序
//    //arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址&arr[0]
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
//	printf("%p\n", arr);//          元素首地址
//	printf("%p\n", arr + 1);//		元素加以表示第二个元素，地址加4个字节
//
//	printf("%p\n", &arr[0]);//		元素首地址
//	printf("%p\n", &arr[1]);//		元素加以表示第二个元素，地址加4个字节
//
//	printf("%p\n", &arr);//			整个数组的地址，虽然看起来和首地址一样，但是意义不一样
//	printf("%p\n", &arr+1);//		整个数组加一，地址加28个字符，4*7=28
//
//	printf("%d\n", *arr);//			首地址的值
//	printf("%d\n", *arr+1);
//	return 0;
//}
//数组名是元素的首地址（有两个例外）
// 1. sizeof(arr)/sizrof(arr[0])		sizeof(数组名）=数组名arr在sizeof中计算的是整个数组的大小，单位是字节
// 2. &数组名，取出的是数组的地址。     &数组名，数组名表示整个数组