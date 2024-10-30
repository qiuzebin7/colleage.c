//#include<stdio.h>
//#include<string.h>;
//#include<stdlib.h>
//#include<time.h>
////有 云冈石窟 平遥古城 太行山 哀牢山 四个景点
////现有八十票随机投票，找出票数最多的
////两种做法
////第一种是运用结构体
//struct view {
//	char name[100];
//	int cout;
//};
//int main() {
//	//定义一个数组
//
//	srand(time(NULL));
//	struct view arr[4] = { {"云冈石窟",0},{"平遥古城",0},{"太行山",0},{"哀牢山",0} };
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
//			printf("该地区为%s,他的票数为%d\n", a.name, a.cout);
//			break;
//		}
//	}
//}