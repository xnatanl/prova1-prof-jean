#include<stdio.h>

int funcao(int qtdPessoas, double valor[], double max, int fila){
    for(int i = 0; i < qtdPessoas; i++){
        if(valor[i] <= max * fila){
            printf("S ");
        }else printf("N ");
    }
}

int main(){

    int qtdPessoas, fila;
    double max;

    scanf("%d", &qtdPessoas);

    double valor[qtdPessoas];

    for(int i = 0; i < qtdPessoas; i++){
        scanf("%lf", &valor[i]);
    }

    scanf("%lf %d", &max, &fila);

    funcao(qtdPessoas, valor, max, fila);

    return 0;
}
