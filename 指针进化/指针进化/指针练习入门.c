//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//void  delete_space(char* s);
//	
//
//
//
//int main() {
//	//1.ȥ���ַ����еĿո�
//	//������abcd  ef g hijk  ���abcdefghijk)
//	
//	char *str= (char*)malloc(128);
//
//	//scanf("%s", str);
//	//scanf("%[^\n]", str);
//	//gets(str);
//	char ch;
//	int i = 0;
//	
//	while ((ch = getchar()) != '\n') {
//
//
//		str[i++] = ch;
//
//	}
//	*(str + i) = '\0';
//	char* begin = str;
//	while (*str != '\0') {
//		if (*str == ' ') {
//			delete_space(str);
//			
//		}
//		else {
//			str++;
//		}
//		
//	}
//	printf("%s\n", begin);
//	
//	//str=ch      ��һ���
//	return 0;
//}
//void  delete_space(char* s) {
//	while (*s != '\0') {
//		*s = *(s + 1);
//		s++;
//	}
//	}