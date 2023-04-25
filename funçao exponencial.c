#include <stdio.h>


int main()
{
	float i, base, exp, res;

	printf("\n\t########### Calculo exponencial ##########\n");
	printf("\n\tExpressão matemática: x^n\n\t");

	printf("\n\tBase (x).....: ");
	scanf("%f",&base);

	printf("\tExpoente (n).: ");
	scanf("%f", &exp);

	res = base;
	for(i=0; i<(exp-1); i++) {
		res *= base;
	}

	printf("\n\tO resultado é: %.2f\n\n", res);
	return 0;
}
