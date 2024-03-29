#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp; // ponteiro para armazenar o endereço da pipe 
    char saida[128];

    //abrir uma pipe para o comando 
    fp = popen ("uptime", "r"); //informa o tempo 
    if (fp == NULL){
        printf("Erro ao executar o comando\n");
        exit(1);
    }

    // ler saída do comando e imprimir
    while (fgets(saida, sizeof(saida), fp) != NULL){ //lê "fp" e armazena em saida
        printf("%s", saida);
    }

    // fechar a pipa 
    pclose(fp);


    return 0;
}