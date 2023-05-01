#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargarMatriz(int produccion[5][12]);
void mostrarValores(int produccion[5][12]);
void promedioAnio(int produccion[5][12]);
void valorMaximo(int produccion[5][12]);
void valorMinimo(int produccion[5][12]);

int main(){
    srand(time(NULL));
    int produccion[5][12];

    cargarMatriz(produccion);
    mostrarValores(produccion);
    promedioAnio(produccion);
    valorMaximo(produccion);
    valorMinimo(produccion);

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
void promedioAnio(int produccion[5][12]){
    float aux[5];
    for (int i = 0; i < 5; i++){
        aux[i] = 0;
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 12; j++){
            aux[i] += produccion[i][j];
        }
    }

    for (int i = 0; i < 5; i++){
        aux[i] = aux[i] / 12;
        printf("Promedio anio %d: %.2f \n", (i+1), aux[i]);
    }
}

//d. Obtenga el valor máximo y el valor mínimo obtenido informando el “año” y el “mes” de cuándo ocurrió.
void valorMaximo(int produccion[5][12]){
    int aux = 10000, mes, anio;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 12; j++){
            if(produccion[i][j] > aux){
                aux = produccion[i][j];
                mes = j + 1;
                anio = i + 1;
            }
        }
    }
    printf("\nEl mayor valor obtenido fue %d, en el mes %d del anio %d \n", aux, mes, anio);
}

void valorMinimo(int produccion[5][12]){
    int aux = 50000, mes, anio;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 12; j++){
            if(produccion[i][j] < aux){
                aux = produccion[i][j];
                mes = j + 1;
                anio = i + 1;
            }
        }
    }
    printf("\nEl menor valor obtenido fue %d, en el mes %d del anio %d \n", aux, mes, anio);
}