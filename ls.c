#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>


int main(){
    char *diretorio = "."; // diretorio atual 
    DIR *dir; // ponteiro para diretorio
    struct dirent *entrada; //entrada para o diretorio 

    //Abre o diretorio para ler
    dir = opendir(diretorio); //abre e retorna um ponteiro para a estrutura
    if (dir == NULL){
        perror("Erro");
        return 1;
    }

    //Lista
    printf("Arquivos armazenados no diretório '%s':\n", diretorio);
    while ((entrada = readdir(dir)) != NULL){ //lê a próxima entrada do diretório
        printf("%s\n", entrada -> d_name); //acessa o nome do arq atual do diret 
    }

    closedir(dir);
    
    return 0;
}