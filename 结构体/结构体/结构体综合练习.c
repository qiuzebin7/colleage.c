//#include<stdio.h>
//#include<string.h>;
//#include<stdlib.h>
//#include<time.h>
////�� �Ƹ�ʯ�� ƽң�ų� ̫��ɽ ����ɽ �ĸ�����
////���а�ʮƱ���ͶƱ���ҳ�Ʊ������
////��������
////��һ�������ýṹ��
//struct view {
//	char name[100];
//	int cout;
//};
//int main() {
//	//����һ������
//
//	srand(time(NULL));
//	struct view arr[4] = { {"�Ƹ�ʯ��",0},{"ƽң�ų�",0},{"̫��ɽ",0},{"����ɽ",0} };
//	for(int i=0;i<80;i++){
//		
//		int temp = rand() % 4;
//		arr[temp].cout++;
//	
//	}
//	printf("%d\n", arr[0].cout);
//	printf("%d\n", arr[1].cout);
//	printf("%d\n", arr[2].cout);
//	printf("%d\n", arr[3].cout);
//	int max = arr[0].cout;
//	for (int i = 1; i < 4; i++) {
//		if (arr[i].cout > max) {
//			max = arr[i].cout;
//		}
//
//	}
//	printf("%d\n", max);
//	for (int i = 0; i < 4; i++) {
//		struct view a = arr[i];
//		if (a.cout == max) {
//			printf("�õ���Ϊ%s,����Ʊ��Ϊ%d\n", a.name, a.cout);
//			break;
//		}
//	}
//}