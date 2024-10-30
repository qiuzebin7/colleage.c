//#include<stdio.h>
//void swep(void* p1, void* p2, int len);
//int main() {
//	/*int a = 10;
//	int* p = &a;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//	printf("%p\n", p+2);*/
//
//
//
//
//
//
//
//
//	//指针运算的有意义运算和无意义运算
//	//有意义；指针与整数的加减
//	//指针与指针的减
//	//无意义的
//	//指针与整数的乘除   指针与指针的加乘除
//	//int arr[] = {1,2,3,4,5,6,7};
//	//int*p = &arr[0];
//	////printf("%d\n", *p);
//	////int* p1 = &arr[5];
//	////printf("%d\n", *p1);
//	////printf("%d\n", p1-p);
//	////printf("%p\n", p1);
//	//printf("%p\n", p);
//
//	//野指针和悬空指针
//
//	//void类型的指针
//	//调用两变量的数据
//
//
//
//
//
//
//	float a = 10.54;
//	float b = 20.24;
//	printf("%4.2f, %4.2f", a, b);
//	printf("\n");
//	swep(&a, &b, 4);
//	printf("%3.1f ,%4.2f", a, b);
//
//
//
//	return 0;
//}
//void swep(void *p1, void *p2, int len) {
//
//	char* pc1=p1;
//	char* pc2=p2;
//	char temp;
//	for (int i = 0; i < len; i++) {
//		temp = *pc1;
//		*pc1 = *pc2;
//		*pc2 = temp;
//		pc1++;
//		pc2++;
//	}
//}