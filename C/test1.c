#include <stdio.h>

int main () {
/*	int a;
	
	printf("숫자입력");
	scanf("%d", &a);
	
	if(a>10) {
		printf("입력값은 10보다 크다."); 
	} 
	else {
		printf ("입력값이 10보다 작다.");
	} 
	return 0;
*/
/*	int a, b=20, c;
	
	printf("당신의 나이는?");
	scanf("%d", &a);
	c=b-a;	
	
		if(a>=20) {
			printf("당신은 성인입니다.");
		}
		else {
			printf("당신은 %d 년 후 성인이 됩니다.", c);
		}
	*/
	
/*	int a;
	printf("100 이상을 입력하지 않는다면 끝나지 않아...");
	scanf("%d", &a);
	while(a<100) {
		if(a<100) {
			printf("다시해...");
			scanf("%d",&a); 
		}
		else if(a==100) {
			printf("이제 입력했니...?");
		}
	}*/
	
	int a,i;
	i=0;
	for(i=0; i<10; i=i+1) {
		a++;
		printf("%d 번째 반복\n",a);
	}
	return 0;
}
