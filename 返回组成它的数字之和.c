//#include<stdio.h>
////int DigitSum(int n) {
////	int a = n / 100;
////	int b = n % 100 / 10;
////	int c = n % 100 % 10;
////	int sum;
////	sum = a + b + c;
////	return sum;
////}
//int DigitSum(int n) {
//	if (n > 9) {
//		return DigitSum(n / 10) + n % 10;
//	}
//	else {
//		return n;
//	}
//}
//int main() {
//	int n;
//	scanf_s("%d", &n);
//	int sum=DigitSum(n);
//	printf("%d", sum);
//}