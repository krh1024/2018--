#include <stdio.h>

int main() {
	float kor, eng, math, sum, avg;
	
	printf("���� ������ �Է��� �ּ���.");
	scanf("%f", &kor);
	printf("���� ������ �Է��� �ּ���.");
	scanf("%f", &eng);
	printf("���� ������ �Է��� �ּ���.");
	scanf("%f", &math);
	
	printf("���� : %0.2f\n", kor);
	printf("���� : %0.2f\n", eng);
	printf("���� : %0.2f\n", math);
	
	sum=kor+eng+math;
	avg=sum/3;
	
	printf("���� : %0.2f\n", sum);
	printf("��� : %0.2lf", avg);
	
	return 0;
} 
