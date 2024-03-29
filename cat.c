#include <stdio.h>

int main (){
    FILE *file;
    const char *filename = "arq.txt"; //armazena the name do arquivo que será abertp

    //abre o arquivo para leitura
    file = fopen(filename, "r"); //abre o arq 
    if (file == NULL){
        printf("Erro.\n");
        return 1;
    }

    //lê e exibe o conteúdo em byte com valores ASCII
    int byte;
    while ((byte = fgetc(file)) != EOF){ //lê byte por byte até chegar em EOF
        printf("%d", byte); //exibe o valor de cada byte 
    }

    //fecha
    fclose(file);

    return 0;
}