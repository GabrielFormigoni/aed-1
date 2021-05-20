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
        
          printf("\n\nFilmes Drama\n\n");
          printf(" Como_Eu_Era_Antes_de_Você\n");
          printf(" A_Culpa_é_das_Estrelas\n");
          printf(" Doze_Anos_de_Escravidão\n");
          printf(" Sempre_ao_Seu_Lado\n");
          printf(" À_Espera_de_um_Milagre\n");
        
        }
       
        if(strcmp(k[i].genero, "Ação") == 0){
        
          printf("\n\nFilmes Ação\n\n");
          printf(" Tenet\n");
          printf(" Mad_Max\n");
          printf(" Matrix\n");
          printf(" A_Identidade_Bourne\n");
          printf(" Missão_Impossível_Fallout\n");
        
        } 
       
       if(strcmp(k[i].genero, "Romance") == 0){
       
          printf("\n\nFilmes Romance\n\n");
          printf(" PS_Eu_Te_Amo\n");
          printf(" Simplesmente_Acontece\n");
          printf(" Cartas_para_Julieta\n");
          printf(" O_Guarda_Costas\n");
          printf(" Meu_Primeiro_Amor\n");
        
        }
       
       if(strcmp(k[i].genero, "Terror") == 0){
        
          printf("\n\nFilmes Terror\n\n");
          printf(" O_Exorcista\n");
          printf(" O_Massacre_da_Serra_Elétrica\n");
          printf(" O_Sexto_Sentido\n");
          printf(" Psicose\n");
          printf(" IT_A_Coisa\n");
        
        }
       
       if(strcmp(k[i].genero, "Comédia") == 0){
          
          printf("\n\nFilmes Comédia\n\n");
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

   if(strcmp(nome, "Como_Eu_Era_Antes_de_Você") == 0){
   
      printf("\nLouisa Clark é contratada para ser cuidadora do mal-humorado jovem Will Traynor. Apesar da resistência do rapaz, a simpatia de Lou acaba mudando o relacionamento da dupla, mas será que isso será suficiente para mudar os planos de Will?\n");
   
   }
   
    if(strcmp(nome, "A_Culpa_é_das_Estrelas") == 0){
   
      printf("\nHazel não tinha planos de se apaixonar, mas esta ideia veio por água abaixo quando ela conheceu Augustus em um grupo de apoio para pacientes com câncer. A afinidade entre os dois acaba aproximando-os rapidamente, e juntos embarcarão em uma jornada que ficará marcada para sempre em suas vidas.\n");
   
   }
   
   if(strcmp(nome, "Doze_Anos_de_Escravidão") == 0){
   
      printf("\nSolomon Northup vive tranquilamente com sua esposa e filhos, até o dia em que aceitou um trabalho em outra cidade. No caminho, ele é sequestrado e vendido como se fosse escravo. Durante 12 anos, o rapaz terá que passar por humilhações físicas e emocionais para sobreviver.\n");
   
   }
   
   if(strcmp(nome, "Sempre_ao_Seu_Lado") == 0){
   
      printf("\nO professor universitário Parker Wilson encontra um filhote de Akita durante a sua volta do trabalho. O que era para ser um lar provisório acabou se tornando definitivo para o cãozinho, e a afinidade entre a dupla passou a surpreender a todos. \n");
   
   }
   
   if(strcmp(nome, "À_Espera_de_um_Milagre") == 0){
   
      printf("\nImpossível não se emocionar neste drama estrelado por Tom Hanks, que interpreta o carcereiro Paul Edgecomb. O homem passa a ter uma ligação com Coffey, um condenado a pena de morte por matar brutalmente duas gêmeas de 9 anos de idade. Apesar de seu crime, o preso apresenta um comportamento infantil e um dom sobrenatural de cura.\n");
   
   }
  
   if(strcmp(nome, "Tenet") == 0){
   
      printf("\nImpossível não se emocionar neste drama estrelado por Tom Hanks, que interpreta o carcereiro Paul Edgecomb. O homem passa a ter uma ligação com Coffey, um condenado a pena de morte por matar brutalmente duas gêmeas de 9 anos de idade. Apesar de seu crime, o preso apresenta um comportamento infantil e um dom sobrenatural de cura.\n");
   
   }
  
  if(strcmp(nome, "Mad_Max") == 0){
   
      printf("\nImpossível não se emocionar neste drama estrelado por Tom Hanks, que interpreta o carcereiro Paul Edgecomb. O homem passa a ter uma ligação com Coffey, um condenado a pena de morte por matar brutalmente duas gêmeas de 9 anos de idade. Apesar de seu crime, o preso apresenta um comportamento infantil e um dom sobrenatural de cura.\n");
   
   }
  
  if(strcmp(nome, "Matrix") == 0){
   
      printf("\nImpossível não se emocionar neste drama estrelado por Tom Hanks, que interpreta o carcereiro Paul Edgecomb. O homem passa a ter uma ligação com Coffey, um condenado a pena de morte por matar brutalmente duas gêmeas de 9 anos de idade. Apesar de seu crime, o preso apresenta um comportamento infantil e um dom sobrenatural de cura.\n");
   
   }
  
  if(strcmp(nome, "A_Identidade_Bourne") == 0){
   
      printf("\nImpossível não se emocionar neste drama estrelado por Tom Hanks, que interpreta o carcereiro Paul Edgecomb. O homem passa a ter uma ligação com Coffey, um condenado a pena de morte por matar brutalmente duas gêmeas de 9 anos de idade. Apesar de seu crime, o preso apresenta um comportamento infantil e um dom sobrenatural de cura.\n");
   
   }
  
  if(strcmp(nome, "Missão_Impossível_Fallout") == 0){
   
      printf("\nNão poderíamos falar de longas-metragens de ação sem referir uma das sagas mais bem-sucedidas de sempre: Missão Impossível. A sequência mais recente da franquia foi dirigida por Christopher McQuarrie e combina cenas de ação, espionagem e aventura.\nEthan Hunt, o protagonista, recebe mais uma tarefa perigosa e desta vez precisa colaborar com um agente da CIA para conseguir realizá-la.\n");
   
   }
   
  if(strcmp(nome, "PS_Eu_Te_Amo") == 0){
   
      printf("\nHolly Kennedy é uma jovem bonita, feliz e realizada. Casou-se com o homem de sua vida, o apaixonado Gerry, que, infelizmente, fica doente e morre, deixando Holly em estado de choque. Antes de falecer, Gerry deixa para a esposa uma série de cartas. Mensagens sempre assinadas da mesma forma: (P.S. Eu te amo). A mãe e as amigas de Holly estão preocupadas porque as cartas mantêm a jovem presa ao passado. Entretanto, o fato é que as cartas estão ajudando a aliviar sua dor e guiá-la a uma nova vida.\n");
   
   }   
   
  if(strcmp(nome, "Simplesmente_Acontece") == 0){
   
      printf("\nAlex e Rosie são amigos inseparáveis que cresceram juntos em Londres, compartilhando entre si suas melhores experiências. Tudo muda quando Alex ganha uma bolsa de estudos e passa a morar nos EUA. Separados, seus caminhos agora são outros. Mas nos tempos de hoje é impossível não se conectar. E, em se tratando de amor, o difícil é fazer as escolhas certas.\n");
   
   }   
   

  if(strcmp(nome, "Cartas_para_Julieta") == 0){
   
      printf("\nEm visita à cidade italiana de Verona com seu noivo ocupado, uma jovem chamada Sophie visita um muro onde os desiludidos deixam cartas para a trágica heroína de Shakespeare, Julieta Capuleto. Ao encontrar uma dessas cartas, de 1957, a jovem decide escrever à autora, Claire. Inspirada pela atitude de Sophie, Claire decide procurar por seu antigo amor.\n");
   
   }   
   

  if(strcmp(nome, "O_Guarda_Costas") == 0){
   
      printf("\nFrank Farmer, um guarda-costas altamente eficiente e caro, é contratado para proteger Rachel Marron, uma grande cantora e atriz que está recebendo cartas anônimas e ameaçadoras. Frank é um ex-agente do Serviço Secreto que ainda não se perdoou do sentimento de culpa em relação à sua inabilidade de proteger o presidente Reagan, que quase foi assassinado. Frank e Rachel se apaixonam e logo ele se torna parte integrante do círculo íntimo dela. Paralelamente, novos atentados acontecem.\n");
   
   }


  if(strcmp(nome, "Meu_Primeiro_Amor") == 0){
   
      printf("\nVada Sultenfuss, uma garota de 11 anos, é obcecada com a morte, pois sua mãe morreu quando a garota nasceu e seu pai, Harry Sultenfuss, é um agente funerário que não lhe dá muita atenção. Vada é apaixonada por Jake Bixler, seu professor de inglês, e é muito amiga de Thomas J. Sennett, um garoto que é alérgico a tudo. Quando Harry contrata Shelly DeVoto, uma maquiadora, para os funerais e se apaixona por ela, Vada se sente rejeitada e quer fazer qualquer coisa para separá-los.\n");
   
   }    
  
  
  if(strcmp(nome, "O_Exorcista") == 0){
   
      printf("\nUma atriz vai gradativamente tomando consciência de que a sua filha de doze anos está tendo um comportamento completamente assustador. Deste modo, ela pede ajuda a um padre, que também é um psiquiatra, e este chega a conclusão de que a garota está possuída pelo demônio. Ele solicita então a ajuda de um segundo sacerdote, especialista em exorcismo, para tentar livrar a menina desta terrível possessão.\n");
   
   }
   
  
   if(strcmp(nome, "O_Massacre_da_Serra_Elétrica") == 0){
   
      printf("\nEm 1973, a polícia texana deu como encerrado o caso de um terrível massacre de 33 pessoas provocado por um homem que usava uma máscara feita de pele humana. Nos anos que se seguiram os policiais foram acusados de fazer uma péssima investigação e de terem matado o cara errado. Só que dessa vez, o único sobrevivente do massacre vai contar em detalhes o que realmente aconteceu na deserta estrada do Texas, quando ele e mais 4 amigos estavam indo visitar o seu avô.\n");
   
   }
   
  
   if(strcmp(nome, "O_Sexto_Sentido") == 0){
   
      printf("\nUm garoto vê o espírito de pessoas mortas à sua volta. Um dia, ele conta o segredo ao psicólogo Malcolm Crowe, que tenta ajudá-lo a descobrir o que está por trás dos distúrbios. A pesquisa de Crowe sobre os poderes do garoto causa consequências inesperadas a ambos.\n");
   
   }
   
  
   if(strcmp(nome, "Psicose") == 0){
   
      printf("\nApós roubar 40 mil dólares para se casar com o namorado, uma mulher foge durante uma tempestade e decide passar a noite em um hotel que encontra pelo caminho. Ela conhece o educado e nervoso proprietário do estabelecimento, Norman Bates, um jovem com um interesse em taxidermia e com uma relação conturbada com sua mãe. O que parece ser uma simples estadia no local se torna uma verdadeira noite de terror.\n");
   
   }
   
  
   if(strcmp(nome, "IT_A_Coisa") == 0){
   
      printf("\nUm grupo de crianças se une para investigar o misterioso desaparecimento de vários jovens em sua cidade. Eles descobrem que o culpado é Pennywise, um palhaço cruel que se alimenta de seus medos e cuja violência teve origem há vários séculos.\n");
   
   }  
  
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

      recomendacoes_filme(lista, cont);
      
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
            
            sinopse_filme(lista2, nome);
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
