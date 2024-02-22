#include <stdio.h>
#include <math.h>

int suma(int, int);
double resta(double, double);
double multiplicacion(double, double);
double division(double, double);
float raiz (double);

int main() {
    char operador;
    double num1, num2, resultado;
    printf("Ingrese el primer número: ");
    scanf("%lf", &num1);

    printf("Ingrese la operación (+, -, *, /, r): ");
    scanf("%c", &operador);

    printf("Ingrese el segundo número: ");
    scanf("%lf", &num2);
   
    switch (operador) {
        case '+':
            resultado=(num1,num2);
            break;
        case '-';
            resultado=resta(num1,num2);
            break;
        case '*':
            resultado = multiplicacion(num1, num2);
            break;
        case '/':
            resultado = division(num1,num2);
        break;
         case 'r':
            resultado = raiz(num1);
            resultado = raiz(num2);
            break;
        default:
            printf("Operador inválido");
    }
     printf("%lf  %c %lf = %lf",num1,operador, num2, resultado);
    return 0; 
}

int suma(int num1, int num2){
    return num1+num2;
}
double resta(double num1,double num2){
    return num1-num2;
}

double multiplicacion(double num1, double num2) {
    return num1 * num2;
}

double division(double num1, double num2) {
    return num1 / num2;
}
float raiz(double num){

    if(num>=0)
        return sqrt(num);

    else
    {
        printf("Error: no se puede calcular la raíz de un número negativo");
        return 0;
    }
}
