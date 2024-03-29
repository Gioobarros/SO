#include <stdio.h>
#include <stdlib.h>

int main(){
    //arquivo para remoção
    char arquivo[] = "arq_rem.txt";

    //remove 
    if(remove(arquivo) == 0){
        printf("Arquivo removido. :)\n");
    } else {
        perror("Erro");
        exit(1);
    }
    return 0;
}