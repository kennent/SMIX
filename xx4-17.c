#include <stdio.h>
int main() {
	char a;
	scanf("%c", &a);
	a = (a >= 'X'&&a <= 'Z'&&a>='x'&&a<='z') ? a - 23 : a + 3;
	printf("%c", a);
}