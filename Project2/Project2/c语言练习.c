//#include<stdio.h>
//int main() {
//////	/*int g, s, b;
//////	int cout = 0;
//////	for (g = 1; g < 5; g++) {
//////		for (s = 1; s < 5; s++) {
//////			for (b = 1; b < 5; b++) {
//////				if (g != s && g != b && s != b) {
//////					printf("%d,%d,%d\n", g, s, b);
//////					cout++;
//////				}
//////			}
//////		}
//////
//////	}
//////	printf("%d\n", cout);
//////*/
//////
//////	/*int lirun;
//////	int jiangjing = 0;
//////	printf("������һ������");
//////	scanf("%d", &lirun);
//////	if (lirun <= 100000) {
//////		jiangjing = lirun * 0.1;
//////	}
//////	else if (lirun > 100000 && lirun < 200000) {
//////		jiangjing = 100000 * 0.1 + (lirun - 100000) * 0.075;
//////	}
//////	else if (lirun >= 200000 && lirun < 400000) {
//////		jiangjing = 100000 * 0.1 + 100000 * 0.75 + (lirun - 200000) * 0.05;
//////	}
//////	else if (lirun >= 40 && lirun < 60) {
//////		jiangjing = 100000 * 0.1 + 100000 * 0.75 + 200000 * 0.05 + (lirun - 400000) * 0.03;
//////	}
//////	else if (lirun >= 60 && lirun < 100) {
//////		jiangjing = 100000 * 0.1 + 100000 * 0.75 + 200000 * 0.05 + 200000 * 0.03 + (lirun - 600000) * 0.015;
//////	}
//////	else if (lirun > 100) {
//////		jiangjing = 100000 * 0.1 + 100000* 0.75 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (lirun - 1000000) * 0.01;
//////	}
//////	else {
//////		return 0;
//////	}
//////	printf("��ȡ������Ϊ%d\n", jiangjing);*/
//////
//////
//////
//////
////
////
////
////	int year , month , day ;
////	int sum = 0;
////	printf("please input year and month and day");
////	scanf("%d ,%d, %d", &year ,&month ,&day);
////	switch (month) {
////		
////	case 1:printf("��һ��");  sum = 0; break;
////	case 2:printf("�ڶ���");  sum = 30; break;
////	case 3:printf("��3��");  sum = 60; break;
////	case 4:printf("��4��");  sum = 90; break;
////	case 5:printf("��5��");  sum = 120; break;
////	case 6:printf("��6��");  sum = 150; break;
////	case 7:printf("��7��");  sum = 180; break;
////	case 8:printf("��8��");  sum = 210; break;
////	case 9:printf("��9��");  sum = 240; break;
////	case 10:printf("��10��");  sum = 270; break;
////	case 11:printf("��11��");  sum = 300; break;
////	case 12:printf("��12��");  sum = 330; break;
////	}
////		//�ж�����
////		int leap=0 ;
////		if (year % 400 == 0 || year % 4 == 0 && year % 100 == 0) {
////			leap = 1;
////
////
////		}
////		else {
////			leap = 0;
////		}
////		if (leap = 1) {
////			sum++;
////	}
////		else {
////
////		}
////		
////		sum = sum + day;
////		printf("%d\n", sum);
//// 
//// 
//// 
//// 
//// 
//// 
//// 
//// 
//// 
//// 
//
//
//
//
////��������������xyz���������������С�������    1
////��*�������c��ͼ��                           2
////int x; int y; int z;
////scanf("%d %d %d", &x, &y, &z);
////int sum = x + y + z;
////
////printf("small %d\n", (x < y ? x : y) < z ? (x < y ? x : y) : z);
////printf("largst %d\n",(x > y ? x : y) > z ? (x > y ? x : y) : z);
////printf("in the middle %d\n", sum - ((x > y ? x : y) > z ? (x > y ? x : y) : z )- ((x < y ? x : y) < z ? (x < y ? x : y) : z));
////for (int i = 0; i < 5; i++) {
////	printf("*");
////
////}
////printf("\n");
////for (int i = 0; i < 5; i++) {
////	printf("*\n");
////
////}
////for (int i = 0; i < 5; i++) {
////	printf("*");
//
////}
//for (int j = 1; j <10; j++) {//jһ��������
//	//iһ�ж��ٸ�
//
//	for (int i = 1; i < j+1; i++) {
//		printf("%d*%d=%d\t",j,i,j*i);
//	}
//	printf("\n");
//}
//
//
//
//
//
//
//return 0;
//
//}