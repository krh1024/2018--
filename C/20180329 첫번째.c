#include <stdio.h>

/*int main() {
	int a, i;
	a=0;
	
	for(i=0; i<10; i++) {
		a++;
		printf("%d ��° �ݺ�\n", a);
	}
	return 0;
}*/

int main() {
	/*int a,b,i,j,c;
	a=0;
	c=0;*/
	
/*	printf("������ �ܼ��� �Է��ϼ���.");
	scanf("%d", &a);
	
	for (i=0; i<9; i++) {
		for (j=0; j<9; j++) {
		b=a*(i+1);
		printf("%d * %d = %d\n", a, i+1, b);
		
	}*/
	
	
/*	for (i=0; i<9; i++) {
		c++;
		printf("%d��\n", c);
		
		for (j=1; j<10; j++) {
			a=i*j;
			printf("%d * %d = %d\n", i+1, j, a);
		}
	}
*/
	
	int a[100], i;

	for(i=0; i<100; i++) {
		
		a[i+1] = i+1;
		
		printf("%d��° ���� : %d\n", a[i+1], i+1);
	}

	return 0;
}
