#include <iostream>
#include "Stock.h"
#include "Text.h"
#include "Data.h"
#include "Cores.h"
using namespace std;
float mediaP(int qntidade, float valo) {
     return qntidade*valo;
}
void lerDados(Empresa* empresas, int numEmpresas, Resultado* resultados, Soma& soma) {
     
    for (int i = 0; i < numEmpresas; ++i) { //for para a quantidade de empresas digitadas pelo usuário
        desenharLinha('-', 30, preto, cinza);//desenha a linha
        exibirTextoColorido("Empresa: ", vermelho, preto);
        cin.get();
        cin.getline(empresas[i].id, 10);
        exibirTextoColorido("Código: ", vermelho, preto);
        cin >> empresas[i].codigo;
        exibirTextoColorido("Transações: ", vermelho, preto);
        cin>> empresas[i].numTransacoes;
        converterParaMaiusculo(empresas[i].codigo); // Chama a função para converter para maiúsculo
        empresas[i].transacoes = new Transacao[empresas[i].numTransacoes];
        if (i==numEmpresas-1){
        desenharLinha('-', 30, preto, cinza);//desenha a linha
        }
        
    } system("cls");
    exibirTextoColorido("Transações realizadas \n\n", cinza, vermelho);
    for (int i = 0; i < numEmpresas; ++i) {

        for (int j = 0; j < empresas[i].numTransacoes; ++j) {
            if (j == 0) {
                exibirTextoColoridotrnase(empresas[i].id, " - ", empresas[i].codigo, vermelho, preto);
            };
            exibirTextoColorido("\nDigite a data no formato dd/mm/aaaa: ", vermelho, preto);
            Data data;
            cin >> data;
            exibirTextoColorido("\nQuantidade: ", vermelho, preto);
            cin >> empresas[i].transacoes[j].qnt;
            exibirTextoColorido("\nValor: ", vermelho, preto);
            cin >> empresas[i].transacoes[j].valor;

        }
    }system("cls");
    

    for (int j = 0; j < numEmpresas; ++j) {
        resultados[j] = { 0, 0.0f, 0.0f }; // Inicializa o resultado para a empresa j
        for (int i = 0; i < empresas[j].numTransacoes; ++i) {
            resultados[j].somaT += mediaP(empresas[j].transacoes[i].qnt, empresas[j].transacoes[i].valor);//atualiza o valor da somaT
            resultados[j].somaQnt += empresas[j].transacoes[i].qnt; //atualiza o valor da somaQnt
        }
        resultados[j].media = resultados[j].somaT / resultados[j].somaQnt;
        soma.somaValT += resultados[j].somaT; // Atualiza somaValT
        
        system("cls");
    }
   

}
void alinhaTerceira(int numEmpresas, Empresa* empresas, Resultado* resultados, Soma soma) {
    for (int i = 0; i < numEmpresas; ++i) {
        int somaQnt = 0;
        for (int j = 0; j < empresas[i].numTransacoes; ++j) {
            somaQnt += empresas[i].transacoes[j].qnt;
        }
        cout << left; exibirTextoColorido(empresas[i].id, vermelho, preto); cout.width(13);
        cout << right; exibirTextoColorido(empresas[i].codigo, vermelho, preto); cout.width(12);
        exibirTextoColoridoSoma(resultados[i].somaQnt, vermelho, preto); cout.width(15);
        exibirTextoColoridoMedia(resultados[i].media, vermelho, preto); cout.width(12);
        exibirTextoColoridoMedia(resultados[i].somaT, vermelho, preto);
        if (i == numEmpresas - 1) {
            cout << endl;
            cout << left; desenharLinha('-', 80, preto, cinza); cout << endl; //desenha linha
            cout << left;  exibirTextoColoridoVT("Valor Total Investido :                                   ", soma.somaValT, cinza, vermelho);  cout.width(28); cout << endl; //exibe o valor total investido

        }

        cout << endl;
    }
}
