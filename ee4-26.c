#include <stdio.h>
int main() {
	int a, b;
	int c, t;
	printf("���尴�� ���� : ");
	scanf("%d", &a);
	printf("���尴�� �ο� : ");
	scanf("%d", &b);
	if (a <= 7 && a >= 65)
		t = 500;
	else
		t = 1500;
	printf("%d*%d=%d\n", t, b, b*t);
	if (b >= 20) {
		c = b * t - b * t * 20 / 100;
		printf("20%% ��ü���� ����\n");
	}
	else {
		c = b * t;
		printf("20%% ��ü���� ������\n");
	}
	printf("����� �Ѿ�%d\n", c);

}