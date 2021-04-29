/*Programa que tem como objetivo dar recomendações de formas de entretenimentos como: filmes, series, livros e jogos de acordo com as preferências do usuário.

  Particiántes : Gabriel Formigoni dos Santos Neto
                 César Augusto Sales de Oliveira    
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  
   char genero[1000];
   
}Lista;

typedef struct{
  
   char nome[1000];
   
}Lista2;



void inserir(Lista2 *l, int len, char nome[])
{
    strcpy(l[len].nome, nome);

}


void remover(Lista2 *l, int len, char nome[])
{
    int i, j;
    
    for(i = 0; i < len; i++)
    {
        if(strcmp(l[i].nome,nome)==0)
        {
            for(j = i; j < len; j++)
            {
                strncpy(l[j].nome,l[j+1].nome,1000);

            }
        }
    }
}


void imprimir(Lista2 *l, int len)
{
    int i;
    
    for(i = 0; i < len; i++)
    {
       
       printf("%s\n", l[i].nome);
       
    
    }

}

void recomendacoes(Lista *k)
{


}


void sinopse(Lista2 *l, char nome[])
{


}


int main(void)
{

   Lista *lista;
   Lista2 *lista2;
   

   int i;
   char genero1[1000], nome[1000], r, user[1000];
   int tipo, cont = 0, len = 2;
   
   
   lista =  malloc(1000 * sizeof(Lista));
   lista2 =  malloc(3*sizeof(Lista2));
   strcpy(user,"Usuário:");
   strcpy(lista2[0].nome,user);
   
   
   printf("Informe o nome de usuário:\n");
   gets(user);
   strcpy(lista2[1].nome,user);
   
   
   printf("\n\n\nSelecione de acordo com o número, o tipo de recomendação que você gostaria de receber :\n ");
   printf("1 - Filme\n");
   printf(" 2 - Série\n");
   printf(" 3 - Livro\n");
   printf(" 4 - Jogo\n\n");
   
   
   scanf("%d", &tipo);
   
   
   if(tipo == 1){
    
      printf("\n\nDigite os gêneros que deseja incluir e quando terminar digite FIM.\n");
      printf("Exemplos de gêneros: Drama, Ação, Aventura, Terror, Comédia\n");
   
      while(strcmp(genero1, "FIM") != 0){
      
         scanf("%s", lista[cont].genero);
         strcpy(genero1,lista[cont].genero);
         cont++;
      }
  } 
  
  
  else if(tipo == 2){
    
      printf("\n\nDigite os gêneros que deseja incluir e quando terminar digite FIM.\n");
      printf("Exemplos de gêneros: Drama, Ação, Aventura, Terror, Comédia\n\n");
   
      while(strcmp(genero1, "FIM") != 0){
      
         scanf("%s", lista[cont].genero);
         strcpy(genero1,lista[cont].genero);
         cont++;
      }
  } 
  
  
  else if(tipo == 3){
    
      printf("\n\nDigite os gêneros que deseja incluir e quando terminar digite FIM.\n");
      printf("Exemplos de gêneros: Drama, Ação, Aventura, Terror, Comédia\n\n");
   
      while(strcmp(genero1, "FIM") != 0){
      
         scanf("%s", lista[cont].genero);
         strcpy(genero1,lista[cont].genero);
         cont++;
      }
  } 
  
  
  else if(tipo == 4){
    
      printf("\n\nDigite os gêneros que deseja incluir e quando terminar digite FIM.\n");
      printf("Exemplos de gêneros: Drama, Ação, Aventura, Terror, Comédia\n");
   
      while(strcmp(genero1, "FIM") != 0){
      
         scanf("%s", lista[cont].genero);
         strcpy(genero1,lista[cont].genero);
         cont++;
      }
  } 
  
  
  else{
  
     printf("Número inválido!!!\n");
  
  }
  
        printf("\nInforme o caractere conforme a operação que deseja realizar:\n");
        printf("I - Se deseja inserir um título da lista:\n");
        printf("R - Se deseja remover um título da lista:\n");
        printf("S - Se deseja saber a sinopse de algum título:\n");
        printf("M - Se deseja mostrar o conteúdo da lista:\n");
        printf("F - Se deseja finalizar a lista e mostrar o seu conteúdo:\n");
        
        
  do
    {
    
        printf("\n");
        scanf(" %c", &r);
        

        if(r == 'I')
        {
        
            printf("\nInforme o título que deseja inserir.\n");
            printf("Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos)\n");
            
            scanf("%s", nome);
            
            len++;            
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));
            inserir(lista2, len-1, nome);
            

        }
        
        
        if(r == 'R')
        {
        
            printf("\nInforme o título que deseja remover.\n");
            printf("Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos)\n");
                        
            scanf("%s", nome);
            
            remover(lista2, len, nome);
            
            len--;
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));

        }
        
        
        if(r == 'S')
        {
        
            printf("\nInforme o título que deseja saber a sinopse.\n");
            printf("Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos)\n");            
            
            scanf("%s", nome);
            printf("\n");
            
            sinopse(lista2, nome);
        }
        
        
        if(r == 'M')
        {
        
          printf("\n");
          imprimir(lista2, len);
          printf("\n");

        }
        
        
        if(r == 'F')
        {
        
          printf("\n");  
          imprimir(lista2, len);
          printf("\n");
          
        }
    }
    while(r != 'F'); 
  
  free(lista);
  free(lista2);

return 0;
}
