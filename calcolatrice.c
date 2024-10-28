#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num1, num2, risultato;
    char operatore;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci l'operatore (+, -, *, /):");
    scanf(" %c", &operatore);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

switch (operatore){
    case '+':
        risultato= num1 + num2;
        break;
    case '-':
        risultato= num1 - num2;
        break;
    case '*':
        risultato= num1 * num2;
        break;
    case '/':
        if(num2 == 0) {
         printf("Errore - non è possibile dividere per 0");
        } else {
            risultato = num1 / num2;
        }
            break;

    default:
        printf("Operatore non valido \n");
        return 1;
}
printf("Risultato: %d", risultato);

    return 0;

}