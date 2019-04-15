#include <stdio.h>
int main() {
	int a, b, c;
	int n;

	printf("생년월일(주민번호 앞의 6자리) : ");
	scanf("%2d%2d%2d", &a, &b, &c);
	n = a + b + c;
	if (n % 10 == 0)
		printf("운수대통!\n");
	else
		printf("조심하세요\n");
}