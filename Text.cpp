#include <iostream>
#include "Stock.h" 
#include "Text.h"
#include "Data.h"
#include "Cores.h"
using namespace std;

void converterParaMaiusculo(char texto[]) { // fun��o para converter para maiusculo apartir da tabela ascci
    for (int i = 0; texto[i] != '\0'; ++i) {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = texto[i] - 32;
        }
    }
}
void desenharLinha(char caractere, int tamanho, int corTexto, int corFundo) {
    // C�digo ANSI para definir a cor do texto e do fundo
    cout << "\033[" << corFundo << ";" << corTexto << "m";

    // Desenha a linha
    for (int i = 0; i < tamanho; ++i) {
        cout << caractere;
    }

    // C�digo ANSI para resetar as cores
    cout << "\033[0m" << endl;
}
void exibirTextoColorido(const char* texto, int corTexto, int corFundo) {
    // C�digo ANSI para definir a cor do texto e do fundo
    cout << "\033[" << corFundo + 10<< ";" << corTexto << "m";

    // Exibe o texto
    cout << texto;

    // C�digo ANSI para resetar as cores
    cout << "\033[0m";
}
void exibirTextoColoridoSoma(int soma, int corTexto, int corFundo) {
    // C�digo ANSI para definir a cor do texto e do fundo
    cout << "\033[" << corFundo + 10 << ";" << corTexto << "m";

    // Exibe o texto
    cout << soma;

    // C�digo ANSI para resetar as cores
    cout << "\033[0m";
}
void exibirTextoColoridoVT(const char* texto, float somaValT, int corTexto, int corFundo) {
    // C�digo ANSI para definir a cor do texto e do fundo
    cout << "\033[" << corFundo + 10 << ";" << corTexto << "m";

    // Exibe o texto
    cout << texto << somaValT;

    // C�digo ANSI para resetar as cores
    cout << "\033[0m";
}
void exibirTextoColoridoMedia(float media, int corTexto, int corFundo) {
    // C�digo ANSI para definir a cor do texto e do fundo
    cout << "\033[" << corFundo + 10 << ";" << corTexto << "m";

    // Exibe o texto
    cout << media;

    // C�digo ANSI para resetar as cores
    cout << "\033[0m";
}
void exibirTextoColoridotrnase(const char empresa[], const char* texto, const char codigo[], int corTexto, int corFundo) {
    // C�digo ANSI para definir a cor do texto e do fundo
    cout << "\033[" << corFundo + 10 << ";" << corTexto << "m";

    // Exibe o texto
    cout <<endl << empresa << texto <<codigo;

    // C�digo ANSI para resetar as cores
    cout << "\033[0m";
}
void cabecalho() {
    cout.width(28);  exibirTextoColorido("CARTEIRA DE A��ES \n", cinza, vermelho);  cout.width(28); cout << endl;
    cout << left; desenharLinha('-', 80, preto, cinza); cout << endl;
    cout << left; exibirTextoColorido("Empresa", cinza, vermelho); cout.width(10);
    cout << right; exibirTextoColorido("C�digo", cinza, vermelho); cout.width(10);
    exibirTextoColorido("Qnt", cinza, vermelho); cout.width(10);
    exibirTextoColorido("Pre�o M�dio", cinza, vermelho); cout.width(10);
    exibirTextoColorido("Investido", cinza, vermelho);
    cout << endl;

    //cout << left; cout.width(10); cout << "-------";
    //cout << right; cout.width(6); cout << "-----";
}

