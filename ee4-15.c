#include <stdio.h>
int main() {
	int a, b, c;
	int n;

	printf("�������(�ֹι�ȣ ���� 6�ڸ�) : ");
	scanf("%2d%2d%2d", &a, &b, &c);
	n = a + b + c;
	if (n % 10 == 0)
		printf("�������!\n");
	else
		printf("�����ϼ���\n");
}