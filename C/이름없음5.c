#include <stdio.h>

int main() {
	/*
	int a,b,c;
	
	a=273;
	b=scanf;
	c=a*b;
	
	printf("도형의 넓이는 %d 입니다.", c);
	
	return 0;
	*/
	
	/*
	printf("값을 입력해주세요.");
	
	int a;
	scanf("%d", &a);
	printf("입력받은 값은 %d 입니다.", a);
	
	return 0; 
	*/
	/*
	float a,b,c;
	
	printf("가로의 길이는?");
	scanf("%f",&a);
	printf("세로의 길이는?");
	scanf("%f",&b);
	c=a*b;
	
	printf("도형의 넓이는 %f 입니다.", c);
	
	return 0;
	*/
	
		int a,b;
		double c,d;
		
		a=10;
		b=20;
		c=30.234;
		d=40.345;
		
		printf("%15d %15d\n", a,b);          // %15d 중에서 15는 간격을 의미한다. 
		printf("%15.2lf %15.2lf", c,d);		// %15.2lf 중에서 2l 는 소숫점 절삭을 의미한다. 
	
}
