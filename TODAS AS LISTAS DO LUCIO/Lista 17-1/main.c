    #include <stdio.h>
    #include <stdlib.h>

    int ackerman(int m, int n){
        if (m == 0){
           return n+1;
        }
        if( m>0 && n==0){
           return ackerman(m-1,1);
        }
        if(n >0 && m > 0){
            return ackerman(m-1,ackerman(m,n-1));
        }
        return 0;
    }

    int main()
    {
        int m=1,n=2;

        int resultado=ackerman(m,n);
        printf("\n Resultado: %i",resultado);
        return 0;
    }
