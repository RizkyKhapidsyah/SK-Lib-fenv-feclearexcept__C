/* feclearexcept, fetestexcept example */
#pragma STDC FENV_ACCESS on

#include <stdio.h>      /* printf */
#include <math.h>       /* sqrt */
#include <fenv.h>       /* feclearexcept, fetestexcept, FE_ALL_EXCEPT, FE_INVALID */
#include <conio.h>

int main() {
	feclearexcept(FE_ALL_EXCEPT);
	sqrt(-1);
	
	printf("Program yang diproses : sqrt(-1) \n\nHasil : ");

	if (fetestexcept(FE_INVALID)) {
		printf("sqrt(-1) raises FE_INVALID\n");
	}

	_getch();
	return 0;
}