#include <stdio.h>

int main()
{
    int tam, n;

    scanf("%d", &tam);

    int vetor[tam];

    for(int i = 0; i < tam; i++)
    {
        scanf("%d", &vetor[i]);

    }

    for(int i = 0; i < tam; i++)
    {
        if(vetor[i] < 0)
        {
            vetor[i] = 42;
        }
    }

    for(int i = 0; i < tam; i++)
    {
        printf("%d\n", vetor[i]);
    }

return 0;
}
