#include"Executable_2.h"


int main() {
	float a = 2.0, b = 2.0;
	setlocale(LC_ALL, "");
	printf("O Valor da soma � %i\n", soma(a,b));
	printf("O Valor da subtra��o � %i\n", subtrai(a,b));
	printf("O Valor da divis�o � %f\n", divide(a,b));
	printf("O Valor da multiplica��o � %i\n", multiplica(a,b));
	return 0;
}