#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq_orig, *arq_dest;
    char caracter; //armazena temporariamente o texto 

    //abre o arquivo de origem
    arq_orig = fopen("arq_orig.txt", "r"); //abre no modo de leitura 
    if (arq_orig == NULL){
        perror("Erro");
        exit(1);
    }

    //abre o arquivo de destino 
    arq_dest = fopen("arq_dest.txt", "w"); // abre no modo de escrita 
    if (arq_dest == NULL){
        perror("Erro");
        exit(1);
    }

    // copia o conteúdo 
    while ((caracter = fgetc(arq_orig)) != EOF){ // lê cada caractere 
        fputc(caracter, arq_dest); // escreve cada caractere
    }

    //fecha arquivos
    fclose(arq_dest);
    fclose(arq_orig);

    printf("Cópia realizada.\n");
    
    return 0;

}