#include <iostream>
#include "Text.h"
#include "Stock.h"
#include "Data.h"
#include "Cores.h"
using namespace std;


int main()
{  
    system("chcp 1252 > nul");
    
    int numEmpresas;
    exibirTextoColorido("CARTEIRA DE AÇÕES \n", cinza, vermelho);
    exibirTextoColorido("Quantidade de empresas: ", vermelho, preto);
    cin >> numEmpresas;
    Soma soma = { 0.0f };
    Empresa* empresas = new Empresa[numEmpresas];
    Resultado* resultados = new Resultado[numEmpresas];
    // Chama a função para ler e processar os dados
    lerDados(empresas, numEmpresas, resultados, soma);
    system("cls");
    cabecalho();//chama a função de cabecalho da terceira tela
    alinhaTerceira( numEmpresas, empresas, resultados, soma);//chama a função alinhaTerceira para fazer a tabela
    double valoresCarteira[20] = { 0 }; // Inicializa todos os elementos como 0
    system("cls");
    // Calcula os valores    
    double aporteAnual, rendimentoAnual; 
    cout << left; desenharLinha('-', 80, preto, cinza); cout << endl;
    cout << endl;
    exibirTextoColorido("Qual o aporte anual? ", cinza, vermelho);
    cin >> aporteAnual;
    exibirTextoColorido("\nQual o rendimento anual esperado(em porcentagem) ? ", cinza, vermelho);
    cin >> rendimentoAnual;
    cout << left; desenharLinha('-', 80, preto, cinza); cout << endl;
    exibirTextoColorido("                   RENTABILIDADE DA CARTEIRA               \n", cinza, vermelho);

    rendimentoAnual /= 100;  // Converte a porcentagem para uma fração
    for (int i = 0; i < 20; ++i) {
        if (i == 0) {
            // soma os valores da carteira mais o rendimento da mesma
            for (int j = 0; j < numEmpresas; ++j) {
                for (int k = 0; k < empresas[j].numTransacoes; ++k) {
                    valoresCarteira[i] += empresas[j].transacoes[k].valor * empresas[j].transacoes[k].qnt;
                }
            }
        }
        else {
            // pega o valor dos anos anteriores + o atual para assim multiplicar pelo novo rendimento
            valoresCarteira[i] = (valoresCarteira[i - 1] + aporteAnual) * (1 + rendimentoAnual);
        }
    }

    // Imprime os valores da carteira
    for (int i = 0; i < 20; ++i) {
        cout << "Ano " << (i + 1) << ": R$" << valoresCarteira[i] << endl;
    }

    for (int i = 0; i < numEmpresas; ++i) {
        delete[] empresas[i].transacoes;
    }
    delete[] resultados;
    delete[] empresas;
}