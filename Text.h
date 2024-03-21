#pragma once
using namespace std;



void converterParaMaiusculo(char texto[]); // função que converte para maiusculo
void desenharLinha(char caractere,int tamanho,int corTexto, int corFundo); //funcao que desenha linha
void exibirTextoColorido(const char* texto, int corTexto, int corFundo);// função que exibe o texto e o fundo colorido dependendo da intenção
void exibirTextoColoridoSoma(int soma, int corTexto, int corFundo);// função que exibe o texto e o fundo colorido dependendo da intenção
void exibirTextoColoridoMedia(float media, int corTexto, int corFundo);// função que exibe o texto e o fundo colorido dependendo da intenção
void exibirTextoColoridoVT(const char* texto, float somaValT, int corTexto, int corFundo);// função que exibe o texto e o fundo colorido dependendo da intenção
void exibirTextoColoridotrnase(const char empresa[], const char* texto, const char codigo[], int corTexto, int corFundo);// função que exibe o texto e o fundo colorido dependendo da intenção
void cabecalho();//função que exibe o cabeçalho da terceira tela
