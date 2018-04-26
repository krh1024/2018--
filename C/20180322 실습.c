#include <stdio.h>

int main() {
	float kor, eng, math, sum, avg;
	
	printf("국어 점수를 입력해 주세요.");
	scanf("%f", &kor);
	printf("영어 점수를 입력해 주세요.");
	scanf("%f", &eng);
	printf("수학 점수를 입력해 주세요.");
	scanf("%f", &math);
	
	printf("국어 : %0.2f\n", kor);
	printf("영어 : %0.2f\n", eng);
	printf("수학 : %0.2f\n", math);
	
	sum=kor+eng+math;
	avg=sum/3;
	
	printf("총점 : %0.2f\n", sum);
	printf("평균 : %0.2lf", avg);
	
	return 0;
} 
