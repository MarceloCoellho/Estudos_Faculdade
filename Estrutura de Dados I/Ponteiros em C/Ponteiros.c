#include <stdio.h>
#include <stdlib.h>

//Variaveis.
int xi;
int *ptr_xi;

//Função para imprimir os respectivos valores e endereços das variaveis.
void imprimir() {
	printf("Valor de xi = %d \n", xi);
	printf("Valor de &xi = %p \n", &xi);
	printf("Valor de ptr_xi = %p \n", ptr_xi);
	printf("Valor de *ptr_xi = %d \n\n", *ptr_xi);
}

int main(int argc, char *argv[]) {
	
	//Definindo o valor da variavel xi e alocando o endereço de xi no ponteiro ptr_xi.
	xi = 10;
	ptr_xi = &xi;
	imprimir();
	
	//Alterando o valor de xi pela variavel.
	xi = 20;
	imprimir();
	
	//Alterando o valor de xi pelo ponteiro ptr_xi.
	*ptr_xi = 30;
	imprimir();
	
	system("Pause");	
	return 0;
}
