#include <stdio.h>
#include <stdlib.h>
void teste(int n,int *b, int *k){
    *b=1;
    *k=n;
    for (int i = 2; i <= n ; i++){
        if(n % i == 0){
            *b = i;
            break;
        }
    }
    *k = n/(*b);
    return *k;
}
int main()
{
    int n,b,k;
    printf("\n Digite o valor de N : ");
    scanf("%i",&n);
    teste(n,&b,&k);
    printf("\n B = %i, K = %i",b,k);
    return 0;
}
