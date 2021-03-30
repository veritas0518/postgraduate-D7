//#include<stdio.h>
//void code(char arr[]) {
//	int i;
//	int j;
//
//	for (i = 0; i < 7; i++) {
//		for (j = 0; j < 26; j++) {
//			/*
//			else if (arr[i] >= 'A' && arr[i] <= 'Z') {
//				arr[i] = arr[i]-32;
//			}
//			else if (arr[i] >= 'a' && arr[i] <= 'z') {
//				arr[i] = arr[i]+32;
//			}*/
//			//
//			//
//
//
//			if (arr[i] >= 'A' && arr[i] <= 'Z') {
//				arr[i] = arr[i] + 25 - j;
//			}
//
//			else if (arr[i] >= 'a' && arr[i] <= 'z') {
//				arr[i] = arr[i] + 25 - j;
//			}
//
//		}
//	}
//	for (i = 0; i < 7; i++) {
//
//		printf("%c", arr[i]);
//	}
//
////puts(arr);
//}
//
//void code1(char arr[]) {
//	for (int i = 0; i < 7; i++) {
//		if (arr[i] >= 'A' && arr[i] <= 'Z') {
//			arr[i] = arr[i] + 25 - (arr[i]-65)*2;
//		}
//
//		else if (arr[i] >= 'a' && arr[i] <= 'z') {
//			arr[i] = arr[i] + 25 - (arr[i] - 97) * 2;
//		}
//
//	}
//	for (int i = 0; i < 7; i++) {
//
//		printf("%c", arr[i]);
//	}
//
//}
//
//
//
//int main() {
//	char arr[8];
//	int i;
//	for (i = 0; i < 7; i++) {
//
//scanf_s("%c", &arr[i]);
//	}
//	arr[7] = '\0';
//code1(arr);
//	
//	
//	//gets(arr);
//	printf("%c", arr);
//	
//	return 0;
//}