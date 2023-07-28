#include <stdio.h>
#include <stdlib.h>
void fibbonacci(int a, int b,int c,int fibbo,int i){

        if( i < fibbo ){
        c=b;
        b=a;
        a= b+c;
        if(i > 0){
        printf("\n %i",a);
        }
        fibbonacci(a,b,c,fibbo,++i);
        }
}

int main()
{
    int fibbo;
    int a=0;
    int b=1;
    int c;
    int i=0;

    printf("\n Quantos termos deseja ? ");
    scanf("%i",&fibbo);
    printf("\n %i",a);
    printf("\n %i",b);
    fibbonacci(a,b,c,fibbo,i);

    //for(int i = 0; i < fibbo; i++){
        //c=b;
        //b=a;
        //a= b+c;
     //   printf("\n%i",a);
    //}

    return 0;
}
