//#include<stdio.h>
//void swep(void* p1, void* p2, int len);
//int main() {
//	/*int a = 10;
//	int* p = &a;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//	printf("%p\n", p+2);*/
//
//
//
//
//
//
//
//
//	//ָ����������������������������
//	//�����壻ָ���������ļӼ�
//	//ָ����ָ��ļ�
//	//�������
//	//ָ���������ĳ˳�   ָ����ָ��ļӳ˳�
//	//int arr[] = {1,2,3,4,5,6,7};
//	//int*p = &arr[0];
//	////printf("%d\n", *p);
//	////int* p1 = &arr[5];
//	////printf("%d\n", *p1);
//	////printf("%d\n", p1-p);
//	////printf("%p\n", p1);
//	//printf("%p\n", p);
//
//	//Ұָ�������ָ��
//
//	//void���͵�ָ��
//	//����������������
//
//
//
//
//
//
//	float a = 10.54;
//	float b = 20.24;
//	printf("%4.2f, %4.2f", a, b);
//	printf("\n");
//	swep(&a, &b, 4);
//	printf("%3.1f ,%4.2f", a, b);
//
//
//
//	return 0;
//}
//void swep(void *p1, void *p2, int len) {
//
//	char* pc1=p1;
//	char* pc2=p2;
//	char temp;
//	for (int i = 0; i < len; i++) {
//		temp = *pc1;
//		*pc1 = *pc2;
//		*pc2 = temp;
//		pc1++;
//		pc2++;
//	}
//}