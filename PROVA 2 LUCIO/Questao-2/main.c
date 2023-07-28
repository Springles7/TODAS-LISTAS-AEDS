#include <stdio.h>

int main()
{
    float salario;
    float salariomedioo;
    float salariomedio = 0;
    float j = 0;

    do {
        salario = 0;
        float percentual = 0;
        float reajuste = 0;

        printf("\n Digite seu salario: ");
        scanf("%f", &salario);

        if(salario > 1000 && salario < 2000){
            j++;
            percentual = salario * 0.08;
            reajuste = salario + percentual;
            salariomedio = salariomedio + reajuste;
        }
        if (salario >= 2000) {
            j++;
            percentual = salario * 0.07;
            reajuste = salario + percentual;
            salariomedio = salariomedio + reajuste;
        }
        if (salario < 1000) {
             j++;
            percentual = salario * 0.1;
            reajuste = salario + percentual;
            salariomedio = salariomedio + reajuste;
            }

        if (salario == 0) {
                printf("\n %f",j-1);
            salariomedio = salariomedio / j--;
            printf("\n Salario medio: %f", salariomedio);
            return 0;
        }

        printf("\n Percentual de reajuste: %f", percentual);
        printf("\n Salario reajustado: %f", reajuste);

    } while (salario != 0);

    return 0;
}
