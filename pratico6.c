#include <stdio.h>

void aumento_salarial(float salario, int anos, float *aumento) {
    switch (anos) {
        case 0 ... 1:
            *aumento = salario * 0.05; // 5% de aumento
            break;
        case 2 ... 3:
            *aumento = salario * 0.07; // 7% de aumento
            break;
        case 4 ... 6:
            *aumento = salario * 0.09; // 9% de aumento
            break;
        case 7 ... 9:
            *aumento = salario * 0.10; // 10% de aumento
            break;
        default:
            *aumento = salario * 0.12; // Mais de 10 anos, 12% de aumento
            break;
    }
}

int main() {
    float salario; 
    int anos_trabalho; 
    float aumento;  

    
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    printf("Digite os anos de trabalho do funcionario: ");
    scanf("%d", &anos_trabalho);

    // Chamando a funcao aumento_salarial para calcular o aumento do salario
    aumento_salarial(salario, anos_trabalho, &aumento);

    // Imprimindo o aumento salarial calculado
    printf("Aumento salarial: %.2f\n", aumento);

    return 0;
}
