//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main() {
//	char rightyonhumin[100] = "zhangsan";
//	char rightmima[100] = "123456";
//	char* yonhumin = (char*)malloc(128);
//	char* mima = (char*)malloc(128);
//	
//	
//	for (int i = 1; i <= 3; i++) {
//		printf("请输入用户名");
//
//		scanf("%s", yonhumin);
//		printf("请输入密码");
//		scanf("%s", mima);
//		printf("%s\n", yonhumin);
//		printf("%s\n", mima);
//		if (!strcmp(rightyonhumin, yonhumin) && !strcmp(rightmima, mima)) {
//			printf("登陆成功");
//			break;
//		}
//		if (i == 3) {
//			printf("用户%s已被冻结，请咨询客服", yonhumin);
//		}
//		else {
//			printf("登陆失败\n");
//			printf("你还有%d次机会\n", 3 - i);
//		}
//	}
//
//
//
//	return 0;
//}