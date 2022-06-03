#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constantes
#define tamanho 5  			//Constante para o tamanho da pilha

//Estrutura da Pilha
struct tpilha{   			//Estrutura do tipo Pilha
	int dados[tamanho]; 	//Vetor para armazenar os dados
	int ini;				//Controlar o inicio da Pilha
	int fim;				//Controlar o fim da Pilha
};

// Variáveis globais
struct tpilha pilha;		//Variavel da pilha
int op;						//Variavel de opção do menu

//Prototipação
void pilha_entrar();		//Push na pilha
void pilha_sair();			//Pop na pilha
void pilha_mostrar();		//Função para mostrar os elementos da pilha
void menu_mostrar();		//Menu de opções

//Função principal
int main() {
	setlocale(LC_ALL, "Portuguese");
	op = 1;
	pilha.ini = 0;
	pilha.fim = 0;
	while (op != 0){
		system("cls");
		pilha_mostrar();
		menu_mostrar();
		scanf("%d", &op);
		switch (op){
			case 1:
				pilha_entrar();
			break;
			case 2:
				pilha_sair();
			break;
		}
	}	
	return 0;
}

//Adicionar um elemento no final da Pilha
void pilha_entrar(){
	if (pilha.fim == tamanho){
		printf("\nA pilha esta cheia, impossivel empilhar!\n\n");
		system("pause");
	}
	else {
		printf("Digite o valor a ser empilhado: ");
		scanf("%d", &pilha.dados[pilha.fim]);
		pilha.fim++;
	}
}
	
//Retirar o último elemento da Pilha
void pilha_sair(){
	if (pilha.ini == pilha.fim){
		printf("\nA pilha esta vazia, impossivel desempilhar!\n\n");
		system("pause");
	}
	else {
		pilha.dados[pilha.fim-1] = 0;
		pilha.fim--;
	}
}

//Mostrar o conteúdo da Pilha
void pilha_mostrar(){
	int i;
	printf("[ ");
	for (i = 0; i < tamanho; i++){
		printf("%d ", pilha.dados[i]);
	}
	printf("]\n\n");
}

//Mostrar o menu de opções
void menu_mostrar(){
	printf("Escolha uma opcao:\n");
	printf("1 - Empilhar\n");
	printf("2 - Desempilhar\n");
	printf("0 - Sair\n\n");
}
