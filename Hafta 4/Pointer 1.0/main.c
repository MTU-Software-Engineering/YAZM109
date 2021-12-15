#include <stdio.h>
#include <stdlib.h>

/* Pointer */

int main() {
	int* erdi, genc;
	genc = 61;
	erdi = &genc;
	printf("Normal degisken = %d\n", genc);
	genc = 44;
	printf("Pointerdaki deger = %d", *erdi);
	return 0;
}