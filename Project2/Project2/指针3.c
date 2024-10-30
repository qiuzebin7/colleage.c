//#include<stdio.h>
//int main() {
//	int arr1[5] = { 5,4,3,2,1 };
//	int arr2[5] = { 55,44,33,22,11 };
//	int arr3[5] = { 555,444,333,222,111 };
//	int *arr[3] = { arr1,arr2,arr3 };
//	int** p = &arr;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%3d ", *(*p + j));
//		}
//		printf("\n");
//		p++;
//	}
//
//	int* p1 = arr1;
//	int* p2 = &arr1;
//	printf("%p\n", arr1);
//	printf("%p\n", arr1+1);
//	printf("%p\n", &arr1);
//	printf("%p\n", &arr1 + 1);
//
//	return 0;
//}