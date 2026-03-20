#include <stdio.h>

int main() {
    double a, b, resultado;
    char op;

    printf("=== CALCULADORA ===\n");
    printf("Digite a expressao (ex: 5 + 3): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+': resultado = a + b; break;
        case '-': resultado = a - b; break;
        case '*': resultado = a * b; break;
        case '/':
            if (b == 0) {
                printf("Erro: divisao por zero!\n");
                return 1;
            }
            resultado = a / b;
            break;
        default:
            printf("Operador invalido!\n");
            return 1;
    }

    printf("Resultado: %g\n", resultado);
    return 0;
}