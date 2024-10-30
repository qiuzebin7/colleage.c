#include<stdio.h>
#include<stdlib.h>
#include<http.h>
int main() {
	FILE* file = fopen("https://music.163.com/#/song?id=35618549", "rb");
	FILE* file1 = fopen("C:\\Users\\«Ò‘Û±Ú\\Desktop\\ µ—È\\copy.mp3", "wb");
	char arr[1024];
	int n;
	while ((n = fread(arr, 1, 1024, file)) != 0) {
		fwrite(arr, 1, n, file1);
	}
	fclose(file);
	fclose(file1);
	return 0;
}