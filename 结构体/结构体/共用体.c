////共用体的核心是
////一个变量可能有多种类型
//#include<stdio.h>
//#include<string.h>
//typedef  union money {
//	int moneyd;
//	double moneyf;
//	char moneystr[100];
//}mo;
//int main() {
//	mo a;
//	a.moneyd = 99999;
//	printf("%d\n", a.moneyd);
//	a.moneyf = 123.666;
//	printf("%lf\n", a.moneyf);
//	strcpy(a.moneystr, "1000万");
//	printf("%s\n", a.moneystr);
//	return 0;
//}