//#include<iostream>
//using namespace std;
//int jia(int num1, int num2);
//int jian(int num1, int num2);
//int cheng(int num1, int num2);
//int chu(int num1, int num2);
//int main() {
//	int num1, num2;
//	cout << "请输入两个数字:" << endl;
//	cin >> num1 >> num2;
//	int (*arr[4])(int, int) = { jia ,jian,cheng,chu };
//	int choose;
//	cout << "请输入一个数字决定计算过程:";
//	cin >> choose;
//	if (choose < 5 && choose>0) {
//
//	}
//	else {
//		return 0;
//	}
//	int res = (arr[choose - 1])(num1, num2);
//	cout << res << endl;
//
//
//
//
//
//	return 0;
//}
//
//int jia(int num1, int num2) {
//	return num1 + num2;
//}
//int jian(int num1, int num2) {
//	return num1 - num2;
//}
//int cheng(int num1, int num2) {
//	return num1 * num2;
//}
//int chu(int num1, int num2) {
//	return num1 / num2;
//}