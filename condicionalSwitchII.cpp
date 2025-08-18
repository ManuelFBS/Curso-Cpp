#include <cstdio>

int main() {
        char op;
        double num1, num2, result;
        int isValidOp = 1;

        printf("\n############### CALCULADORA SENCILLA ###############\n\n");
        
        printf("Ingrese el primer nro: ");
        scanf("%lf", &num1);
        //
        printf("Ingrese el segundo nro: ");
        scanf("%lf", &num2);

        printf("Ingrese el tipo de operación a realizar [ +, -, *, / ]");
        scanf(" %c", &op);

        switch (op)
        {
        case '+':
                result = num1 + num2;
                break;
        case '-':
                result = num1 - num2;
                break;
        case '*':
                result = num1 * num2;
                break;
        case '/':
                if (num2 != 0) {
                        result = num1 / num2;
                } else {
                        printf("Error: No se puede dividir entre cero.\n");
                        isValidOp = 0;
                }
                break;
        
        default:
                printf("Debe seleccionar una operacion valida...!!!");
                isValidOp = 0;
                break;
        }

        if (isValidOp == 1){
                printf("\nEl resultado de %lf %c %lf = %lf\n\n", num1, op, num2, result);
        }

        return 0;
}