#include <stdio.h>
#include <stdlib.h>
#include "entrada.h"
#include "operacoes.h"
#include "metodos.h"
#include "saida.h"


int main(int argc, char const *argv[])
{    
    double **A;
    double **O;
    double **R;
    int dimensao = 4;
    double *resid;
    

    A = lerMatriz(&dimensao,&dimensao);
    O = criaMatriz(dimensao, dimensao);
    R = criaMatrizI(dimensao);
    resid = criaVetor(dimensao);


    //verifica se é matriz triangular inferior
    // if(determinanteI(A,dimensao) == 0){
    //     printf("A matriz é singular, não é possível aplicar o método\n");
    //     exit(1);
    // }
    
    // schmidt(A,Q,R,dimensao);
    // imprimeMatriz(l,dimensao,dimensao);
    // imprimeMatriz(u,dimensao,dimensao);
    //residuo(A,x,b,resid,dimensao);
    //printf("Residuo: %lf\n", normaDois(resid, dimensao));

    return 0;
}
