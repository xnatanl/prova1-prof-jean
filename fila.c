#include <stdio.h>

int main()
{
    int x, y, z;

    scanf("%d", &x);

    int vetor[x];

    for(int i = 0; i < x; i++)
    {
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &y);

    for(int i = 0; i < x; i++)
    {
        if(vetor[i] < 65){
            z = i;
        } else z = x + 1;
    }

    if(y < 65){
        z = x + 1;
    }
    printf("%d", z);
    return 0;
}
