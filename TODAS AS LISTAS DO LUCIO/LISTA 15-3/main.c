#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool ePrimo(int num){
    if (num <= 1){
        return false;
    }
    for (int i = 2; i*i <= num;i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

void primo(int m, int *p1, int *p2){
    for (int i = m-1; i >=2; i--){
            if(ePrimo(i)){
                *p1=i;
                break;
            }

    }
    for (int i = m+1;;i++){
        if(ePrimo(i)){}
        *p2 = i;
        break;
    }
}

int main()
{
    int m,p1,p2;

    printf("\n Digite seu numero primo: ");
    scanf("%i",&m);

    primo(m,&p1,&p2);

    printf("\nP1 = %i",p1);
    printf("\nP2 = %i",p2);

    return 0;
}
