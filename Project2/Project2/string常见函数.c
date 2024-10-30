//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main() {
//	// strlen 获取字符串的长度    其统计长度时不计结束标记
//	//strcat 拼接两个字符串
//	// strcpy 复制字符串
//	// strcmp 比较两个字符串
//	// strlwr 将字符串变成小写
//	// strupr 将字符串大写
//	//汉字占两个字节
//	 
//
//
//	//1.
//	
//	 char str[3] = "ab";
//	 char str1[4] = { 'q','b','r','\0' };
//	 char str2[10] = "abc";
//	/*int res = strlen(str);
//	int res1 = strlen(str1);
//	printf("%d %d", res, res1);
//		char *str3= (char*)malloc(128);
//
//	scanf("%s", str3);
//	int res2 = strlen(str3);
//	printf("%d\n", res2);*/
//
//	 //2.
//	/* strcat(str2, str1);
//	 printf("%s\n", str2);
//	 printf("%s\n", str1);*/
//	 ///特别注意：要将str1的字符串拼接到str2末尾，str2的长度必须足够
//
//
//	 //中间插曲
//	 // // strlen 获取字符串的长度    其统计长度时不计结束标记
//	//strcat 拼接两个字符串
//	// strcpy 复制字符串
//	// strcmp 比较两个字符串
//	// strlwr 将字符串变成小写
//	// strupr 将字符串大写
//	 //3.
//	/* int a = strcmp(str, str2);
//	 printf("%d\n", a);*/
//	 //4.
//	 /*char *a=strcpy(str, str1);
//	 printf("%s", a);*/
//	 //注意同上
//	 //5.c
//	/* char* a = strlwr(str);
//	 printf("%s\n", a);*/
//	 //注意汉字不能小写
//	 //6.
//	  char* a = strupr(str);
//	 printf("%s\n", a);
//	 //同上                                     
//
//	 
//	
//	return 0;
//	
//}