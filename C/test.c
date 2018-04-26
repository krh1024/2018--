#include <stdio.h>

int main() {
	float a, b, p=3.14;
	
	printf("반지름의 길이를 입력하시오.");
	scanf("%f", &b);

	a = p*b;

	printf("원의 넓이 : %f", a);
	
	return 0;
}
