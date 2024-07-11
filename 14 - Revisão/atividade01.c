#include <stdio.h>


float calcularDescontos(float salarioFixo, float percentualDesconto){
    float valorDescontado;

    valorDescontado = salarioFixo * (percentualDesconto / 100);

    return valorDescontado;
}

float calcularComissao(float totalVendas){
    float comissao;

    comissao = totalVendas * 0.02;

    return comissao;
}

float calcularSalarioLiquido(float salarioFixo, float comissao, float valorDescontado){
    float salarioLiquido;

    salarioLiquido = salarioFixo + comissao - valorDescontado;

    return salarioLiquido;
}


int main(){
    float comissao, totalVendas, salarioFixo, percentualDesconto, valorDescontado, salarioLiquido;

    printf("Digite o salario fixo do vendedor: ");
    scanf("%f", &salarioFixo);
    printf("Digite o percentual de descontos do vendedor: ");
    scanf("%f", &percentualDesconto);
    printf("Digite o valor total de vendas do vendedor: ");
    scanf("%f", &totalVendas);

    valorDescontado = calcularDescontos(salarioFixo,percentualDesconto);
    comissao = calcularComissao(totalVendas);
    salarioLiquido = calcularSalarioLiquido(salarioFixo, comissao, valorDescontado);

    printf("\nO salario liquido do vendendor e %.2f ", salarioLiquido);

    return 0;
}