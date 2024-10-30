//#include<stdio.h>
//
//
//
//int xunhuan(int arr[], int len);
//
//int main() {
//	int arr[] = { 3,5,2,1,4 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int a = xunhuan(arr, len);
//	
//
//
//
//
//
//
//
//
//	return 0;
//}
//
//
//
////内循环；
//
//
//int xunhuan(int arr[], int len) {
//	for (int i = 0; i < len - 1; i++) {
//		//第一轮
//		//i=0 j=1  
//
//
//		//i=3 j=4
//		for (int j = i+1; j < len; j++) {
//			if (arr[i] > arr[j]) {
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//
//			}
//
//
//		}
//		
//
//	}
//	for (int i = 0; i < len; i++) {
//		printf("%d\n", arr[i]);
//	}
//}
