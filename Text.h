#pragma once
using namespace std;



void converterParaMaiusculo(char texto[]); // fun��o que converte para maiusculo
void desenharLinha(char caractere,int tamanho,int corTexto, int corFundo); //funcao que desenha linha
void exibirTextoColorido(const char* texto, int corTexto, int corFundo);// fun��o que exibe o texto e o fundo colorido dependendo da inten��o
void exibirTextoColoridoSoma(int soma, int corTexto, int corFundo);// fun��o que exibe o texto e o fundo colorido dependendo da inten��o
void exibirTextoColoridoMedia(float media, int corTexto, int corFundo);// fun��o que exibe o texto e o fundo colorido dependendo da inten��o
void exibirTextoColoridoVT(const char* texto, float somaValT, int corTexto, int corFundo);// fun��o que exibe o texto e o fundo colorido dependendo da inten��o
void exibirTextoColoridotrnase(const char empresa[], const char* texto, const char codigo[], int corTexto, int corFundo);// fun��o que exibe o texto e o fundo colorido dependendo da inten��o
void cabecalho();//fun��o que exibe o cabe�alho da terceira tela
