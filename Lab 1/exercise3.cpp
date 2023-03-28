#include <stdio.h>

int main(void) {
	
	int num, i, x;
	
	printf("Enter Number : ");
	scanf("%d", &num);
	
	for(i = 1; i <= 12; i++) {
		
		x = i * num;
		printf("%d x %d = %d\n", num, i, x);
		
	}
		
	return 0;
}
