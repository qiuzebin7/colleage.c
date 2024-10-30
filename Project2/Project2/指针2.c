//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main() {
//
//	//二级指针
//	//格式；数据类型**指针名
//	//int a = 10;
//	//int* p = &a;
//	//int** pp = &p;
//	//int b = 20;
//	//*pp = &b;
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	//printf("%p\n", *pp);
//	//printf("%d\n", **pp);
//
//
////数组指针
//	//定义一个数组
////	srand(time(NULL));
////	int arr[] = {2,5,4,7};
////	//利用指针获取数组的值
////	//int len = sizeof(arr) / sizeof(int);
////	//int* p1 = arr;
////	//printf("%d\n", *p1);
////	////设置一个循环遍历数组
////	//for (int i = 1; i < len;i++) {
////	//	printf("%d\n", *p1++);
////
////
////
////	
////
////	//数组指针的细节
////	//arr的退化
////	//arr参与计算时，会退化为第一个元素的指针
////	//sizeof运算时不会退化，arr还是整体
////	//&arr获取地址的时候不会退化
////	
////printf("%p\n", arr+1);
////printf("%p\n", arr );
////printf("%d\n", sizeof(arr));
//
//
//
//
//
//
//	////二维数组
//	////二维数组的两种表示形式
//	//int arr[3][5] = {
//	//	{ 2, 3, 4, 5, 6 },
//	//	{11,22,33,44,55},
//	//	{111,222,333,444,555}
//
//
//
//	//};
//	///*int arr[2] = { 3,5 };
//	//int arr1[5] = { 3,5,66,4,5 };
//	//int* arr2[2] = { arr[2],arr1[5] };*/
//
//	////遍历
//	//for (int i = 0; i < 3; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//
//
//	
//
//	//遍历数组
//	//int arr1[2] = { 2,5 };
//	//int arr2[5] = { 5,4,6,2,1 };
//	//int arr3[4] = { 4,5,7,9 };
//	//int* arr[3] = { arr1,arr2,arr3 };
//
//
//	
//	//int len1 = sizeof(arr1) / sizeof(int);
//	//int len2 = sizeof(arr2) / sizeof(int);
//	//int len3 = sizeof(arr3) / sizeof(int);
//	//int len[3] = { len1, len2, len3 };
//	//for (int i = 0; i < 3; i++) {
//	//	
//
//	//	for (int j = 0; j < len[i]; j++) {
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//
//	//利用指针遍历数组
//	/*int arr[3][5] = {
//		{3,5,6,4,7},
//		{33,55,66,44,77},
//		{333,555,666,444,777}
//
//
//	};
//	int (* p)[5] = arr;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%d ", *(*p + j));
//		}
//		printf("\n");
//		p++;
//	}*/
//
//
//
//
//
//
//
//	return 0;
//}