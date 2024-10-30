//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main() {
//	char* str = (char*)malloc(128);
//	int small = 0;
//	int big = 0;
//	int shuzi = 0;
//
//	printf("请输入一个字符串：");
//	gets(str);
//	printf("%s\n", str);
//	for (int i = 1; i <= strlen(str); i++)
//	{
//		char c = str[i];
//		if (c >= 'a' && c <= 'z') {
//			small++;
//		}
//		else if (c >= 'A' && c <= 'Z') {
//			big++;
//		}
//		else if (c >= '0' && c <= '9') {
//			shuzi++;
//		}
//		
//	}
//	printf("数字的个数为%d\n", shuzi);
//	printf("小写字母的个数为%d\n", small);
//	printf("大写字母的个数为%d\n", big);
//
//	return 0;
//}