#include <stdio.h>

int main() {
	int a, b, c,tmp;
	scanf("%d%d%d", &a, &b, &c);
	printf("세 수의 곱 :%d",a*b*c);
	tmp = a+b+c;
	printf("\n세 수의 평균:%d",a/2+b/2+c/2 );
	return 0;
}