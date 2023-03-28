#include <stdio.h>

int main(void) {
	
	float inch;
	float cm;
	
	printf("Input Inchease : ");
	scanf("%f", &inch);
	
	cm = inch * 2.54;
	
	printf("%.2fcm", cm);
	
	return 0;
}
