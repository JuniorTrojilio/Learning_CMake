#include"Executable_2.h"


int main() {
	float a = 2.0, b = 2.0;
	setlocale(LC_ALL, "");
	printf("O Valor da soma é %i\n", soma(a,b));
	printf("O Valor da subtração é %i\n", subtrai(a,b));
	printf("O Valor da divisão é %f\n", divide(a,b));
	printf("O Valor da multiplicação é %i\n", multiplica(a,b));
	return 0;
}