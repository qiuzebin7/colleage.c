//#include<stdio.h>
//int main()
//{
//	//冒泡排序；
//	//1.相邻的元素两两比较大小，小在做左边，大的在右边；/
//	//2.第一轮结束之后最大值已经确定，第二轮少循环一次，后面以此类推；
//	//3.如果数组中有n个数据，执行n-1次代码；
//	//需求；
//	//利用冒泡排序将3，5，2，1，4从小到大排序；
//	int arr[] = { 3,5,2,1,4 };
//	int len = sizeof(arr) / sizeof(int);
//	char a = '\n';
//	
//
//
//
//	for (int j = 0; j < len-1; j++) {
//
//		for (int i = 0; i < len - 1 - j; i++) {
//			if (arr[i] > arr[i + 1]) {
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//
//
//			}
//
//		}
//		
//		printf("%c", a);
//
//
//
//
//	}
//	for (int i = 0; i < len; i++) {
//		printf("%d", arr[i]);
//	}
//	return 0;
//}