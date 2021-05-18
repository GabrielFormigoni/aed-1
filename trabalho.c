/*Programa que tem como objetivo dar recomendações de formas de entretenimentos como: filmes, series, livros e jogos de acordo com as preferências do usuário.

  Participantes : Gabriel Formigoni dos Santos Neto
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



void inserir_filme(Lista2 *l, int len, char nome[])
{
    strncpy(l[len].nome, nome, 1000);

}


void inserir_serie(Lista2 *l, int len, char nome[])
{
    strncpy(l[len].nome, nome, 1000);

}


void inserir_livro(Lista2 *l, int len, char nome[])
{
    strncpy(l[len].nome, nome, 1000);

}


void inserir_jogo(Lista2 *l, int len, char nome[])
{
    strncpy(l[len].nome, nome, 1000);

}


void remover_filme(Lista2 *l, int len, char nome[])
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


void remover_serie(Lista2 *l, int len, char nome[])
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


void remover_livro(Lista2 *l, int len, char nome[])
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


void remover_jogo(Lista2 *l, int len, char nome[])
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


void imprimir_filme(Lista2 *l, int len)
{
    int i;
    
    for(i = 0; i < len; i++)
    {
       
       printf("%s\n", l[i].nome);
       
    
    }

}


void imprimir_serie(Lista2 *l, int len)
{
    int i;
    
    for(i = 0; i < len; i++)
    {
       
       printf("%s\n", l[i].nome);
       
    
    }

}


void imprimir_livro(Lista2 *l, int len)
{
    int i;
    
    for(i = 0; i < len; i++)
    {
       
       printf("%s\n", l[i].nome);
       
    
    }

}


void imprimir_jogo(Lista2 *l, int len)
{
    int i;
    
    for(i = 0; i < len; i++)
    {
       
       printf("%s\n", l[i].nome);
       
    
    }

}



void recomendacoes_filme(Lista *k, int cont)
{
  int i;
  
     for(i = 0; i < cont; i++){
       
        if(strcmp(k[i].genero, "Drama") == 0){
        
          printf(" Como Eu Era Antes de Você\n");
          printf(" A Culpa é das Estrelas\n");
          printf(" Doze Anos de Escravidão\n");
          printf(" Sempre ao Seu Lado\n");
          printf(" À Espera de um Milagre\n");
        
        }
       
        if(strcmp(k[i].genero, "Ação") == 0){
        
          printf(" Como Eu Era Antes de Você\n");
          printf(" A Culpa é das Estrelas\n");
          printf(" Doze Anos de Escravidão\n");
          printf(" Sempre ao Seu Lado\n");
          printf(" À Espera de um Milagre\n");
        
        } 
       
       if(strcmp(k[i].genero, "Romance") == 0){
        
          printf(" Como Eu Era Antes de Você\n");
          printf(" A Culpa é das Estrelas\n");
          printf(" Doze Anos de Escravidão\n");
          printf(" Sempre ao Seu Lado\n");
          printf(" À Espera de um Milagre\n");
        
        }
       
       if(strcmp(k[i].genero, "Terror") == 0){
        
          printf(" Como Eu Era Antes de Você\n");
          printf(" A Culpa é das Estrelas\n");
          printf(" Doze Anos de Escravidão\n");
          printf(" Sempre ao Seu Lado\n");
          printf(" À Espera de um Milagre\n");
        
        }
       
       if(strcmp(k[i].genero, "Comédia") == 0){
        
          printf(" Como Eu Era Antes de Você\n");
          printf(" A Culpa é das Estrelas\n");
          printf(" Doze Anos de Escravidão\n");
          printf(" Sempre ao Seu Lado\n");
          printf(" À Espera de um Milagre\n");
        
        }
          
     }     
}

void recomendacoes_serie(Lista *k, int cont)
{


}

void recomendacoes_livro(Lista *k, int cont)
{


}

void recomendacoes_jogo(Lista *k, int cont)
{


}



void sinopse_filme(Lista2 *l, char nome[])
{


}

void sinopse_serie(Lista2 *l, char nome[])
{


}

void sinopse_livro(Lista2 *l, char nome[])
{


}

void sinopse_jogo(Lista2 *l, char nome[])
{


}


int main(void)
{

   Lista *lista;
   Lista2 *lista2;
   

   int i;
   char genero1[1000], nome[1000], r, user[1000];
   int tipo, cont = 0, len = 2;
   
   printf("\n\n");
   printf("Programa que tem como objetivo dar recomendações de formas de entretenimentos como: filmes, series, livros e jogos de acordo com as preferências do usuário.");
   printf("\n\n");
      
   lista =  malloc(1000 * sizeof(Lista));
   lista2 =  malloc(3*sizeof(Lista2));
   strcpy(user,"Usuário:");
   strcpy(lista2[0].nome,user);
   
   
   printf("Informe o nome de usuário:\n");
   gets(user);
   strcpy(lista2[1].nome,user);
   
   
   printf("\n\nSelecione de acordo com o número, o tipo de recomendação que você gostaria de receber :\n ");
   printf("1 - Filme\n");
   printf(" 2 - Série\n");
   printf(" 3 - Livro\n");
   printf(" 4 - Jogo\n\n");
   
   
   scanf("%d", &tipo);
   printf("\n");
   
   if(tipo == 1){
    
      printf("Digite os gêneros que deseja incluir no seu filme, e quando terminar digite FIM.\n");
      printf("Exemplos de gêneros: Drama, Ação, Romance, Terror, Comédia.\n");
   
      while(strcmp(genero1, "FIM") != 0){
      
         scanf("%s", lista[cont].genero);
         strcpy(genero1,lista[cont].genero);
         cont++;
      }

  
        printf("\nInforme o caractere conforme a operação que deseja realizar:\n");
        printf("I - Se deseja inserir um filme da lista:\n");
        printf("R - Se deseja remover um filme da lista:\n");
        printf("S - Se deseja saber a sinopse de algum filme:\n");
        printf("M - Se deseja mostrar o conteúdo da lista de filmes:\n");
        printf("F - Se deseja finalizar a lista de filmes e mostrar o seu conteúdo:\n");
        
        
  do
    {
    
        printf("\n");
        scanf(" %c", &r);
        

        if(r == 'I')
        {
        
            printf("\nInforme o filme que deseja inserir.\n");
            printf("Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");
            
            scanf("%s", nome);
            
            len++;            
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));
            inserir_filme(lista2, len-1, nome);
            

        }
        
        
        if(r == 'R')
        {
        
            printf("\nInforme o filme que deseja remover.\n");
            printf("Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");
                        
            scanf("%s", nome);
            
            remover_filme(lista2, len, nome);
            
            len--;
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));

        }
        
        
        if(r == 'S')
        {
        
            printf("\nInforme o filme que deseja saber a sinopse.\n");
            printf("Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");            
            
            scanf("%s", nome);
            
            sinopse(lista2, nome);
        }
        
        
        if(r == 'M')
        {
        
          printf("\n");
          imprimir_filme(lista2, len);
          printf("\n");

        }
        
        
        if(r == 'F')
        {
        
          printf("\n");  
          imprimir_filme(lista2, len);
          printf("\n");
          
        }
    }
    while(r != 'F'); 
          
  } 
  
  
  else if(tipo == 2){
    
      printf("Digite os gêneros que deseja incluir na sua série e quando terminar digite FIM.\n");
      printf("Exemplos de gêneros: Drama, Ação, Romance, Terror, Comédia.\n\n");
   
      while(strcmp(genero1, "FIM") != 0){
      
         scanf("%s", lista[cont].genero);
         strcpy(genero1,lista[cont].genero);
         cont++;
      }
      
  
        printf("\nInforme o caractere conforme a operação que deseja realizar:\n");
        printf("I - Se deseja inserir uma série da lista:\n");
        printf("R - Se deseja remover uma série da lista:\n");
        printf("S - Se deseja saber a sinopse de alguma série:\n");
        printf("M - Se deseja mostrar o conteúdo da sua lista de séries:\n");
        printf("F - Se deseja finalizar a sua lista de séries e mostrar o seu conteúdo:\n");
        
        
  do
    {
    
        printf("\n");
        scanf(" %c", &r);
        

        if(r == 'I')
        {
        
            printf("\nInforme a série que deseja inserir.\n");
            printf("Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");
            
            scanf("%s", nome);
            
            len++;            
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));
            inserir_serie(lista2, len-1, nome);
            

        }
        
        
        if(r == 'R')
        {
        
            printf("\nInforme a série que deseja remover.\n");
            printf("Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");
                        
            scanf("%s", nome);
            
            remover_serie(lista2, len, nome);
            
            len--;
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));

        }
        
        
        if(r == 'S')
        {
        
            printf("\nInforme a série que deseja saber a sinopse.\n");
            printf("Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");            
            
            scanf("%s", nome);
            
            sinopse(lista2, nome);
        }
        
        
        if(r == 'M')
        {
        
          printf("\n");
          imprimir_serie(lista2, len);
          printf("\n");

        }
        
        
        if(r == 'F')
        {
        
          printf("\n");  
          imprimir_serie(lista2, len);
          printf("\n");
          
        }
    }
    while(r != 'F'); 
          
  } 
  
  
  else if(tipo == 3){
    
      printf("Digite os gêneros que deseja incluir no seu livro e quando terminar digite FIM.\n");
      printf("Exemplos de gêneros: Drama, Ação, Romance, Terror, Comédia.\n\n");
   
      while(strcmp(genero1, "FIM") != 0){
      
         scanf("%s", lista[cont].genero);
         strcpy(genero1,lista[cont].genero);
         cont++;
      }

  
        printf("\nInforme o caractere conforme a operação que deseja realizar:\n");
        printf("I - Se deseja inserir um livro da lista:\n");
        printf("R - Se deseja remover um livro da lista:\n");
        printf("S - Se deseja saber a sinopse de algum livro:\n");
        printf("M - Se deseja mostrar o conteúdo da lista de livros:\n");
        printf("F - Se deseja finalizar a lista de livros e mostrar o seu conteúdo:\n");
        
        
  do
    {
    
        printf("\n");
        scanf(" %c", &r);
        

        if(r == 'I')
        {
        
            printf("\nInforme o livro que deseja inserir.\n");
            printf("Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");
            
            scanf("%s", nome);
            
            len++;            
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));
            inserir_livro(lista2, len-1, nome);
            

        }
        
        
        if(r == 'R')
        {
        
            printf("\nInforme o livro que deseja remover.\n");
            printf("Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");
                        
            scanf("%s", nome);
            
            remover_livro(lista2, len, nome);
            
            len--;
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));

        }
        
        
        if(r == 'S')
        {
        
            printf("\nInforme o livro que deseja saber a sinopse.\n");
            printf("Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");            
            
            scanf("%s", nome);
            
            sinopse(lista2, nome);
        }
        
        
        if(r == 'M')
        {
        
          printf("\n");
          imprimir_livro(lista2, len);
          printf("\n");

        }
        
        
        if(r == 'F')
        {
        
          printf("\n");  
          imprimir_livro(lista2, len);
          printf("\n");
          
        }
    }
    while(r != 'F'); 
          
  } 
  
  
  else if(tipo == 4){
    
      printf("Digite os gêneros que deseja incluir no seu jogo e quando terminar digite FIM.\n");
      printf("Exemplos de gêneros: Plataforma, Ação, Esportes, Terror, RPG.\n");
   
      while(strcmp(genero1, "FIM") != 0){
      
         scanf("%s", lista[cont].genero);
         strcpy(genero1,lista[cont].genero);
         cont++;
      }
  
        printf("\nInforme o caractere conforme a operação que deseja realizar:\n");
        printf("I - Se deseja inserir um jogo da lista:\n");
        printf("R - Se deseja remover um jogo da lista:\n");
        printf("S - Se deseja saber a sinopse de algum jogo:\n");
        printf("M - Se deseja mostrar o conteúdo da lista de jogos:\n");
        printf("F - Se deseja finalizar a lista de jogos e mostrar o seu conteúdo:\n");
        
        
  do
    {
    
        printf("\n");
        scanf(" %c", &r);
        

        if(r == 'I')
        {
        
            printf("\nInforme o jogo que deseja inserir.\n");
            printf("Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");
            
            scanf("%s", nome);
            
            len++;            
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));
            inserir_jogo(lista2, len-1, nome);
            

        }
        
        
        if(r == 'R')
        {
        
            printf("\nInforme o jogo que deseja remover.\n");
            printf("Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");
                        
            scanf("%s", nome);
            
            remover_jogo(lista2, len, nome);
            
            len--;
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));

        }
        
        
        if(r == 'S')
        {
        
            printf("\nInforme o jogo que deseja saber a sinopse.\n");
            printf("Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");            
            
            scanf("%s", nome);
            
            sinopse(lista2, nome);
        }
        
        
        if(r == 'M')
        {
        
          printf("\n");
          imprimir_jogo(lista2, len);
          printf("\n");

        }
        
        
        if(r == 'F')
        {
        
          printf("\n");  
          imprimir_jogo(lista2, len);
          printf("\n");
          
        }
    }
    while(r != 'F');   
        
  } 
  
  
  else{
  
     printf("Número inválido!!!\n");
  
  }
        

  free(lista);
  free(lista2);

return 0;

}
