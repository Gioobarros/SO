# Atividade de chamadas de sistema

## Cat  
O comando cat possui alguns usos, nesse caso, é utilizado o cat para ler um determinado conteúdo armazenado em “arq.txt” e exibir no terminal como um valor ASCII. É utilizado a função “fopen” que irá abrir o arquivo especificado, em modo de leitura e, caso o arquivo esteja vazio, a resposta gerada é um erro. Em seguida, a função “fgetc” irá efetuar a leitura dos caracteres até chegar em EOF, após isso, irá exibir o valor ASCII de cada byte do arquivo. Por fim, a função “fclose” fecha os fluxos. 

## Cp
O comando cp tem como funcionalidade copiar o conteúdo de um determinado arquivo de origem para um arquivo de destino. No código, é utilizado a função “fopen” que irá abrir o arquivo “arq_orig.txt”, em modo de leitura e, caso o arquivo esteja vazio, a resposta gerada é um erro. Após isso, é aberto o “arq_dest.txt” para gravação do conteúdo contido no arquivo de origem, caso o arquivo não exista, será criado e, se já existir, o conteúdo anterior será apagado.  Em seguida, a função “fgetc” irá efetuar a leitura dos caracteres até chegar em EOF e a função “fputc” fará a gravação de um único caractere C no arquivo, na posição indicada. A função “fclose” fecha os fluxos do arquivo de destino e de origem. Por fim, a função “printf” exibe a mensagem de que a cópia foi realizada. 

## Date
O comando date exibe a data atual do sistema, no formado determinado, dd/mm/aaaa. No código, é utilizado a estrutura “struct tm” que é utilizada para que a data e hora sejam representadas de forma decomposta, em diferentes componentes. A função “time” obtém o tempo atual do sistema e em seguida, “localtime” converte o tempo atual para a estrutura tm, armazenando o resultado no ponteiro. A função “strftime” formata para que a data seja exibida no formato desejado. 

## Ls
O comando ls é responsável por listar os arquivos armazenados no diretório. O código utiliza a função “opendir” para abrir o diretório atual e fazer a leitura do mesmo, caso não seja possível fazer esse processo, há uma mensagem de erro. Em seguida, é utilizada a função “readdir” que é responsável por ler cada conteúdo do diretório, para cada entrada, é impresso p nome do arquivo. Por fim, usa-se a função “closedir” para que o diretório seja fechado. 

## Rm
O comando rm possui o objetivo a remoção de um determinado arquivo. No código, é declarada uma variável que irá armazenar o nome do arquivo que será removido, é utilizado a função “remove” e é realizada a verificação, caso a remoção não ocorreu, é gerado uma mensagem de erro. 

## Uptime
O comando uptime executa um comando na shell do sistema operacional que verifica há quanto tempo o computador está ligado. É utilizado a função “opendir” que é responsável por abrir o diretório atual, caso o diretório não seja aberto, é gerado uma mensagem de erro e o programa é encerrado. É utilizado também a função “fgets” que lê uma sequência de caracteres, armazena em “saída” e imprime. Por fim, é utilizado “pclose” para que a pipe seja fechada após a leitura. 
