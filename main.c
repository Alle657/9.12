#include <stdio.h>


int calcolaMCD(int num1, int num2) {
    while (num2 != 0) {
        int variabileTemporanea = num2;
        num2 = num1 % num2;
        num1 = variabileTemporanea;
    }
    return num1;
}


int calcolaMCM(int num1, int num2) {
    return (num1 / calcolaMCD(num1, num2)) * num2;
}

int main() {
    int Inputnum1, Inputnum2;


    printf("Inserisci il primo numero: ");
    scanf("%d", &Inputnum1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &Inputnum2);


    int mcm = calcolaMCM(Inputnum1, Inputnum2);


    printf("Il minimo comune multiplo di %d e %d e ': %d\n", Inputnum1, Inputnum2, mcm);

    return 0;
}
