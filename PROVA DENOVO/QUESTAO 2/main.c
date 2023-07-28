#include <stdio.h>
#include <stdlib.h>

void leremaior(int *a,int *b){
    printf("\n Digite o valor de A :" );
    scanf("%i",a);
    printf("\n Digite o valor de B :" );
    scanf("%i",b);
}
void maior(int *a,int *b){
    if(*a > *b){
        printf("\n A maior do que B");
    }
    else{
        printf("\n B maior do que A");
    }
}
int main()
{
    int a;
    int b;
    leremaior(&a,&b);
    maior(&a,&b);
  return 0;
}
