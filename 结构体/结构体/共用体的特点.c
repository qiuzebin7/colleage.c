//#include<stdio.h>
//#include<string.h>
//union a {
//	char s[100];//最大成员长度不是他，他指的是100个char字符；
//	int b;
//	double c;//8个字节
//
//
//};
//int main() {
//	//1.共用体也叫共同体，联合体
//	//2.共用体的内存大小=最大成员的长度  注意也与内存对齐有关
//	//细节；共用体的大小必须是最大成员长度的整数倍
//	//3.所有变量都共用一个内存空间
//	//4.每次只能给这个变量赋值一次
//	union a f;
//	printf("%zu\n", sizeof(f.s));
//	printf("%zu\n", sizeof(f.b));
//	printf("%zu\n", sizeof(f.c));
//	printf("%zu\n", sizeof(f));
//	printf("%p\n", &(f.b));
//	printf("%p\n", &(f.s));
//	printf("%p\n", &(f.c));
//
//	return 0;
//}