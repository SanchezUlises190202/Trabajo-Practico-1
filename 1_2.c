#include <stdio.h>

// Dados dos numeros enteros m y n, construir una funcion recursiva que devuelva el producto de ambos, calculando el mismo como sumas sucesivas: 
// Esto es m * n = m + m + ... +, n veces
// producto(5, 3) => 15
// producto(10, 4) => 40
// producto

int producto(int numero_1, int numero_2){
    if(numero_2 == 0){
        return 0;
    }else{
        return(numero_1 + producto(numero_1, numero_2 - 1));
    }
}


int main(){
    int numero_1;
    int numero_2;
    printf("Ingresa el primer numero: ");
    scanf("%i", &numero_1);
    printf("\nIngresa el segundo numero: ");
    scanf("%i", &numero_2);
    printf("\nEl producto de %i y %i es: %i\n", numero_1, numero_2, producto(numero_1, numero_2));


    return 0;
}