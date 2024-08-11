#include <stdio.h>
#include <math.h>

float calcularHipotenusa(float cateto1, float cateto2) {
    return sqrt(cateto1 * cateto1 + cateto2 * cateto2);
}

int main() {
    float cateto1, cateto2;
    printf("Digite os valores dos dois catetos: ");
    scanf("%f %f", &cateto1, &cateto2);

    float hipotenusa = calcularHipotenusa(cateto1, cateto2);
    printf("A hipotenusa e: %.2f\n", hipotenusa);

    return 0;
}
