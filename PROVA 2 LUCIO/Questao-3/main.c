#include <stdio.h>

int main()
{
    float fat = 5;
    float fat2= 0;
    float b =0;
float a = 1;
float c =1;
   for(int i = 0; i < fat; i++){
    b= b+1;
    c=1;
    for(int j = b; j > 1; j--){
        c *= j;
    }
    printf("\n %f/%f",a,b);
    fat2 = a/c;
    printf("\n %f",fat2);
   }


    return 0;
}
