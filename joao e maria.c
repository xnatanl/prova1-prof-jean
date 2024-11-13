#include <stdio.h>

int main(){

    int joao = 0, maria = 0, n, moeda;

    while(scanf("%d", &n) != 0)
    {
        if(n == 0) return 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &moeda);
            if(moeda == 0) maria+= 1;
            if(moeda == 1) joao+=1;
        }

        printf("Maria %d Joao %d\n", maria, joao);
        maria = 0;
        joao = 0;
    }


return 0;
}
