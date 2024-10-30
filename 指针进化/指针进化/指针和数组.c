//#include<stdio.h>
//int main() {
//	int a[5] = { 1,2,3,4,5 };
//	int* p = a;
//	for (int i = 0; i < 5; i++)
//	{
//		/*printf("%d\n", a[i]);*/
//		printf("%d\n", *p++);//通过指针的形式访问数组a[i]等价于*（a+i)
//	}
//	char* str = "helloworld";
//	printf("%c\n", *str);
//	//                          通过数组的形式访问指针
//	int len = sizeof(str) / sizeof(char);
//	for (int i = 0; i < len+1+1; i++)
//	{
//		printf("%c", str[i]);
//	}
//	return 0;
//}