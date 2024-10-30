//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int charu(int arr[], int len, int num);
//int main() {
//	int arr[5] = { 0 };
//	int len = sizeof(arr) / sizeof(int);
//	srand(time(NULL));
//	for (int i = 0; i < len; i++) {
//	
//		int n = rand() % 100 + 1;
//		arr[i] = n;
//		printf("%d\n", arr[i]);
//
//	}
//	
//	int num ;
//	scanf("%d", &num);
//	 int index= charu(arr, len, num);
//
//
//	 printf("%d\n", index);
//
//	 srand(time(NULL));
//	 int number = rand() % 100 + 1;
//	 printf("%d\n", number);
//	 int guess;
//	 while (1) {
//		 printf("请输入数字:");
//		 scanf("%d", &guess);
//		 if (guess > number) {
//			 printf("大了");
//			 
//		 }
//
//		 else if (guess < number) {
//			 printf("小了");
//
//		 }
//		 else {
//			 printf("中了");
//			 break;
//		 }
//	 }
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
//
//int charu(int arr[], int len, int num) {
//	int min = 0;
//	int max = len - 1;
//	int mid = min + (num - arr[min]) / (arr[max] - arr[min]) * (max - min);
//	while (min <= max) {
//		int mid = min + (num - arr[min]) / (arr[max] - arr[min]) * (max - min);
//		if (arr[mid] < num) {
//			min = mid + 1;
//		}
//		else if (arr[mid] > num) {
//			max = mid - 1;
//		}
//		else {
//			return mid;
//		}
//	}
//
//	return -1;
//
//	
//	
//
//
//
//}