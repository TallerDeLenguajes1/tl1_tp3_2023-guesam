#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargarMatriz(int produccion[5][12]);
void mostrarValores(int produccion[5][12]);

int main(){
    srand(time(NULL));
    int produccion[5][12];

    cargarMatriz(produccion);
    mostrarValores(produccion);

    return 0;
}


//a. Cargue dicha matriz con valores aleatorios entre 10000 y 50000.
void cargarMatriz(int produccion[5][12]){
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 12; j++){
            produccion[i][j] = rand() % 40001 + 10000;
        }
    }
}


//b. Muestre por pantalla los valores cargados
void mostrarValores(int produccion[5][12]){
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 12; j++){
            printf("Matriz[%d][%d] = %d \n", i, j, produccion[i][j]);
        }
        printf("\n");
    }
}

//c. Saque el promedio de ganancia por año y muestrelos por pantalla


//d. Obtenga el valor máximo y el valor mínimo obtenido informando el “año” y el “mes” de cuándo ocurrió.