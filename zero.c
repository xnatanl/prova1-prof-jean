#include<stdio.h>

int zerarLinha(int matriz[500][500], int c, int l, int linha, int coluna){
    for(int i = 0; i < c; i++){
        matriz[linha][i] = 0;
    }
}

int zerarColuna(int matriz[500][500], int c, int l, int linha, int coluna){
    for(int i = 0; i < l; i++){
        matriz[i][coluna] = 0;
    }
}

int main(){
    int l, c;
    int matriz[500][500], matrizqlqr[500][500];

    scanf("%d %d", &l, &c);

    for(int i = 0; i < l; i++){
         for(int j = 0; j < c; j++){
             scanf("%d", &matriz[i][j]);
             matrizqlqr[i][j] = matriz[i][j];
        }
    }

    for(int i = 0; i < l; i++){
        for(int j = 0; j < l; j++){
            if(matrizqlqr[i][j] == 0){
                zerarLinha(matriz, c, l, i, j);
                zerarColuna(matriz, c, l, i, j);
            }
        }
    }

    for(int i = 0; i < l; i++){
        for(int j = 0; j < l; j++){
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
