#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;

    printf("\n EQUACAO DO SEGUNDO GRAU \n");
    printf("\n Digite os tres valores [a] [b] [c]: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("\n 'a' nao pode ser igual a zero. Nao eh uma equacao do segundo grau.\n");
        return 0;
    }

    delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("\n Raiz 1 : %.0f", x1);
        printf("\n Raiz 2 : %.0f", x2);
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("\n Raiz unica : %0f", x1);
    }
    else
    {
        printf("\n Nao existem raizes reais.");
    }

    return 0;
}
