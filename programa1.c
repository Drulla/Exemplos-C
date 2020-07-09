#include <stdio.h>
// programa simples para fazer uma pergunta, e receber dados de entrada

int main() {

	int idade;

	printf ("Qual a sua idade?\n");
	scanf ("%d", &idade);
	printf ("Voce tem %d anos de idade", idade);

	return 0;
}
