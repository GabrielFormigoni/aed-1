/*Programa que tem como objetivo dar recomendações de formas de entretenimentos como: filmes, series, livros e jogos de acordo com as preferências do usuário.

  Particiántes : Gabriel Formigoni dos Santos Neto
                 César Augusto Sales de Oliveira    
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  
   char genero[100];
   
}Lista;

typedef struct{
  
   char nome[1000];
   
}Lista2;

void imprimir(Lista2 l[], int len)
{
    int i;
    
    for(i = 0; i < len; i++)
    {
    printf("%s\n", l[i].nome);
    }

}

int main(void)
{

   Lista *lista =  malloc(1000 * sizeof(Lista));
   Lista2 *lista2 =  malloc(1000 * sizeof(Lista2));

   int i;
   char genero1[100], r;
   int tipo, cont = 0, len;
   
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
  
  do
    {
        printf("Informe o caractere conforme a operação que deseja realizar:\n");
        printf("I - Se deseja inserir um título da lista:\n");
        printf("R - Se deseja remover um título da lista:\n");
        printf("F - Se deseja finalizar a lista e mostrar o seu conteúdo:\n");
        scanf(" %c", &r);

        if(r == 'I')
        {
            scanf(" %s", nome);
            
            len++;
            lista = (num*) realloc(lista2,(len) * sizeof(num));
            inserir(lista2, len, nome);
            
            

        }
        if(r == 'R')
        {
            scanf(" %s", nome);
            remover(lista2, len, nome);
            
            len--;
            lista=(num*) realloc(lista2,(len) * sizeof(num));

        }
        if(r == 'F')
        {
            
          imprimir(lista2, len);

        }
    }
    while(r != 'F'); 
  
  free(lista);
  free(lista2)

return 0;
}
