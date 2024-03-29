#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){
    //variáveis
    time_t tempo_atual;
    struct tm *info_tempo;
    char buffer[11]; //formatação 

    //Tempo atual do sistema 
    time(&tempo_atual);

    //Converte o tempo atual para estrutura tm
    info_tempo = localtime(&tempo_atual);

    //Formata para dd/mm/yyyy
    strftime (buffer, sizeof(buffer), "%d/%m/%Y", info_tempo);

    //Data atual 
    printf("A data de hoje é: %s\n", buffer);

    return 0;
}



