/*Programa que tem como objetivo dar recomendações de formas de entrenimentos como: filmes, series, livros e jogos de acordo com as preferências do usuário.

  Particiántes : Gabriel Formigoni dos Santos Neto
                 César Augusto     
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  
   char genero[100];
   
}Lista;

int main(void)
{

   Lista *lista =  malloc(1000 * sizeof(Lista));

   char genero1[100];
   int tipo, cont = 0;
   
   printf("Selecione de acordo com o número, o tipo de recomendação que você gostaria de receber :\n ");
   printf("1 - Filme\n");
   printf("2 - Série\n");
   printf("3 - Livro\n");
   printf("4 - Jogo\n");
   
   scanf("%d", &tipo);
   
   if(tipo == 1){
    
      printf("Digite os gêneros que deseja incluir e quando terminar digite FIM.\n");
   
      while(strcmp(genero1, "FIM") != 0){
      
         scanf("%s", lista[cont].genero);
         strcpy(genero1,lista[cont].genero);
         cont++;
      }
  } 
  
  
  else if(tipo == 2){
    
      printf("Digite os gêneros que deseja incluir e quando terminar digite FIM.\n");
   
      while(strcmp(genero1, "FIM") != 0){
      
         scanf("%s", lista[cont].genero);
         strcpy(genero1,lista[cont].genero);
         cont++;
      }
  } 
  
  
  else if(tipo == 3){
    
      printf("Digite os gêneros que deseja incluir e quando terminar digite FIM.\n");
   
      while(strcmp(genero1, "FIM") != 0){
      
         scanf("%s", lista[cont].genero);
         strcpy(genero1,lista[cont].genero);
         cont++;
      }
  } 
  
  
  else if(tipo == 4){
    
      printf("Digite os gêneros que deseja incluir e quando terminar digite FIM.\n");
   
      while(strcmp(genero1, "FIM") != 0){
      
         scanf("%s", lista[cont].genero);
         strcpy(genero1,lista[cont].genero);
         cont++;
      }
  } 
  
  
  else{
  
     printf("Número inválido!!!\n");
     break;
  
  }

return 0;
}
