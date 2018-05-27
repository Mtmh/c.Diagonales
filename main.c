#include <stdio.h>

typedef int Matriz[5][5];

void muestraDiagonalPrincipal(Matriz M);
void muestraDiagonalSecundaria(Matriz M);
void muestraMatriz(Matriz M);



int main(void)
{
    Matriz M = {

        { 1, 2, 3, 4, 5},
        { 1, 1, 1, 1, 1},
        { 5, 4, 3, 2, 1},
        { 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0}


    };
    muestraMatriz(M);
    printf("\n");
    muestraDiagonalPrincipal(M);
    printf("\n");
    muestraDiagonalSecundaria(M);
    printf("\n");

    return 0;
}

void muestraDiagonalPrincipal(Matriz M)
{
    for (int i = 0; i < 5; ++i)
        printf("%d ", M[i][i]);
}

void muestraDiagonalSecundaria(Matriz M)
{
    for (int i = 5 - 1, j = 0; i >= 0 && j < 5; --i, ++j){
        printf("%d ", M[i][j]);
    }

}
void muestraMatriz(Matriz M)
{
    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 5; ++j){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
