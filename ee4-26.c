#include <stdio.h>
int main() {
	int a, b;
	int c, t;
	printf("입장객의 나이 : ");
	scanf("%d", &a);
	printf("입장객의 인원 : ");
	scanf("%d", &b);
	if (a <= 7 && a >= 65)
		t = 500;
	else
		t = 1500;
	printf("%d*%d=%d\n", t, b, b*t);
	if (b >= 20) {
		c = b * t - b * t * 20 / 100;
		printf("20%% 단체할인 적용\n");
	}
	else {
		c = b * t;
		printf("20%% 단체할인 미적용\n");
	}
	printf("입장료 총액%d\n", c);

}