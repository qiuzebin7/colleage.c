//#include<stdio.h>
//int jia(num1, num2);
//int jian(num1, num2);
//int cheng(num1, num2);
//int chu(num1, num2);
//int main() {
//	int num1, num2;
//	printf("请输入两个数字:\n");
//	scanf("%d%d", &num1, &num2);
//	printf("%d", num1);
//	printf("%d", num2);
//	int(*arr[4])(int,int) = {jia ,jian,cheng,chu};
//	int choose;
//	
//	printf("请输入一个数字:\n");
//	scanf("%d", &choose);
//	if (choose > 0 && choose < 5) {
//		printf("" );
//	}
//	else {
//		return 0;
//	}
//	int res = (arr[choose - 1])(num1, num2);
//	printf("%d\n", res);
//
//
//
//	return 0;
//}
//int jia(num1, num2) {
//	return num1 + num2;
//}
//int jian(num1, num2) {
//	return num1 - num2;
//}
//int cheng(num1, num2) {
//	return num1 * num2;
//}
//int chu(num1, num2) {
//	return num1 / num2;
//}