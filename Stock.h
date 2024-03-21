#pragma once
#include "Data.h"
using namespace std;
struct Transacao {

	float valor; //valor de uma a��o
	int qnt; //quantidade de a��es
	Data data; //data da compra
};
struct Empresa {
	char id[10]; //nome da empresa
	char codigo[5]; //codigo da empresa na B3
	Transacao* transacoes; //ponteiro para transa��es
	int numTransacoes; //numero de compras de a��es a mesma empresa
};
struct Resultado {
	int somaQnt; //soma da quantidade de acoes
	float media; //media de preco
	float somaT; //soma total das compras
	 };
struct Soma {
	float somaValT;// Adiciona somaValT � estrutura Resultado

};
void lerDados(Empresa* empresas, int numEmpresas, Resultado* resultados, Soma& soma); //Funcao para ler os dados da empresa e gerar os dados
void alinhaTerceira(int numEmpresas, Empresa* empresas, Resultado* resultados, Soma soma);//fun��o para a terceira tela