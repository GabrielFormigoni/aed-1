/*Programa que tem como objetivo dar recomendações de formas de entretenimentos como: filmes, series, livros e jogos de acordo com as preferências do usuário.

  Participantes : Gabriel Formigoni dos Santos Neto  
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  
   char genero[1000];
   char genero2[1000];
   char genero3[1000];
   char genero4[1000];
   int ano;
   char tipo[1000];
   
}Lista;

typedef struct{
  
   char nome[1000];
   char nome2[1000];
   char nome3[1000];
   char nome4[1000];
   
}Lista2;


void limpatela()
{

   system("clear");   

}


void pausatela()
{

   system("read -p 'Press Enter to continue...' var");

}


void inserir_filme(Lista2 *l, int len, char nome[])
{
    strncpy(l[len].nome, nome, 1000);
    
    printf("\nFilme inserido com sucesso!!!\n\n");

}


void inserir_serie(Lista2 *l, int len, char nome[])
{
    strncpy(l[len].nome2, nome, 1000);
    
    printf("\nSérie inserido com sucesso!!!\n\n");

}


void inserir_livro(Lista2 *l, int len, char nome[])
{
    strncpy(l[len].nome3, nome, 1000);
    
    printf("\nLivro inserido com sucesso!!!\n\n");

}


void inserir_jogo(Lista2 *l, int len, char nome[])
{
    strncpy(l[len].nome4, nome, 1000);
    
    printf("\nJogo inserido com sucesso!!!\n\n");

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
    
    printf("\nFilme removido com sucesso!!!\n\n");
}


void remover_serie(Lista2 *l, int len, char nome[])
{
    int i, j;
    
    for(i = 0; i < len; i++)
    {
        if(strcmp(l[i].nome2,nome)==0)
        {
            for(j = i; j < len; j++)
            {
                strncpy(l[j].nome2,l[j+1].nome2,1000);

            }
        }
    }
    
    printf("\nSérie removida com sucesso!!!\n\n");
}


void remover_livro(Lista2 *l, int len, char nome[])
{
    int i, j;
    
    for(i = 0; i < len; i++)
    {
        if(strcmp(l[i].nome3,nome)==0)
        {
            for(j = i; j < len; j++)
            {
                strncpy(l[j].nome3,l[j+1].nome3,1000);

            }
        }
    }
    
    printf("\nLivro removido com sucesso!!!\n\n");
}


void remover_jogo(Lista2 *l, int len, char nome[])
{
    int i, j;
    
    for(i = 0; i < len; i++)
    {
        if(strcmp(l[i].nome4,nome)==0)
        {
            for(j = i; j < len; j++)
            {
                strncpy(l[j].nome4,l[j+1].nome,1000);

            }
        }
    }
    
    printf("\nJogo removido com sucesso!!!\n\n");
}


void imprimir_filme(Lista2 *l, int len)
{
    int i;
    
    printf("    ____________\n\n");
    printf("   |%s|\n", l[1].nome);
    printf("    ____________\n\n\n");
    printf("Usuário : %s\n\n",l[0].nome);
    printf("============================\n");    
    printf("FILMES : \n\n");
    
    for(i = 2; i < len; i++)
    {

       printf(" %s\n", l[i].nome);
       
    
    }
    printf("============================\n");

}


void imprimir_serie(Lista2 *l, int len)
{
    int i;
    
    printf("    ____________\n\n");
    printf("   |%s|\n", l[1].nome);
    printf("    ____________\n\n\n");
    printf("Usuário : %s\n\n",l[0].nome);
    printf("============================\n");    
    printf("SÉRIES : \n\n");
    
    for(i = 2; i < len; i++)
    {

       printf(" %s\n", l[i].nome2);
       
    
    }
    printf("============================\n");
        
}


void imprimir_livro(Lista2 *l, int len)
{
    int i;
    
    printf("    ____________\n\n");
    printf("   |%s|\n", l[1].nome);
    printf("    ____________\n\n\n");
    printf("Usuário : %s\n",l[0].nome);
    printf("============================\n");
    printf(" LIVROS : \n\n");
    
    for(i = 2; i < len; i++)
    {

       printf(" %s\n",  l[i].nome3);
       
    
    }
    printf("\n============================");
   
}


void imprimir_jogo(Lista2 *l, int len)
{
    int i;
    
    printf("    ____________\n\n");
    printf("   |%s|\n", l[1].nome);
    printf("    ____________\n\n\n");
    printf("Usuário : %s\n\n",l[0].nome);
    printf("============================\n");
    printf("JOGOS : \n\n");
    
    for(i = 2; i < len; i++)
    {

       printf(" %s\n", l[i].nome4);
       }
       
    
    }
    printf("============================\n");
  
}


void limpa_filme(Lista *k, int cont)
{
   int i;
   
   for(i = 0; i < cont; i++){
   
      strcpy(k[i].genero,"teste");
   
   }


}


void limpa_serie(Lista *k, int cont)
{
   int i;
   
   for(i = 0; i < cont; i++){
   
      strcpy(k[i].genero2,"teste");
   
   }


}


void limpa_livro(Lista *k, int cont)
{
   int i;
   
   for(i = 0; i < cont; i++){
   
      strcpy(k[i].genero3,"teste");
   
   }


}

 
void limpa_jogo(Lista *k, int cont)
{
   int i;
   
   for(i = 0; i < cont; i++){
   
      strcpy(k[i].genero4,"teste");
   
   }


}

    
void recomendacoes_filme(Lista *k, int cont)
{
  int i;
  
     for(i = 0; i < cont; i++){
       
        if(strcmp(k[i].genero, "Drama") == 0){
        
          printf("\n\nFilmes Drama\n\n");
          printf(" Como_Eu_Era_Antes_de_Você                                      PS_Eu_Te_Amo\n");
          printf(" A_Culpa_é_das_Estrelas                                         Túmulo_dos_Vaga_Lumes\n");
          printf(" Doze_Anos_de_Escravidão                                        Mad_Max\n");
          printf(" Sempre_ao_Seu_Lado                                             Meu_Primeiro_Amor\n");
          printf(" Tenet                                                          À_Espera_de_um_Milagre\n");
          printf(" O_Guarda_Costas                                                A_Identidade_Bourne\n");
          printf(" Cartas_para_Julieta\n");
        
        }
       
        if(strcmp(k[i].genero, "Histórico") == 0){
        
          printf("\n\nFilmes Históricos\n\n");
          printf(" Doze_Anos_de_Escravidão\n");
        
        }
       
        if(strcmp(k[i].genero, "Ficção") == 0){
        
          printf("\n\nFilmes Ficção\n\n");
          printf(" Tenet\n");
          printf(" Coraline\n");
          printf(" Mad_Max\n");
          printf(" Upgrade\n");
        
        }
       
        if(strcmp(k[i].genero, "Animação") == 0){
        
          printf("\n\nFilmes Animação\n\n");
          printf(" O_Rei_Leão\n");
          printf(" Túmulo_dos_Vaga_Lumes\n");
          printf(" Divertidamente\n");
          printf(" Toy_Story\n");
          printf(" ParaNorman\n");
          printf(" Coraline\n");
          
        
        }
       
        if(strcmp(k[i].genero, "Crime") == 0){
        
          printf("\n\nFilmes Crime\n\n");
          printf(" À_Espera_de_um_Milagre\n");
          printf(" O_Guarda_Costas\n");
          printf(" A_Identidade_Bourne\n");
        
        }
       
        if(strcmp(k[i].genero, "Suspense") == 0){
        
          printf("\n\nFilmes Suspense\n\n");
          printf(" À_Espera_de_um_Milagre                                         Missão_Impossível_Fallout\n");
          printf(" A_Identidade_Bourne                                            O_Exorcista\n");
          printf(" O_Sexto_Sentido                                                Mad_Max\n");
          printf(" Psicose                                                        O_Guarda_Costas\n");
          printf(" IT_A_Coisa                                                     O_Massacre_da_Serra_Elétrica\n");
          printf(" Tenet                                                          Upgrade\n");
          printf(" ParaNorman                                                     Coraline\n");
        
        }
       
        if(strcmp(k[i].genero, "Ação") == 0){
        
          printf("\n\nFilmes Ação\n\n");
          printf(" Tenet\n");
          printf(" Mad_Max\n");
          printf(" Matrix\n");
          printf(" A_Identidade_Bourne\n");
          printf(" Upgrade\n");
          printf(" O_Guarda_Costas\n");
          printf(" Missão_Impossível_Fallout\n");
        
        } 
       
       if(strcmp(k[i].genero, "Romance") == 0){
       
          printf("\n\nFilmes Romance\n\n");
          printf(" PS_Eu_Te_Amo\n");
          printf(" Simplesmente_Acontece\n");
          printf(" Cartas_para_Julieta\n");
          printf(" O_virgem_de_40_anos\n");
          printf(" Como_Eu_Era_Antes_de_Você\n");
          printf(" A_Culpa_é_das_Estrelas\n");
          printf(" O_Guarda_Costas\n");
          printf(" Meu_Primeiro_Amor\n");
        
        }
       
       if(strcmp(k[i].genero, "Terror") == 0){
        
          printf("\n\nFilmes Terror\n\n");
          printf(" O_Exorcista\n");
          printf(" ParaNorman\n");
          printf(" Coraline\n");
          printf(" Upgrade\n");
          printf(" O_Massacre_da_Serra_Elétrica\n");
          printf(" O_Sexto_Sentido\n");
          printf(" Psicose\n");
          printf(" IT_A_Coisa\n");
        
        }
       
       if(strcmp(k[i].genero, "Comédia") == 0){
          
          printf("\n\nFilmes Comédia\n\n");
          printf(" Minha_Mãe_é_Uma_Peça                                           O_virgem_de_40_anos\n");
          printf(" Cartas_para_Julieta                                            Simplesmente_Acontece\n");
          printf(" Até_que_a_Sorte_nos_Separe                                     As_Férias_de_Mr_Bean\n");
          printf(" Missão_Madrinha_de_Casamento                                   Toy_Story\n");
          printf(" Meu_Primeiro_Amor                                              Divertidamente\n");
        
        }
          
     }     
}

void recomendacoes_serie(Lista *k, int cont)
{
  int i;
  
     for(i = 0; i < cont; i++){
       
        if(strcmp(k[i].genero2, "Drama") == 0){
        
          printf("\n\nSéries Drama\n\n");
          printf(" Elite                                                Sherlock                                          Kingdom\n");
          printf(" Os_Inocentes                                         Sex_Education                                     Peaky_Blinders\n");
          printf(" Lupin                                                Sky_Rojo                                          La_Casa_de_Papel\n");
          printf(" How_I_Met_Your_Mother                                Riverdale                                         Bates_Motel\n");
          printf(" A_Maldição_da_Mansão_Bly                             Virgin_River                                      The_End_of_the_F***ing_World\n");
          printf(" Jane_a_Virgem                                        The_Witcher                                       O_Mundo_Sombrio_de_Sabrina\n");
        
        }
       
        if(strcmp(k[i].genero2, "Ação") == 0){
        
          printf("\n\nSéries Ação\n\n");
          printf(" Sky_Rojo\n");
          printf(" Lupin\n");
          printf(" Sherlock\n");
          printf(" The_Witcher\n");
          printf(" Peaky_Blinders\n");
          printf(" Kingdom\n");
          printf(" La_Casa_de_Papel\n");
        
        } 
       
        if(strcmp(k[i].genero2, "Suspense") == 0){
       
          printf("\n\nSéries Suspense\n\n");
          printf(" Elite\n");
          printf(" Stranger_Things\n");
          printf(" Bates_Motel\n");
          printf(" American_Horror_Story\n");
          printf(" La_Casa_de_Papel\n");
          printf(" Kingdom\n");
          printf(" Peaky_Blinders\n");
          printf(" Lupin\n");
       
        }
       
        if(strcmp(k[i].genero2, "Fantasia") == 0){
       
          printf("\n\nSéries Fantasia\n\n");
          printf(" The_Witcher\n");
          printf(" Sherlock\n");
          printf(" Kingdom\n");
       
        }     
       
        if(strcmp(k[i].genero2, "Mistério") == 0){
       
          printf("\n\nSéries Mistério\n\n");
          printf(" Elite\n");
          printf(" O_Mundo_Sombrio_de_Sabrina\n");
          printf(" Stranger_Things\n");
          printf(" Bates_Motel\n");
          printf(" Lupin\n");
          printf(" American_Horror_Story\n");
          printf(" Riverdale\n");
          printf(" Sherlock\n");
       
        }
       
       if(strcmp(k[i].genero2, "Romance") == 0){
       
          printf("\n\nSéries Romance\n\n");
          printf(" Jane_a_Virgem\n");
          printf(" Riverdale\n");
          printf(" How_I_Met_Your_Mother\n");
          printf(" Virgin_River\n");
          printf(" Friends\n");
          printf(" Os_Inocentes\n");
          printf(" Bridgerton\n");
        
        }
       
       if(strcmp(k[i].genero2, "Terror") == 0){
        
          printf("\n\nSéries Terror\n\n");
          printf(" American_Horror_Story\n");
          printf(" Stranger_Things\n");
          printf(" Os_Inocentes\n");
          printf(" O_Mundo_Sombrio_de_Sabrina\n");
          printf(" A_Maldição_da_Mansão_Bly\n");
          printf(" Kingdom\n");
          printf(" Bates_Motel\n");
        
        }
       
       if(strcmp(k[i].genero2, "Comédia") == 0){
          
          printf("\n\nSéries Comédia\n\n");
          printf(" Friends\n");
          printf(" Sex_Education\n");
          printf(" Sherlock\n");
          printf(" Jane_a_Virgem\n");
          printf(" The_Big_Bang_Theory\n");
          printf(" How_I_Met_Your_Mother\n");
          printf(" Os_Simpsons\n");
          printf(" Todo_Mundo_Odeia_o_Chris \n");
        
        }
          
     } 

}

void recomendacoes_livro(Lista *k, int cont)
{
  int i;
  
     for(i = 0; i < cont; i++){
       
        if(strcmp(k[i].genero3, "Drama") == 0){
        
          printf("\n\nLivros Drama\n\n");
          printf(" O_diário_de_Anne_Frank\n");
          printf(" O_menino_do_pijama_listrado\n");
          printf(" Capitães_da_areia\n");
          printf(" Me_Chame_pelo_Seu_Nome\n");
          printf(" A_menina_que_roubava_livros\n");
          printf(" A_cidade_do_Sol\n");
        
        }
       
        if(strcmp(k[i].genero3, "Ação") == 0){
        
          printf("\n\nLivros Ação\n\n");
          printf(" As_Crônicas_de_Nárnia\n");
          printf(" O_Hobbit\n");
          printf(" O_Instituto\n");
          printf(" Uma_Dobra_no_Tempo\n");
          printf(" Viagem_ao_Centro_da_Terra\n");
        
        } 
       
        if(strcmp(k[i].genero3, "Fantasia") == 0){
        
          printf("\n\nLivros Fantasia\n\n");
          printf(" As_Crônicas_de_Nárnia\n");
          printf(" O_Hobbit\n");
          printf(" Harry_Potter\n");
          printf(" Percy_Jackson\n");
          printf(" O_Instituto\n");
          printf(" Uma_Dobra_no_Tempo\n");
          printf(" Viagem_ao_Centro_da_Terra\n");
        
        }       
       
       if(strcmp(k[i].genero3, "Romance") == 0){
       
          printf("\n\nLivros Romance\n\n");
          printf(" Me_Chame_pelo_Seu_Nome\n");
          printf(" A_cidade_do_Sol\n");
          printf(" Viagem_ao_Centro_da_Terra\n");
          printf(" Uma_Dobra_no_Tempo\n");
          printf(" O_Visconde_que_me_Amava\n");
          printf(" A_menina_que_roubava_livros\n");
          printf(" Eleanor_&_Park\n");
          printf(" Capitães_da_areia\n");
          printf(" O_Diário_de_Suzana_para_Nicolas\n");
          printf(" Simplesmente_Acontece\n");
        
        }
       
       if(strcmp(k[i].genero3, "Terror") == 0){
        
          printf("\n\nLivros Terror\n\n");
          printf(" O_Desfiladeiro_do_Medo\n");
          printf(" As_Ruínas\n");
          printf(" O_Instituto\n");
          printf(" A_Profecia\n");
          printf(" O_Exorcista\n");
          printf(" A_Coisa\n");
        
        }
       
       if(strcmp(k[i].genero3, "Comédia") == 0){
          
          printf("\n\nLivros Comédia\n\n");
          printf(" Azul_da_Cor_do_Mar\n");
          printf(" Cadê_Você_Bernadette?\n");
          printf(" Galvez_Imperador_do_Acre\n");
          printf(" A_louca_dos_gatos\n");
          printf(" Cães_e_gatos\n");
        
        }
          
     }

}

void recomendacoes_jogo(Lista *k, int cont)
{
  int i;
  
     for(i = 0; i < cont; i++){

        if(strcmp(k[i].genero4, "Plataforma") == 0){
        
          printf("\n\nJogos Plataforma\n\n");
          printf(" Katana_Zero\n");
          printf(" Celeste\n");
          printf(" Little_Nightmares\n");
          printf(" Ori_and_the_Blind_Forest\n");
          printf(" Hollow_Knight\n");
        
        }
       
        if(strcmp(k[i].genero4, "Ação") == 0){
        
          printf("\n\nJogos Ação\n\n");
          printf(" Assassin’s_Creed_II\n");
          printf(" Red_Dead_Redemption_2\n");
          printf(" Until_Dawn\n");
          printf(" The_Elder_Scrolls_V:_Skyrim\n");
          printf(" Tomb_Raider\n");
          printf(" Resident_Evil_7\n");
          printf(" Hollow_Knight\n");
          printf(" Ori_and_the_Blind_Forest\n");
          printf(" The_Last_of_Us\n");
          printf(" Grand_Theft_Auto_V\n");
        
        } 
       
        if(strcmp(k[i].genero4, "Aventura") == 0){
        
          printf("\n\nJogos Aventura\n\n");
          printf(" Hollow_Knight                                        Grand_Theft_Auto_V                          Tomb_Raider\n");
          printf(" Resident_Evil_7                                      Outlast                                     Ori_and_the_Blind_Forest\n");
          printf(" Until_Dawn                                           The_Last_of_Us                              Little_Nightmares\n");
          printf(" The_Elder_Scrolls_V:_Skyrim                          Red_Dead_Redemption_2                       Mass_Effect 2\n");
          printf(" Assassin’s_Creed_II                                  Katana_Zero                                 Celeste\n");
          printf(" Monster_Hunter:_World                                Horizon_Zero_Dawn                           Genshin_Impact\n");
        
        }
       
        if(strcmp(k[i].genero4, "Tiro") == 0){
        
          printf("\n\nJogos Tiro\n\n");
          printf(" Red_Dead_Redemption_2\n");
          printf(" Alien:_Isolation\n");
          printf(" Resident_Evil_7\n");
          printf(" The_Last_of_Us\n");
          
          
        
        }
       
       if(strcmp(k[i].genero4, "Esportes") == 0){
       
          printf("\n\nJogos Esportes\n\n");
          printf(" FIFA_20\n");
          printf(" PES_2020\n");
          printf(" Crash_Team_Racing_Nitro_Fueled\n");
          printf(" Need_For_Speed_Heat\n");
          printf(" UFC_3\n");
        
        }
       
       if(strcmp(k[i].genero4, "Terror") == 0){
        
          printf("\n\nJogos Terror\n\n");
          printf(" Alien:_Isolation                                     Resident_Evil_7                             Dark_Souls_III\n");
          printf(" Outlast                                              Layers_of_Fear                              SOMA\n");
          printf(" Until_Dawn                                           Mass_Effect 2                               Dead_Space\n");
          printf(" The_Last_of_Us                                       Silent_Hill                                 F.E.A.R\n");
          printf(" Little_Nightmares                                    The_Evil_Within                             Lone_Survivor\n");
        
        }
       
       if(strcmp(k[i].genero4, "RPG") == 0){
          
          printf("\n\nJogos RPG\n\n");
          printf(" The_Elder_Scrolls_V:_Skyrim                          Mass_Effect 2                               Monster_Hunter:_World\n");
          printf(" Disco_Elysium                                        Undertale                                   Horizon_Zero_Dawn\n");
          printf(" Persona_5_Royal                                      Stardew_Valley                              Genshin_Impact\n");
          printf(" Chrono_Cross                                         Diablo_III                                  Dark_Souls_III\n");
          printf(" Final_Fantasy_VII_Remake                             The_Witcher_3                               Path_of_Exile\n");
        
        }
          
     }

}

void ano_filme(Lista2 *l, char nome[])
{

if(strcmp(nome, "Como_Eu_Era_Antes_de_Você") == 0){
   
      printf("\nAno de lançamento : 2016\n");
   
   }
   
    if(strcmp(nome, "A_Culpa_é_das_Estrelas") == 0){
   
      printf("\nAno de lançamento : 2014\n");
      
   }
   
   if(strcmp(nome, "Doze_Anos_de_Escravidão") == 0){
   
      printf("\nAno de lançamento : 2013\n");
      
   
   }
   
   if(strcmp(nome, "Sempre_ao_Seu_Lado") == 0){
   
      printf("\nAno de lançamento : 2009\n");
      
   
   }
   
   if(strcmp(nome, "À_Espera_de_um_Milagre") == 0){
   
      printf("\nAno de lançamento : 1999\n");
      
    
   }
 
   if(strcmp(nome, "Tenet") == 0){
   
      printf("\nAno de lançamento : 2020\n");
      
   
   }
  
  if(strcmp(nome, "Mad_Max") == 0){
   
       printf("\nAno de lançamento : 1980\n");
      
   
   }
  
  if(strcmp(nome, "Matrix") == 0){
   
      printf("\nAno de lançamento : 1999\n");
      
   
   }
  
  if(strcmp(nome, "A_Identidade_Bourne") == 0){
   
      printf("\nAno de lançamento : 2002\n");
      
   
   }
  
  if(strcmp(nome, "Missão_Impossível_Fallout") == 0){
   
      printf("\nAno de lançamento : 2018\n");
      
     
   }   
   

  if(strcmp(nome, "PS_Eu_Te_Amo") == 0){
   
      printf("\nAno de lançamento : 2008\n");
      
     
   }   
   
  if(strcmp(nome, "Simplesmente_Acontece") == 0){
   
      printf("\nAno de lançamento : 2014\n");
      
     
   }   
   

  if(strcmp(nome, "Cartas_para_Julieta") == 0){
   
      printf("\nAno de lançamento : 2010\n");
      
    
   }   
   

  if(strcmp(nome, "O_Guarda_Costas") == 0){
   
      printf("\nAno de lançamento : 1993\n");
      
     
   }


  if(strcmp(nome, "Meu_Primeiro_Amor") == 0){
   
      printf("\nAno de lançamento : 1992\n");
      
     
   }   

  if(strcmp(nome, "O_Exorcista") == 0){
   
      printf("\nAno de lançamento : 1973\n");
      
     
   }
   
   if(strcmp(nome, "O_Massacre_da_Serra_Elétrica") == 0){
   
      printf("\nAno de lançamento : 1974\n");
      
     
   }
   
   if(strcmp(nome, "O_Sexto_Sentido") == 0){
   
      printf("\nAno de lançamento : 1999\n");
      
    
   }
   
   if(strcmp(nome, "Psicose") == 0){
   
      printf("\nAno de lançamento : 1960\n");
      
    
   }
   
   if(strcmp(nome, "IT_A_Coisa") == 0){
   
      printf("\nAno de lançamento : 2017\n");
      
     
   }     
  
   if(strcmp(nome, "Minha_Mãe_é_Uma_Peça") == 0){
   
      printf("\nAno de lançamento : 2013\n");
      
     
   }  
   
   if(strcmp(nome, "Até_que_a_Sorte_nos_Separe") == 0){
   
      printf("\nAno de lançamento : 2012\n");
      
    
   }
   
   if(strcmp(nome, "Missão_Madrinha_de_Casamento") == 0){
   
       printf("\nAno de lançamento : 2011\n");
      
    
   }
   
   if(strcmp(nome, "As_Férias_de_Mr_Bean") == 0){
   
      printf("\nAno de lançamento : 2007\n");
      
     
   }
   
   if(strcmp(nome, "O_virgem_de_40_anos") == 0){
   
      printf("\nAno de lançamento : 2005\n");
      
    
   }      

      if(strcmp(nome, "Upgrade") == 0){
   
      printf("\nAno de lançamento : 2018\n");
      
    
   } 
  
  if(strcmp(nome, "O_Rei_Leão") == 0){
   
    printf("\nAno de lançamento : 1994\n");
     
   }  
  
  if(strcmp(nome, "Túmulo_dos_Vaga_Lumes") == 0){
   
    printf("\nAno de lançamento : 1989\n");
    
   }  
  
  if(strcmp(nome, "Divertidamente") == 0){
   
    printf("\nAno de lançamento : 2015\n");
    
   }  
  
  if(strcmp(nome, "Toy_Story") == 0){
   
     printf("\nAno de lançamento : 1995\n");
    
   
   }  
  
  if(strcmp(nome, "ParaNorman") == 0){
   
     printf("\nAno de lançamento : 2012\n");
    
   }  
  
  if(strcmp(nome, "Coraline") == 0){
   
      printf("\nAno de lançamento : 2009\n");
   
  }  
   
  
}


void estudio_filme(Lista2 *l, char nome[])
{

if(strcmp(nome, "Como_Eu_Era_Antes_de_Você") == 0){
   
      printf("\nDistribuição : Warner Bros.\n");
   
   }
   
    if(strcmp(nome, "A_Culpa_é_das_Estrelas") == 0){
   
      printf("\nDistribuição : 20th Century Fox.\n");
      
   }
   
   if(strcmp(nome, "Doze_Anos_de_Escravidão") == 0){
   
      printf("\nDistribuição : (Estados Unidos) Fox Searchlight Pictures, (Reino Unido) Entertainment One, (Mundial) Buena Vista International.\n");
      
   
   }
   
   if(strcmp(nome, "Sempre_ao_Seu_Lado") == 0){
   
      printf("\nDistribuição : (Estados Unidos) Stage 6 Films, (Brasil) Imagem Filmes.\n");
      
   
   }
   
   if(strcmp(nome, "À_Espera_de_um_Milagre") == 0){
   
      printf("\nDistribuição : Warner Bros.\n");
      
    
   }
 
   if(strcmp(nome, "Tenet") == 0){
   
      printf("\nDistribuição : Warner Bros. Pictures.\n");
      
   
   }
  
  if(strcmp(nome, "Mad_Max") == 0){
   
       printf("\nDistribuição : Village Roadshow Pictures.\n");
      
   
   }
  
  if(strcmp(nome, "Matrix") == 0){
   
      printf("\nDistribuição : Warner Bros.\n");
      
   
   }
  
  if(strcmp(nome, "A_Identidade_Bourne") == 0){
   
      printf("\nDistribuição : Universal Pictures.\n");
      
   
   }
  
  if(strcmp(nome, "Missão_Impossível_Fallout") == 0){
   
      printf("\nDistribuição : Paramount Pictures.\n");
      
     
   }   
   

  if(strcmp(nome, "PS_Eu_Te_Amo") == 0){
   
      printf("\nDistribuição : Warner Bros. Pictures (EUA), Momentum Pictures (Reino Unido).\n");
      
     
   }   
   
  if(strcmp(nome, "Simplesmente_Acontece") == 0){
   
      printf("\nDistribuição : Lionsgate.\n");
      
     
   }   
   

  if(strcmp(nome, "Cartas_para_Julieta") == 0){
   
      printf("\nDistribuição : Summit Entertainment.\n");
      
    
   }   
   

  if(strcmp(nome, "O_Guarda_Costas") == 0){
   
      printf("\nDistribuição : Warner Bros.\n");
      
     
   }


  if(strcmp(nome, "Meu_Primeiro_Amor") == 0){
   
      printf("\nDistribuição : Columbia Pictures.\n");
      
     
   }   

  if(strcmp(nome, "O_Exorcista") == 0){
   
      printf("\nDistribuição : Warner Bros. Pictures.\n");
      
     
   }
   
   if(strcmp(nome, "O_Massacre_da_Serra_Elétrica") == 0){
   
      printf("\nDistribuição : Bryanston Pictures.\n");
      
     
   }
   
   if(strcmp(nome, "O_Sexto_Sentido") == 0){
   
      printf("\nDistribuição : Buena Vista Pictures Distribution.\n");
      
    
   }
   
   if(strcmp(nome, "Psicose") == 0){
   
      printf("\nDistribuição : Paramount Pictures (lançamento original), Universal Pictures (direitos adquiridos em 1962).\n");
      
    
   }
   
   if(strcmp(nome, "IT_A_Coisa") == 0){
   
      printf("\nDistribuição : Warner Bros. Pictures.\n");
      
     
   }     
  
   if(strcmp(nome, "Minha_Mãe_é_Uma_Peça") == 0){
   
      printf("\nDistribuição : Downtown Filmes, Paris Filmes.\n");
      
     
   }  
   
   if(strcmp(nome, "Até_que_a_Sorte_nos_Separe") == 0){
   
      printf("\nDistribuição 	Paris Filmes, Downtown Filmes (co-distribuição).\n");
      
    
   }
   
   if(strcmp(nome, "Missão_Madrinha_de_Casamento") == 0){
   
       printf("\nDistribuição : Universal Pictures.\n");
      
    
   }
   
   if(strcmp(nome, "As_Férias_de_Mr_Bean") == 0){
   
      printf("\nDistribuição : Universal Pictures.\n");
      
     
   }
   
   if(strcmp(nome, "O_virgem_de_40_anos") == 0){
   
      printf("\nDistribuição : Universal Pictures.\n");
      
    
   }      

      if(strcmp(nome, "Upgrade") == 0){
   
      printf("\nDistribuição : Blumhouse, OTL Releasing.\n");
      
    
   } 
  
  if(strcmp(nome, "O_Rei_Leão") == 0){
   
    printf("\nDistribuição : Buena Vista Pictures.\n");
     
   }  
  
  if(strcmp(nome, "Túmulo_dos_Vaga_Lumes") == 0){
   
    printf("\nDistribuição : Toho.\n");
    
   }  
  
  if(strcmp(nome, "Divertidamente") == 0){
   
    printf("\nDistribuição : Walt Disney Studios Motion Pictures.\n");
    
   }  
  
  if(strcmp(nome, "Toy_Story") == 0){
   
     printf("\nDistribuição : Buena Vista Pictures Distribution.\n");
    
   
   }  
  
  if(strcmp(nome, "ParaNorman") == 0){
   
     printf("\nDistribuição : Focus Features.\n");
    
   }  
  
  if(strcmp(nome, "Coraline") == 0){
   
      printf("\nDistribuição : Focus Features.\n");
   
  }  
  
  
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
   
      printf("\nUm agente secreto embarca em uma missão perigosa para evitar o início da Terceira Guerra Mundial.\n");
   
   }
  
   if(strcmp(nome, "Upgrade") == 0){
   
      printf("\nNo futuro próximo, a tecnologia controla quase todos os aspectos da vida. Mas quando Gray, um tecnofóbico, tem seu mundo virado de cabeça para baixo, sua única esperança de vingança é um implante experimental de chips de computador chamado Stem.\n");
   
   }
  
  if(strcmp(nome, "Mad_Max") == 0){
   
      printf("\nEm um futuro distópico não muito distante, os recursos de óleo foram esgotados e o mundo está mergulhado em guerra, fome e caos financeiro. É quando o policial Mad Max, que não tem mais nada além de seus instintos de sobrevivência e retaliação, começa uma vingança contra a gangue que perseguiu e assassinou sua esposa e filhos.\n");
   
   }
  
  if(strcmp(nome, "Matrix") == 0){
   
      printf("\nEm um futuro próximo, Thomas Anderson (Keanu Reeves), um jovem programador de computador que mora em um cubículo escuro, é atormentado por estranhos pesadelos nos quais encontra-se conectado por cabos e contra sua vontade, em um imenso sistema de computadores do futuro. Em todas essas ocasiões, acorda gritando no exato momento em que os eletrodos estão para penetrar em seu cérebro. À medida que o sonho se repete, Anderson começa a ter dúvidas sobre a realidade. Por meio do encontro com os misteriosos Morpheus (Laurence Fishburne) e Trinity (Carrie-Anne Moss), Thomas descobre que é, assim como outras pessoas, vítima do Matrix, um sistema inteligente e artificial que manipula a mente das pessoas, criando a ilusão de um mundo real enquanto usa os cérebros e corpos dos indivíduos para produzir energia. Morpheus, entretanto, está convencido de que Thomas é Neo, o aguardado messias capaz de enfrentar o Matrix e conduzir as pessoas de volta à realidade e à liberdade.\n");
   
   }
  
  if(strcmp(nome, "A_Identidade_Bourne") == 0){
   
      printf("\nUm homem sem memória é resgatado do oceano por barco de pesca. Sobre si, ele só sabe que tem talento para matar e um chip implantado no quadril. Enquanto busca sua história, tenta escapar de pessoas que, inexplicavelmente, querem matá-lo.\n");
   
   }
  
  if(strcmp(nome, "Missão_Impossível_Fallout") == 0){
   
      printf("\nEm uma perigosa tarefa para recuperar plutônio roubado, Ethan Hunt opta por salvar sua equipe em vez de completar a missão. Com isso, armas nucleares caem nas mãos de agentes altamente qualificados e que pertencem a uma rede mortal que deseja destruir a civilização. Agora, com o mundo em risco, Ethan e sua equipe da IMF são forçados a aliar-se a um obstinado agente da CIA.\n");
   
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
  
   if(strcmp(nome, "Minha_Mãe_é_Uma_Peça") == 0){
   
      printf("\nDona Hermínia é uma mulher de meia idade, divorciada do marido, que a trocou por uma mais jovem. Hiperativa, ela não larga o pé de seus filhos Marcelina e Juliano, que já estão bem grandinhos. Um dia, após descobrir que eles a consideram uma chata, resolve sair de casa sem avisar ninguém, deixando todos, de alguma forma, preocupados com o que teria acontecido. Mal sabem eles que a mãe foi visitar a querida tia Zélia para desabafar suas tristezas do presente e recordar os bons tempos do passado.\n");
   
   }  
   
   if(strcmp(nome, "Até_que_a_Sorte_nos_Separe") == 0){
   
      printf("\nTino é um pai de família que tem sua rotina transformada ao ganhar na loteria. Em dez anos, o fanfarrão e sua mulher Jane gastam todo o dinheiro com uma vida de ostentação. Ao descobrir que está falido, ele é obrigado a aceitar a ajuda de Amauri, seu vizinho, um consultor financeiro nada divertido e extremamente econômico. Quando Jane engravida do terceiro filho, Tino faz de tudo para esconder da esposa que estão na lona, pois a recomendação médica é que a grávida evite fortes emoções.\n");
   
   }
   
   if(strcmp(nome, "Missão_Madrinha_de_Casamento") == 0){
   
      printf("\nLillian vai se casar e convida a amiga Annie para ser sua madrinha. Ela, que enfrenta problemas profissionais e amorosos, resolve se dedicar à função de corpo e alma. Só que, logo no primeiro evento organizado, Annie conhece Helen, uma bela e rica mulher que quer ser a nova melhor amiga de Lillian. As duas passam a disputar a proximidade da noiva, assim como o posto de organizadora do casamento e demais eventos pré-nupciais.\n");
   
   }
   
   if(strcmp(nome, "As_Férias_de_Mr_Bean") == 0){
   
      printf("\nQuando o clima úmido de Londres fica insuportável, Mr. Bean decide ir para a Riviera Francesa e divertir-se ao sol. Como sempre, seus planos não acontecem do jeito que queria. Ele é confundido duas vezes: com um sequestrador e com um renomado cineasta quando chega com o filho de um diretor e uma atriz principiante. Mr. Bean acaba no Festival de Cinema de Cannes.\n");
   
   }
   
   if(strcmp(nome, "O_virgem_de_40_anos") == 0){
   
      printf("\nAndy fica horrorizado quando seus colegas de trabalho descobrem que, aos 40 anos, ele ainda é virgem. Agora, seus amigos tentam ajudá-lo a encontrar uma garota e perder a sua virgindade.\n");
   
   }        

  if(strcmp(nome, "O_Rei_Leão") == 0){
   
      printf("\nEste desenho animado da Disney mostra as aventuras de um leão jovem de nome Simba, o herdeiro de seu pai, Mufasa. O tio malvado de Simba, Oscar, planeja roubar o trono de Mufasa atraindo pai e filho para uma emboscada. Simba consegue escapar e somente Mufasa morre. Com a ajuda de seus amigos,Timon e Pumba, ele reaparece como adulto para recuperar sua terra, que foi roubada por seu tio Oscar.\n");
   
   }  
  
  if(strcmp(nome, "Túmulo_dos_Vaga_Lumes") == 0){
   
      printf("\nDois irmãos japoneses tentam sobreviver, numa cabana abandonada, às agruras da Segunda Guerra Mundial. Fome, solidão e desesperança marcam a espera pelo retorno incerto do pai que está no front da batalha.\n");
   
   }  
  
  if(strcmp(nome, "Divertidamente") == 0){
   
      printf("\nCom a mudança para uma nova cidade, as emoções de Riley, que tem apenas 11 anos de idade, ficam extremamente agitadas. Uma confusão na sala de controle do seu cérebro deixa a Alegria e a Tristeza de fora, afetando a vida de Riley radicalmente.\n");
   
   }  
  
  if(strcmp(nome, "Toy_Story") == 0){
   
      printf("\nO aniversário do garoto Andy está chegando e seus brinquedos ficam nervosos, temendo que ele ganhe novos brinquedos que possam substituí-los. Liderados pelo caubói Woody, o brinquedo predileto de Andy, eles recebem Buzz Lightyear, o boneco de um patrulheiro espacial, que logo passa a receber mais atenção do garoto. Com ciúmes, Woody tenta ensiná-lo uma lição, mas Buzz cai pela janela. É o início da aventura do caubói, que precisa resgatar Buzz para limpar sua barra com os outros brinquedos.\n");
   
   }  
  
  if(strcmp(nome, "ParaNorman") == 0){
   
      printf("\nO jovem Norman Babcock consegue falar com os mortos e prefere conviver com eles a conviver com os vivos. Seu tio Prenderghast se comunica com ele para dizer que a maldição de uma bruxa centenária vai se realizar, e apenas Norman pode detê-la.\n");
   
   }  
  
  if(strcmp(nome, "Coraline") == 0){
   
      printf("\nEnquanto explora sua nova casa à noite, a pequena Coraline descobre uma porta secreta que contém um mundo parecido com o dela, porém melhor em muitas maneiras. Todos têm botões no lugar dos olhos, os pais são carinhosos e os sonhos de Coraline viram realidade por lá. Ela se encanta com essa descoberta, mas logo percebe que segredos estranhos estão em ação: uma outra mãe e o resto de sua família tentam mantê-la eternamente nesse mundo paralelo.\n");
   
   }  
   
}      

void ano_serie(Lista2 *l, char nome[])
{         
 
   if(strcmp(nome, "Sky_Rojo") == 0){
   
      printf("\nAnos de duração: 2021-Presente\n");
   
   }
   
    if(strcmp(nome, "Lupin") == 0){
   
      printf("\nAnos de duração: 2021-Presente\n");
      
   }
   
   if(strcmp(nome, "Sherlock") == 0){
   
      printf("\nAnos de duração: 2010-Presente\n");
     
   }
   
   if(strcmp(nome, "Peaky_Blinders") == 0){
   
      printf("\nAnos de duração: 2013-Presente\n");
     
   }
   
   if(strcmp(nome, "La_Casa_de_Papel") == 0){
   
      printf("\nAnos de duração: 2017-Presente\n");
     
   }

   if(strcmp(nome, "Elite") == 0){
   
      printf("\nAnos de duração: 2018-Presente\n");
     
   }
  
  if(strcmp(nome, "The_End_of_the_F***ing_World") == 0){
   
       printf("\nAnos de duração: 2017-2019\n");
     
   }
  
  if(strcmp(nome, "The_Witcher") == 0){
   
      printf("\nAnos de duração: 2019-Presente\n");
     
   }
  
  if(strcmp(nome, "Kingdom") == 0){
   
      printf("\nAnos de duração: 2014-2017\n");
     
   }
  
  if(strcmp(nome, "Sex_Education") == 0){
   
      printf("\nAnos de duração: 2019-Presente\n");
     
   }   
   

  if(strcmp(nome, "Jane_a_Virgem") == 0){
   
      printf("\nAnos de duração: 2014-2019\n");
     
   }   
   
  if(strcmp(nome, "Riverdale") == 0){
   
      printf("\nAnos de duração: 2017-Presente\n");
     
   }   
   

  if(strcmp(nome, "Virgin_River") == 0){
   
      printf("\nAnos de duração: 2019-Presente\n");
     
   }   
   

  if(strcmp(nome, "Os_Inocentes") == 0){
   
      printf("\nAnos de duração: 2018-2018\n");
     
   }


  if(strcmp(nome, "Bridgerton") == 0){
   
      printf("\nAnos de duração: 2020-Presente\n");
     
   }   

  if(strcmp(nome, "American_Horror_Story") == 0){
   
      printf("\nAnos de duração: 2011-Presente\n");
     
   }
   
   if(strcmp(nome, "Stranger_Things") == 0){
   
      printf("\nAnos de duração: 2016-Presente\n");
     
   }
   
   if(strcmp(nome, "O_Mundo_Sombrio_de_Sabrina") == 0){
   
      printf("\nAnos de duração: 2018-2020\n");
     
   }
   
   if(strcmp(nome, "A_Maldição_da_Mansão_Bly") == 0){
   
      printf("\nAnos de duração: 2020-2020\n");
     
   }
   
   if(strcmp(nome, "Bates_Motel") == 0){
   
      printf("\nAnos de duração: 2013-2017\n");
     
   }     

   if(strcmp(nome, "Friends") == 0){
   
      printf("\nAnos de duração: 1994-2004\n");
     
   }  
   
   if(strcmp(nome, "The_Big_Bang_Theory") == 0){
   
      printf("\nAnos de duração: 2007-2019\n");
     
   }
   
   if(strcmp(nome, "How_I_Met_Your_Mother") == 0){
   
      printf("\nAnos de duração: 2005-2014\n");
     
   }
   
   if(strcmp(nome, "Os_Simpsons") == 0){
   
      printf("\nAnos de duração: 1989-Presente\n");
     
   }
   
   if(strcmp(nome, "Todo_Mundo_Odeia_o_Chris") == 0){
   
      printf("\nAnos de duração: 2005-2009\n");
     
   }          
   

}

void temporadas_serie(Lista2 *l, char nome[])
{         
 
   if(strcmp(nome, "Sky_Rojo") == 0){
   
      printf("\nNúmero de temporadas : 1 temporada.");
      printf("\nNúmero de episódios : 8 episódios.\n");
   
   }
   
    if(strcmp(nome, "Lupin") == 0){
   
      printf("\nNúmero de temporadas : 1 temporada.");
      printf("\nNúmero de episódios : 5 episódios.\n");
      
   }
   
   if(strcmp(nome, "Sherlock") == 0){
   
      printf("\nNúmero de temporadas : 4 temporadas.");
      printf("\nNúmero de episódios : 13 episódios.\n");
     
   }
   
   if(strcmp(nome, "Peaky_Blinders") == 0){
   
      printf("\nNúmero de temporadas : 5 temporadas.");
      printf("\nNúmero de episódios : 30 episódios.\n");
     
   }
   
   if(strcmp(nome, "La_Casa_de_Papel") == 0){
   
      printf("\nNúmero de temporadas : 2 temporadas(4 partes).");
      printf("\nNúmero de episódios : 31 episódios.\n");
     
   }

   if(strcmp(nome, "Elite") == 0){
   
      printf("\nNúmero de temporadas : 3 temporadas.");
      printf("\nNúmero de episódios : 24 episódios.\n");
     
   }
  
  if(strcmp(nome, "The_End_of_the_F***ing_World") == 0){
   
      printf("\nNúmero de temporadas : 2 temporadas.");
      printf("\nNúmero de episódios : 16 episódios.\n");
     
   }
  
  if(strcmp(nome, "The_Witcher") == 0){
   
      printf("\nNúmero de temporadas : 1 temporada.");
      printf("\nNúmero de episódios : 8 episódios.\n");
     
   }
  
  if(strcmp(nome, "Kingdom") == 0){
   
      printf("\nNúmero de temporadas : 2 temporadas.");
      printf("\nNúmero de episódios : 12 episódios.\n");
     
   }
  
  if(strcmp(nome, "Sex_Education") == 0){
   
      printf("\nNúmero de temporadas : 2 temporadas.");
      printf("\nNúmero de episódios : 16 episódios.\n");
     
   }   
   

  if(strcmp(nome, "Jane_a_Virgem") == 0){
   
      printf("\nNúmero de temporadas : 5 temporadas.");
      printf("\nNúmero de episódios : 100 episódios.\n");
     
   }   
   
  if(strcmp(nome, "Riverdale") == 0){
   
      printf("\nNúmero de temporadas : 5 temporadas.");
      printf("\nNúmero de episódios : 86 episódios.\n");
     
   }   
   

  if(strcmp(nome, "Virgin_River") == 0){
   
      printf("\nNúmero de temporadas : 2 temporadas.");
      printf("\nNúmero de episódios : 20 episódios.\n");
     
   }   
   

  if(strcmp(nome, "Os_Inocentes") == 0){
   
      printf("\nNúmero de temporadas : 1 temporada.");
      printf("\nNúmero de episódios : 8 episódios.\n");
     
   }


  if(strcmp(nome, "Bridgerton") == 0){
   
      printf("\nNúmero de temporadas : 1 temporada.");
      printf("\nNúmero de episódios : 8 episódios.\n");
     
   }   

  if(strcmp(nome, "American_Horror_Story") == 0){
   
      printf("\nNúmero de temporadas : 9 temporadas.");
      printf("\nNúmero de episódios : 103 episódios.\n");
     
   }
   
   if(strcmp(nome, "Stranger_Things") == 0){
   
      printf("\nNúmero de temporadas : 3 temporadas.");
      printf("\nNúmero de episódios : 25 episódios.\n");
     
   }
   
   if(strcmp(nome, "O_Mundo_Sombrio_de_Sabrina") == 0){
   
      printf("\nNúmero de temporadas : 2 temporadas(4 partes).");
      printf("\nNúmero de episódios : 36 episódios.\n");
     
   }
   
   if(strcmp(nome, "A_Maldição_da_Mansão_Bly") == 0){
   
      printf("\nNúmero de temporadas : 1 temporada.");
      printf("\nNúmero de episódios : 9 episódios.\n");
     
   }
   
   if(strcmp(nome, "Bates_Motel") == 0){
   
      printf("\nNúmero de temporadas : 5 temporadas.");
      printf("\nNúmero de episódios : 50 episódios.\n");
     
   }     

   if(strcmp(nome, "Friends") == 0){
   
      printf("\nNúmero de temporadas : 10 temporadas.");
      printf("\nNúmero de episódios : 236 episódios.\n");
     
   }  
   
   if(strcmp(nome, "The_Big_Bang_Theory") == 0){
   
      printf("\nNúmero de temporadas : 12 temporadas.");
      printf("\nNúmero de episódios : 279 episódios.\n");
     
   }
   
   if(strcmp(nome, "How_I_Met_Your_Mother") == 0){
   
      printf("\nNúmero de temporadas : 9 temporadas.");
      printf("\nNúmero de episódios : 208 episódios.\n");
     
   }
   
   if(strcmp(nome, "Os_Simpsons") == 0){
   
      printf("\nNúmero de temporadas : 32 temporadas.");
      printf("\nNúmero de episódios : 705 episódios.\n");
     
   }
   
   if(strcmp(nome, "Todo_Mundo_Odeia_o_Chris") == 0){
   
      printf("\nNúmero de temporadas : 4 temporadas.");
      printf("\nNúmero de episódios : 88 episódios.\n");
     
   }          


}
void sinopse_serie(Lista2 *l, char nome[])
{         
 
   if(strcmp(nome, "Sky_Rojo") == 0){
   
      printf("\nSky Rojo conta a história de três mulheres que trabalhavam em um clube de strip-tease como prostitutas, chamado Las Novias Club. Após uma delas atacar o cafetão como forma de defesa e achar que ele está morto, elas precisam fugir para que seus capangas não tentem vingar pelo que aconteceu com o chefe.\n");
   
   }
   
    if(strcmp(nome, "Lupin") == 0){
   
      printf("\nBaseada nos romances policiais de Maurice Leblanc, Lupin acompanha Assane Diop (Omar Sy), um homem que, 25 anos atrás, viu sua vida virar de cabeça para baixo com a morte de seu pai, então acusado injustamente de um crime.\n");
   
   }
   
   if(strcmp(nome, "Sherlock") == 0){
   
      printf("\nSherlock mostra a história do detetive Sherlock Holmes (Benedict Cumberbatch) resolvendo vários mistérios na Londres contemporânea. Holmes é ajudado pelo seu amigo Dr. John Watson, um médico que retorna à Inglaterra depois de servir como médico no exército britânico na Guerra do Afeganistão.\n");
   
   }
   
   if(strcmp(nome, "Peaky_Blinders") == 0){
   
      printf("\nOs Peaky Blinders são uma organização criminosa de origem cigana que se passa na cidade de Birmingham, Inglaterra, em 1919, formada vários meses após o final da Primeira Guerra Mundial (1914–1918). A história é centrada na ambição do líder da gangue inglesa, Thomas (Tommy) Shelby (Cillian Murphy).\n");
   
   }
   
   if(strcmp(nome, "La_Casa_de_Papel") == 0){
   
      printf("\nEm La Casa de Papel da Netflix, nove habilidosos ladrões (Nairóbi, Berlim, Tókyo, Rio, Helsinki, Oslo, Professor, Denver e Moscou) se trancam na Casa da Moeda da Espanha com o ambicioso plano de realizar o maior roubo da história. Para isso, a gangue precisa lidar com as dezenas de pessoas que manteve como refém, além dos agentes da força de elite da polícia, que farão de tudo para que a investida dos criminosos fracasse.\n");
   
   }

   if(strcmp(nome, "Elite") == 0){
   
      printf("\nEm Elite, depois de um problema na escola que frequentam, três alunos do ensino público são transferidos para Las Encinas, a melhor e mais exclusiva escola na Espanha, onde os filhos da elite estudam. O choque entre os menos favorecidos e aqueles que têm tudo culmina em um assassinato.\n");
   
   }
  
  if(strcmp(nome, "The_End_of_the_F***ing_World") == 0){
   
      printf("\nThe End of the F***ing World. Nesta série de humor negro baseada numa banda desenhada, um adolescente psicopata e uma rebelde sedenta por aventuras embarcam numa viagem que tem tudo para correr mal. Veja tudo o que quiser. Com Alex Lawther (Black Mirror) e Jessica Barden (Penny Dreadful).\n");
   
   }
  
  if(strcmp(nome, "The_Witcher") == 0){
   
      printf("\nGeralt de Rívia, um mutante caçador de monstros, sai em busca de seu destino em um mundo turbulento, onde as pessoas podem ser mais perversas que as criaturas selvagens.\n");
   
   }
  
  if(strcmp(nome, "Kingdom") == 0){
   
      printf("\nA série é definida na época da Dinastia Joseon (1392-1897). Conta a história de um príncipe herdeiro que é enviado numa missão suicida para investigar uma misteriosa praga que tem assolado o país. A verdade ameaça o reino, quando se descobre um misterioso surto de zumbis.\n");
   
   }
  
  if(strcmp(nome, "Sex_Education") == 0){
   
      printf("\nO inseguro Otis manja tudo quando o negócio é aconselhamento sexual, graças à sua mãe sexóloga. E aí a rebelde Maeve propõe criar uma clínica de terapia sexual na escola.\n");
   
   }   
   

  if(strcmp(nome, "Jane_a_Virgem") == 0){
   
      printf("\nGina Rodriguez interpreta Jane Gloriana Villanueva, uma jovem de 23 anos religiosa e latina que engravida após ser inseminada artificialmente por um erro médico, ao mesmo tempo que namora outro homem, o detetive Michael.\n");
   
   }   
   
  if(strcmp(nome, "Riverdale") == 0){
   
      printf("\nRiverdale é uma série norte-americana de drama e mistério, baseada nos personagens da Archie Comics. ... A série começa com a morte de um rico garoto chamado Jason Blossom, dando início a uma investigação que mexe com toda a cidade. Archie Andrews descobre seu amor pela música e pela professora.\n");
   
   }   
   

  if(strcmp(nome, "Virgin_River") == 0){
   
      printf("\nMel é uma enfermeira especializada em partos que se muda para uma pequena cidade chamada Virgin River, no norte da Califórnia, para recomeçar a sua vida, deixando tudo para trás em Los Angeles. ... A série começa com Mel chegando em Virgin River, mas enfrentando alguns problemas com o seu carro.\n");
   
   }   
   

  if(strcmp(nome, "Os_Inocentes") == 0){
   
      printf("\nDois adolescentes apaixonados abandonam suas famílias problemáticas para viverem esse amor. No entanto, essa romântica aventura logo se transforma em uma jornada de autodescobrimento, mas longe do que os jovens imaginavam.\n");
   
   }


  if(strcmp(nome, "Bridgerton") == 0){
   
      printf("\nDaphne Bridgerton (Phoebe Dynevor), a filha mais velha do respeitado clã, se encontra à procura de um marido adequado. Como seus pais, ela gostaria de se casar por amor, mas o irmão mais velho atrapalha seus planos e torna ainda mais difícil sua busca.\n");
   
   }   

  if(strcmp(nome, "American_Horror_Story") == 0){
   
      printf("\nBaseada na lenda de Roanoke, narra a história do casal Shelby (Sarah Paulson / Lily Rabe) e Matt (Cuba Goodin Jr / André Holland), que se muda para uma casa no campo em Roanoke, Virginia, e descobrem uma série de acontecimentos estranhos nos arredores da residência.\n");
   
   }
   
   if(strcmp(nome, "Stranger_Things") == 0){
   
      printf("\n Em 6 de Novembro, 1983 na pequena cidade de Hawkins, Indiana, o garoto de 12 anos, Will Byers desaparece misteriosamente. A mãe de Will, Joyce, torna-se frenética e tenta encontrar Will enquanto o chefe de polícia Jim Hopper começa a investigar, e assim fazem também os amigos de Will: Dustin, Mike e Lucas.\n");
   
   }
   
   if(strcmp(nome, "O_Mundo_Sombrio_de_Sabrina") == 0){
   
      printf("\nA trama acompanha a vida de Sabrina Spellman (Kiernan Shipka), uma adolescente que é metade bruxa e metade humana, que só queria viver uma vida normal. No entanto, desde o seu nascimento, ela tem deveres a cumprir com a escuridão e não consegue fugir disso.\n");
   
   }
   
   if(strcmp(nome, "A_Maldição_da_Mansão_Bly") == 0){
   
      printf("\nEm A Maldição da Mansão Bly, a jovem Dani Clayton (Victoria Pedretti) é contratada por Henry Wingrave (Henry Thomas) para trabalhar numa enorme e antiga mansão, cuidando de seus dois sobrinhos órfãos.\n");
   
   }
   
   if(strcmp(nome, "Bates_Motel") == 0){
   
      printf("\nApós a misteriosa morte de seu marido, Norma Bates decidiu começar uma nova vida longe do Arizona, na pequena cidade de White Pine Bay, em Oregon, e leva o filho Norman, de 17 anos, com ela. Ela compra um velho motel abandonado e a mansão ao lado.\n");
   
   }     

   if(strcmp(nome, "Friends") == 0){
   
      printf("\nRoss, Rachel, Mônica, Chandler, Joey e Phoebe formam um grupo de seis amigos que lutam para se sobressair e progredir na competitiva vida de Manhattan. ... Seu humor inteligente e apoio mútuo incondicional fazem com sua amizade seja cada vez mais forte, superando assim todos os obstáculos que a vida lhes apresenta.\n");
   
   }  
   
   if(strcmp(nome, "The_Big_Bang_Theory") == 0){
   
      printf("\nDois jovens gênios da física, Leonard (Johnny Galecki) e Sheldon Cooper (Jim Parsons), dividem um apartamento e são surpreendidos ao descobrir que a vizinha, Penny (Kaley Cuoco), é uma loira não tão inteligente. Leonard acredita que pode conquistar a jovem.\n");
   
   }
   
   if(strcmp(nome, "How_I_Met_Your_Mother") == 0){
   
      printf("\nEm 2030, o arquiteto Ted Mosby (Josh Radnor) conta a história sobre como conheceu a mãe dos seus filhos. Ele volta no tempo para 2005, relembrando suas aventuras amorosas em Nova York e a busca pela mulher dos seus sonhos. Ao longo do anos, Ted aproveita para falar a jornada dos seus amigos: o advogado Marshall Eriksen (Jason Segel), a professora Lily Aldrin (Alyson Hannigan), a jornalista Robin Scherbatsky (Cobie Smulders) e o mulherengo convicto Barney Stinson (Neil Patrick Harris).\n");
   
   }
   
   if(strcmp(nome, "Os_Simpsons") == 0){
   
      printf("\nThe Simpsons é uma série animada norte americana transmitida pelo canal FOX. A comédia acompanha a família Simpsons, uma família da classe trabalhadora na cidade desajustada de Springfield. Homer, o pai, trabalha como inspetor de segurança na usina nuclear local; Marge, a mãe, tenta manter a paz na família.\n");
   
   }
   
   if(strcmp(nome, "Todo_Mundo_Odeia_o_Chris") == 0){
   
      printf("\nA série conta a história da família Rock entre os anos de 1982 até 1987, com o foco no menino Chris (Tyler James Williams). Em 1982, Chris completa 13 anos e muda-se com a sua família para Bedford-Stuyvesant, no Brooklyn. Lá, Chris vive situações corriqueiras da vida de um adolescente, tanto nas histórias que realmente acontecem quanto nos pensamentos que são expostos de uma forma humorística. Chris vive com os pais Julius (Terry Crews) e Rochelle (Tichina Arnold), e com os dois irmãos Drew (Tequan Richmond) e Tonya (Imani Hakim). Ele estuda no Corleone Junior High School, colégio onde Chris é o único aluno negro, situação que o vitimiza durante todo seu tempo lá. Mas ele faz um amigo, Greg (Vicent Martella), que vai estar sempre junto de Chris, passando por suas situações tragicamente cômicas.\n");
   
   }         
    

}

void ano_livro(Lista2 *l, char nome[])
{

    if(strcmp(nome, "O_diário_de_Anne_Frank") == 0){
   
      printf("\nAno de Publicação : 1947\n");
      
   }
   
    if(strcmp(nome, "O_menino_do_pijama_listrado") == 0){
   
      printf("\nAno de Publicação : 2006\n");
    
   }
   
   if(strcmp(nome, "Capitães_da_areia") == 0){
   
      printf("\nAno de Publicação : 1937\n");
    
   }
   
   if(strcmp(nome, "A_menina_que_roubava_livros") == 0){
   
      printf("\nAno de Publicação : 2005\n");
    
   }
   
   if(strcmp(nome, "A_cidade_do_Sol") == 0){
   
      printf("\nAno de Publicação : 2007\n");
    
   }

   if(strcmp(nome, "As_Crônicas_de_Nárnia") == 0){
   
      printf("\nAno de Publicação : 1950-1956\n");
    
   }
  
  if(strcmp(nome, "O_Hobbit") == 0){
   
      printf("\nAno de Publicação : 1937\n");
    
   }
  
  if(strcmp(nome, "O_Instituto") == 0){
   
      printf("\nAno de Publicação : 2019\n");
    
   }
  
  if(strcmp(nome, "Uma_Dobra_no_Tempo") == 0){
   
      printf("\nAno de Publicação : 1962\n");
    
   }
  
  if(strcmp(nome, "Viagem_ao_Centro_da_Terra") == 0){
   
      printf("\nAno de Publicação : 1864\n");
    
   }   

  if(strcmp(nome, "Me_Chame_pelo_Seu_Nome") == 0){
   
      printf("\nAno de Publicação : 2007\n");
    
   }   
   
  if(strcmp(nome, "O_Visconde_que_me_Amava") == 0){
   
      printf("\nAno de Publicação : 2000\n");
    
   }   
   

  if(strcmp(nome, "Eleanor_&_Park") == 0){
   
      printf("\nAno de Publicação : 2012\n");
    
   }   
   

  if(strcmp(nome, "O_Diário_de_Suzana_para_Nicolas") == 0){
   
      printf("\nAno de Publicação : 2001\n");
    
   }


  if(strcmp(nome, "Simplesmente_Acontece") == 0){
   
      printf("\nAno de Publicação : 2014\n");
    
   }   

  if(strcmp(nome, "O_Desfiladeiro_do_Medo") == 0){
   
      printf("\nAno de Publicação : 2001\n");
    
   }
   
   if(strcmp(nome, "As_Ruínas") == 0){
   
      printf("\nAno de Publicação : 2007\n");
    
   }
   
   if(strcmp(nome, "A_Profecia") == 0){
   
      printf("\nAno de Publicação : 1976\n");
    
   }
   
   if(strcmp(nome, "O_Exorcista") == 0){
   
      printf("\nAno de Publicação : 1971\n");
    
   }
   
   if(strcmp(nome, "A_Coisa") == 0){
   
      printf("\nAno de Publicação : 2014\n");
    
   }       

   if(strcmp(nome, "Azul_da_Cor_do_Mar") == 0){
   
      printf("\nAno de Publicação : 2014\n");
    
   }
   
   if(strcmp(nome, "Cadê_Você_Bernadette?") == 0){
   
      printf("\nAno de Publicação : 2012\n");
    
   }
   
   if(strcmp(nome, "Galvez_Imperador_do_Acre") == 0){
   
      printf("\nAno de Publicação : 1976\n");
    
   }
   
   if(strcmp(nome, "A_louca_dos_gatos") == 0){
   
      printf("\nAno de Publicação : 2018\n");
    
   } 
   
   if(strcmp(nome, "Cães_e_gatos") == 0){
   
      printf("\nAno de Publicação : 2019\n");
    
   }
  
     if(strcmp(nome, "Harry_Potter") == 0){
   
      printf("\nAno de Publicação : 1997-2007\n");
    
   }
  
     if(strcmp(nome, "Percy_Jackson") == 0){
   
      printf("\nAno de Publicação : 2005-2009\n");
    
   }
   
 
}


void autor_livro(Lista2 *l, char nome[])
{

    if(strcmp(nome, "O_diário_de_Anne_Frank") == 0){
   
      printf("\nAutora : Anne Frank.\n");
      
   }
   
    if(strcmp(nome, "O_menino_do_pijama_listrado") == 0){
   
      printf("\nAutor : John Boyne.\n");
    
   }
   
   if(strcmp(nome, "Capitães_da_areia") == 0){
   
      printf("\nAutor : Jorge Amado.\n");
    
   }
   
   if(strcmp(nome, "A_menina_que_roubava_livros") == 0){
   
      printf("\nAutor : Markus Zusak.\n");
    
   }
   
   if(strcmp(nome, "A_cidade_do_Sol") == 0){
   
      printf("\nAutor : Khaled Hosseini.\n");
    
   }

   if(strcmp(nome, "As_Crônicas_de_Nárnia") == 0){
   
      printf("\nAutor : C. S. Lewis.\n");
    
   }
  
  if(strcmp(nome, "O_Hobbit") == 0){
   
      printf("\nAutor : J. R. R. Tolkien.\n");
    
   }
  
  if(strcmp(nome, "O_Instituto") == 0){
   
      printf("\nAutor : Stephen King.\n");
    
   }
  
  if(strcmp(nome, "Uma_Dobra_no_Tempo") == 0){
   
      printf("\nAutora : Madeleine L'Engle.\n");
    
   }
  
  if(strcmp(nome, "Viagem_ao_Centro_da_Terra") == 0){
   
      printf("\nAutor : Júlio Verne.\n");
    
   }   

  if(strcmp(nome, "Me_Chame_pelo_Seu_Nome") == 0){
   
      printf("\nAutor : André Aciman.\n");
    
   }   
   
  if(strcmp(nome, "O_Visconde_que_me_Amava") == 0){
   
      printf("\nAutora : Julia Quinn.\n");
    
   }   
   

  if(strcmp(nome, "Eleanor_&_Park") == 0){
   
      printf("\nAutora : Rainbow Rowell.\n");
    
   }   
   

  if(strcmp(nome, "O_Diário_de_Suzana_para_Nicolas") == 0){
   
      printf("\nAutor : James Patterson.\n");
   }


  if(strcmp(nome, "Simplesmente_Acontece") == 0){
  
      printf("\nAutora : Cecelia Ahern.\n");
    
   }   

  if(strcmp(nome, "O_Desfiladeiro_do_Medo") == 0){
   
      printf("\nAutor : Clive Barker.\n");
    
   }
   
   if(strcmp(nome, "As_Ruínas") == 0){
   
      printf("\nAutores : Scott Smith, Fernanda Abreu.\n");;
    
   }
   
   if(strcmp(nome, "A_Profecia") == 0){
   
      printf("\nAutor : David Seltzer.\n");
    
   }
   
   if(strcmp(nome, "O_Exorcista") == 0){
   
      printf("\nAutor : William Peter Blatty.\n");
    
   }
   
   if(strcmp(nome, "A_Coisa") == 0){
   
      printf("\nAutor : Stephen King.\n");
    
   }       

   if(strcmp(nome, "Azul_da_Cor_do_Mar") == 0){
   
      printf("\nAutora : Marina Carvalho Oliveira Carvalho.\n");
    
   }
   
   if(strcmp(nome, "Cadê_Você_Bernadette?") == 0){
   
      printf("\nAutora : Maria Semple.\n");
    
   }
   
   if(strcmp(nome, "Galvez_Imperador_do_Acre") == 0){
   
      printf("\nAutor : Márcio Souza.\n");
    
   }
   
   if(strcmp(nome, "A_louca_dos_gatos") == 0){
   
      printf("\nAutora : Sarah Andersen.\n");
    
   } 
   
   if(strcmp(nome, "Cães_e_gatos") == 0){
   
      printf("\nAutor : Carlos Ruas.\n");
    
   }
  
     if(strcmp(nome, "Harry_Potter") == 0){
   
      printf("\nAutor : J. K. Rowling.\n");
    
   }
  
     if(strcmp(nome, "Percy_Jackson") == 0){
   
      printf("\nAutor : Rick Riordan.\n");
    
   }
   

}


void sinopse_livro(Lista2 *l, char nome[])
{

    if(strcmp(nome, "O_diário_de_Anne_Frank") == 0){
   
      printf("\nNa Holanda ocupada pelos nazistas na Segunda Guerra Mundial, o comerciante Kraler abriga duas famílias de judeus em seu sótão. A jovem Anne Frank mantém um diário da vida cotidiana dos Franks e dos Van Daans, narrando a ameaça nazista bem como a dinâmica familiar. Um romance com Peter Van Daan causa ciúmes entre Anne e sua irmã, Margot. Anos depois de as duas famílias terem sido capturadas, Otto Frank volta ao sótão e acha o diário de sua filha.\n");
   
   }
   
    if(strcmp(nome, "O_menino_do_pijama_listrado") == 0){
   
      printf("\nDurante a Segunda Guerra Mundial, Bruno, um garoto de oito anos, e sua família saem de Berlim para residir próximo a um campo de concentração, onde seu pai acaba de se tornar comandante. Infeliz e solitário, ele vagueia fora de sua casa e certo dia encontra Shmuel, um menino judeu de sua idade. Embora a cerca de arame farpado do campo os separem, os meninos começam uma amizade proibida.\n");
   
   }
     
     if(strcmp(nome, "Harry_Potter") == 0){
   
      printf("\nA série narra as aventuras de um jovem chamado Harry James Potter, que descobre aos 11 anos de idade que é um bruxo ao ser convidado para estudar na Escola de Magia e Bruxaria de Hogwarts.\n");
   
   }
  
     if(strcmp(nome, "Percy_Jackson") == 0){
   
      printf("\nA série narra as aventuras de Percy Jackson, um jovem que enfrenta problemas na escola, devido ao que acredita ser dislexia e déficit de atenção. ... Após ser atacado em plena excursão escolar, é revelado a Percy que ele é um semideus, ou seja, filho do deus Poseidon com uma humana, e possui poderes.\n");
   
   }
  
   if(strcmp(nome, "Capitães_da_areia") == 0){
   
      printf("\nPedro Bala, Professor, Gato, Sem Pernas e Boa Vida são adolescentes abandonados por suas famílias, que crescem nas ruas de Salvador e vivem em comunidade no Trapiche. Eles praticam uma série de assaltos e são constantemente perseguidos pela polícia. Um dia, Professor conhece Dora e seu irmão Zé Fuinha e os leva até o Trapiche, o que desencadeia a excitação dos demais garotos, que não estão acostumados à presença de uma mulher no local. Aos poucos, nasce o afeto entre o líder do grupo e a jovem.\n");
   
   }
   
   if(strcmp(nome, "A_menina_que_roubava_livros") == 0){
   
      printf("\nDurante a Segunda Guerra Mundial, uma jovem garota chamada Liesel Meminger sobrevive fora de Munique lendo os livros que ela rouba. Ajudada por seu pai adotivo, ela aprende a ler e partilhar livros com seus amigos, incluindo um judeu que vive na clandestinidade em sua casa. Enquanto não está lendo ou estudando, ela faz algumas tarefas para a mãe e brinca com o amigo Rudy.\n");
   
   }
   
   if(strcmp(nome, "A_cidade_do_Sol") == 0){
   
      printf("\nMariam tem 33 anos. Sua mãe morreu quando ela tinha 15 anos e Jalil, o homem que deveria ser seu pai, a deu em casamento a Rasheed, um sapateiro de 45 anos. ... Ela vai à escola todos os dias, é considerada uma das melhores alunas do colégio e sempre soube que seu destino era muito maior do que casar e ter filhos.\n");
   
   }

   if(strcmp(nome, "As_Crônicas_de_Nárnia") == 0){
   
      printf("\nDurante os bombardeios da Segunda Guerra Mundial de Londres, quatro irmãos ingleses são enviados para uma casa de campo onde eles estarão seguros. Um dia, Lucy encontra um guarda-roupa que a transporta para um mundo mágico chamado Nárnia. Depois de voltar, ela logo volta a Nárnia com seus irmãos, Peter e Edmund, e sua irmã, Susan. Lá eles se juntam ao leão mágico, Aslan, na luta contra a Feiticeira Branca.\n");
   
   }
  
  if(strcmp(nome, "O_Hobbit") == 0){
   
      printf("\nComo a maioria dos hobbits, Bilbo Bolseiro leva uma vida tranquila até o dia em que recebe uma missão do mago Gandalf. Acompanhado por um grupo de anões, ele parte numa jornada até a Montanha Solitária para libertar o Reino de Erebor do dragão Smaug.\n");
   
   }
  
  if(strcmp(nome, "O_Instituto") == 0){
   
      printf("\nUma garota está sofrendo por conta da morte inesperada de seus pais e voluntariamente dá entrada no Instituto Rosewood, onde é submetida a experimentos bizarros e pseudocientíficos de modificação de personalidade e de lavagem cerebral.\n");
   
   }
  
  if(strcmp(nome, "Uma_Dobra_no_Tempo") == 0){
   
      printf("\nMeg Murry e seu irmãozinho, Charles Wallace, ficaram sem o seu pai cientista, o senhor Murry, há cinco anos, desde que ele descobriu um novo planeta e usou o conceito conhecido como tesseract para viajar para lá. Aliado do colega de classe de Meg, Calvin O'Keefe, e guiado pelos três misteriosos viajantes astrais conhecidos como sra. Whatsit, sra. Who e mrs. Which, as crianças iniciam uma perigosa jornada para um planeta que possui todo o mal no universo.\n");
   
   }
  
  if(strcmp(nome, "Viagem_ao_Centro_da_Terra") == 0){
   
      printf("\nDurante uma expedição na Islândia, o professor Trevor Anderson, o seu sobrinho Sean, e sua guia Hannah ficam presos em uma caverna. Enquanto seguem sua rota de fuga mais abaixo da superfície da Terra, eles passam por lugares estranhos e encontram criaturas incríveis, incluindo dinossauros. Porém, como a atividade vulcânica à sua volta aumenta, eles percebem que precisam encontrar o caminho para fora rapidamente.\n");
   
   }   

  if(strcmp(nome, "Me_Chame_pelo_Seu_Nome") == 0){
   
      printf("\nO jovem Elio está enfrentando outro verão preguiçoso na casa de seus pais na bela e lânguida paisagem italiana. Mas tudo muda com a chegada de Oliver, um acadêmico que veio ajudar a pesquisa de seu pai.\n");
   
   }   
   
  if(strcmp(nome, "O_Visconde_que_me_Amava") == 0){
   
      printf("\nAo que tudo indica, o solteiro mais cobiçado do ano será Anthony Bridgerton, um visconde charmoso, elegante e muito rico que, contrariando as probabilidades, resolve dar um basta na rotina de libertino e arranjar uma noiva. Logo ele decide que Edwina Sheffield, a debutante mais linda da estação, é a candidata ideal.\n");
   
   }   
   

  if(strcmp(nome, "Eleanor_&_Park") == 0){
   
      printf("\nEleanor é nova na cidade. Com roupas inusitadas, cachos ruivos indomáveis e uma família problemática, ela sente que nunca vai conseguir se encaixar. Park senta sozinho no ônibus da escola. Sempre de camiseta preta, fones de ouvido e a cabeça enfiada num livro, acha que consegue passar despercebido.\n");
   
   }   
   

  if(strcmp(nome, "O_Diário_de_Suzana_para_Nicolas") == 0){
   
      printf("\nAo folhear aquelas páginas, Katie logo descobre que Suzana é uma jovem médica que, depois de sofrer um infarto, decidiu deixar para trás a correria de Boston e se mudar para um chalé na pacata ilha de Martha's Vineyard. ... O diário de Suzana para Nicolas é uma história de amor que se constrói ao virar de cada página.\n");
   
   }


  if(strcmp(nome, "Simplesmente_Acontece") == 0){
   
      printf("\nAlex e Rosie são amigos inseparáveis que cresceram juntos em Londres, compartilhando entre si suas melhores experiências. Tudo muda quando Alex ganha uma bolsa de estudos e passa a morar nos EUA. Separados, seus caminhos agora são outros. Mas nos tempos de hoje é impossível não se conectar. E, em se tratando de amor, o difícil é fazer as escolhas certas.\n");
   
   }   

  if(strcmp(nome, "O_Desfiladeiro_do_Medo") == 0){
   
      printf("\nApós uma cirurgia malfeita, Todd precisa de um lugar onde possa esconder-se durante algum tempo, enquanto as cicatrizes desaparecem. Querendo ser momentaneamente esquecido instala-se em uma mansão no Coldheart Canyon, um recanto da cidade tão secreto, que sequer consta nos mapas.\n");
   
   }
   
   if(strcmp(nome, "As_Ruínas") == 0){
   
      printf("\n Amy, Stacy, Jeff e Eric procuram por diversão no México, mas o que eles encontram é muito mais do que esperavam. Eles descobrem uma entidade maldita em uma região arqueológica na selva do país. Vinhas carnívoras tentam seduzir os amigos em seus tentáculos, forçando o grupo a lutar pela sobrevivência.\n");
   
   }
   
   if(strcmp(nome, "A_Profecia") == 0){
   
      printf("\nO embaixador americano e a esposa querem muito ter filhos. Quando ela dá à luz um bebê morto e um padre sugere que adotem um recém-nascido saudável e órfão, ele aceita sem contar à mulher. O que ele não sabe é que o bebê é o anticristo.\n");
   
   }
   
   if(strcmp(nome, "O_Exorcista") == 0){
   
      printf("\nUma atriz vai gradativamente tomando consciência de que a sua filha de doze anos está tendo um comportamento completamente assustador. Deste modo, ela pede ajuda a um padre, que também é um psiquiatra, e este chega a conclusão de que a garota está possuída pelo demônio. Ele solicita então a ajuda de um segundo sacerdote, especialista em exorcismo, para tentar livrar a menina desta terrível possessão.\n");
   
   }
   
   if(strcmp(nome, "A_Coisa") == 0){
   
      printf("\nUm grupo de crianças se une para investigar o misterioso desaparecimento de vários jovens em sua cidade. Eles descobrem que o culpado é Pennywise, um palhaço cruel que se alimenta de seus medos e cuja violência teve origem há vários séculos.\n");
   
   }       

   if(strcmp(nome, "Azul_da_Cor_do_Mar") == 0){
   
      printf("\nEla quer ser jornalista, e seu sonho está se concretizando: Rafaela Vilas Boas (um nome tão imponente para alguém tão desajeitado) conseguiu um estágio no melhor jornal de Minas Gerais. ... O jornal é mesmo incrível, mas seu colega de trabalho, Bernardo, não é a pessoa mais simpática do mundo.\n");
   
   }
   
   if(strcmp(nome, "Cadê_Você_Bernadette?") == 0){
   
      printf("\nA vida de Bernadette começa a parecer sem rumo, e ela resolve fugir da sua zona de conforto e desaparecer misteriosamente, deixando tudo para trás. Agora, Bee, sua filha, precisa juntar todas as pistas para descobrir onde foi parar essa mulher que imaginava conhecer tão bem, mas que se transformou em um verdadeiro ponto de interrogação.\n");
   
   }
   
   if(strcmp(nome, "Galvez_Imperador_do_Acre") == 0){
   
      printf("\nTrata-se de um folhetim histórico-farsesco baseado na vida de Luis Gálvez Rodríguez de Arias (1864-1935), aventureiro espanhol que se envolveu com as disputas em torno da posse do território do Acre, no final do século XIX. \n");
   
   }
   
   if(strcmp(nome, "A_louca_dos_gatos") == 0){
   
      printf("\nOs quadrinhos de Sarah Andersen são para todos que precisam lidar com níveis de ansiedade cada vez mais alarmantes, que sentem que o mundo está à beira do colapso e que se esforçam para sair ao menos um centimetrozinho da zona de conforto. Ou seja, é basicamente um manual de sobrevivência para os dias de hoje.\n");
   
   } 
   
   if(strcmp(nome, "Cães_e_gatos") == 0){
   
      printf("\nA felicidade para um cão é um rabo abanando, já para um gato, não. É o gato que tem que abanar o rabo para demonstrar felicidade para o cão ou o cão que tem que entender que o gato demonstra afeto de outras formas? Cães e gatos lida com as diferenças.\n");
   }
   

}
  

void ano_jogo(Lista2 *l, char nome[])
{

    if(strcmp(nome, "Katana_Zero") == 0){
   
      printf("\nAno de lançamento : 2019\n");
   
   }
   
    if(strcmp(nome, "Celeste") == 0){
   
      printf("\nAno de lançamento : 2018\n");
   
   }
   
   if(strcmp(nome, "Little_Nightmares") == 0){
   
      printf("\nAno de lançamento : 2017\n");
   
   }
   
   if(strcmp(nome, "Ori_and_the_Blind_Forest") == 0){
   
      printf("\nAno de lançamento : 2015\n");
   
   }
   
   if(strcmp(nome, "Hollow_Knight") == 0){
   
      printf("\nAno de lançamento : 2017\n");
   
   }

   if(strcmp(nome, "Assassin’s_Creed_II") == 0){
   
      printf("\nAno de lançamento : 2009\n");
   
   }
  
  if(strcmp(nome, "Red_Dead_Redemption_2") == 0){
   
      printf("\nAno de lançamento : 2018\n");
   
   }
  
  if(strcmp(nome, "Tomb_Raider") == 0){
   
      printf("\nAno de lançamento : 2013\n");
   
   }
  
  if(strcmp(nome, "The_Last_of_Us") == 0){
   
      printf("\nAno de lançamento : 2013\n");
   
   }
  
  if(strcmp(nome, "Grand_Theft_Auto_V") == 0){
   
      printf("\nAno de lançamento : 2013\n");
   
   }   
   

  if(strcmp(nome, "FIFA_20") == 0){
   
      printf("\nAno de lançamento : 2019\n");
   
   }   
   
  if(strcmp(nome, "PES_2020") == 0){
   
      printf("\nAno de lançamento : 2019\n");
   
   }   
   

  if(strcmp(nome, "Crash_Team_Racing_Nitro_Fueled") == 0){
    
      printf("\nAno de lançamento : 2019\n");
   
   }   
   

  if(strcmp(nome, "Need_For_Speed_Heat") == 0){
   
      printf("\nAno de lançamento : 2019\n");
   
   }


  if(strcmp(nome, "UFC_3") == 0){
   
      printf("\nAno de lançamento : 2018\n");
   
   }   

  if(strcmp(nome, "Alien:_Isolation") == 0){
   
      printf("\nAno de lançamento : 2014\n");
   
   }
   
   if(strcmp(nome, "Outlast") == 0){
   
      printf("\nAno de lançamento : 2013\n");
   
   }
   
   if(strcmp(nome, "Until_Dawn") == 0){
   
      printf("\nAno de lançamento : 2015\n");
   
   }
   
   if(strcmp(nome, "Resident_Evil_7") == 0){
   
      printf("\nAno de lançamento : 2017\n");
   
   }
   
   if(strcmp(nome, "Layers_of_Fear") == 0){
   
      printf("\nAno de lançamento : 2016\n");
   
   }     

   if(strcmp(nome, "The_Elder_Scrolls_V:_Skyrim") == 0){
   
      printf("\nAno de lançamento : 2011\n");
   
   }  
   
   if(strcmp(nome, "Disco_Elysium") == 0){
   
      printf("\nAno de lançamento : 2019\n");
   
   }
   
   if(strcmp(nome, "Persona_5_Royal") == 0){
   
      printf("\nAno de lançamento : 2019\n");
   
   }
   
   if(strcmp(nome, "Chrono_Cross") == 0){
   
      printf("\nAno de lançamento : 1999\n");
   
   }
   
   if(strcmp(nome, "Final_Fantasy_VII_Remake") == 0){
   
      printf("\nAno de lançamento : 2020\n");
   
   }        

     if(strcmp(nome, "The_Witcher_3") == 0){
   
      printf("\nAno de lançamento : 2015\n");
   
    }    
  
     if(strcmp(nome, "Diablo_III") == 0){
   
      printf("\nAno de lançamento : 2012\n");
   
   }    
  
     if(strcmp(nome, "Stardew_Valley") == 0){
   
      printf("\nAno de lançamento : 2016\n");
   
   }    
  
     if(strcmp(nome, "Undertale") == 0){
   
      printf("\nAno de lançamento : 2015\n");
   
   }  
     if(strcmp(nome, "Monster_Hunter:_World") == 0){
   
      printf("\nAno de Lançamento : 2018\n");
   
   }  
      if(strcmp(nome, "Genshin_Impact") == 0){
   
      printf("\nAno de Lançamento : 2020\n"); 
      
   }

      if(strcmp(nome, "Dark_Souls_III") == 0){
   
      printf("\nAno de Lançamento : 2016\n");   
      
   }
   
      if(strcmp(nome, "Path_of_Exile") == 0){
   
      printf("\nAno de Lançamento : 2013\n");   
      
   }
   
      if(strcmp(nome, "Horizon_Zero_Dawn") == 0){
   
      printf("\nAno de Lançamento : 2017.\n");  
      
   }

      if(strcmp(nome, "SOMA") == 0){
   
      printf("\nAno de Lançamento : 2015\n");   
      
   }
   
      if(strcmp(nome, "Dead_Space") == 0){
   
      printf("\nAno de Lançamento : 2008\n");   
      
   }
   
      if(strcmp(nome, "F.E.A.R") == 0){
   
      printf("\nAno de Lançamento : 2005\n"); 
       
   }
   
      if(strcmp(nome, "Lone_Survivor") == 0){
   
      printf("\nAno de Lançamento : 2012\n");   
      
   }
    
}

void sinopse_jogo(Lista2 *l, char nome[])
{

    if(strcmp(nome, "Katana_Zero") == 0){
   
      printf("\nO enredo te coloca na pele de um protagonista chamado Zero, também conhecido como Dragon. Ele é uma espécie de mercenário que vive sob efeito de drogas, precisa passar pelo psicólogo, não tem parte de sua memória e tem a missão de assassinar alvos específicos. A personalidade dele se molda de acordo com algumas escolhas do jogador numa gameplay com ação e muito, muito, sangue.\n");
   
   }
   
    if(strcmp(nome, "Celeste") == 0){
   
      printf("\nCeleste é uma história sobre resiliência, e essa é a primeira lição que você vai aprender, juntamente com a protagonista, Madeline. Ela decidiu se aventurar subindo a Montanha Celeste, um lugar mágico e perigoso, por um motivo que nem ela mesma entende bem.\n");
   
   }
   
   if(strcmp(nome, "Little_Nightmares") == 0){
   
      printf("\nUma menina faminta de nove anos chamada Six (seis) está presa na A Bocarra - um navio misterioso que serve os caprichos de criaturas doentes e poderosas. Depois acordar nas profundidades mais baixas da Bocarra, Six decide escapar de seu confinamento, tendo momentos regulares de fome excruciante.\n");
   
   }
   
   if(strcmp(nome, "Ori_and_the_Blind_Forest") == 0){
   
      printf("\nEm Ori and the Blind Forest, o jogador controla um guardião espiritual feito de luz chamado Ori, um dos muitos filhos da Árvore do Espírito, que protegia a floresta de Nibel. Durante uma tempestade, Ori se desprende da árvore e se perde na floresta, quando é encontrado e adotado por uma criatura chamada Naru. \n");
   
   }
   
   if(strcmp(nome, "Hollow_Knight") == 0){
   
      printf("\nO jogador deverá derrotar incontáveis inimigos poderosos e desbloquear habilidades novas para prosseguir no jogo e para explorar o reino esquecido em que se encontra e descobrir seus segredos.\n");
   
   }

   if(strcmp(nome, "Assassin’s_Creed_II") == 0){
   
      printf("\nO jogador assume o papel de um jovem nobre que se tornou assassino, chamado Ezio Auditore da Firenze. O pai de Ezio e seus irmãos, acusados injustamente de trair a cidade de Florença, são executados em praça pública. Ezio também seria executado, porém conseguiu escapar da morte. Ezio então parte junto com sua mãe e sua irmã para a vila dos Auditore em Monteriggioni, onde descobre que o seu pai era secretamente um assassino. Ezio passa a ajudar o seu tio Mario na guerra entre os templários e os assassinos, com o intuito de se vingar dos causadores da morte de sua família\n");
   
   }
  
  if(strcmp(nome, "Red_Dead_Redemption_2") == 0){
   
      printf("\nA história se passa em 1899 em uma representação ficcional do oeste, meio-oeste e sul dos Estados Unidos e acompanha o fora da lei Arthur Morgan, que precisa lidar com o declínio do Velho Oeste e sobreviver à perseguição de forças governamentais, gangues rivais e outros adversários.\n");
   
   }
  
  if(strcmp(nome, "Tomb_Raider") == 0){
   
      printf("\nA história decorre em Yamatai, uma ilha onde a protagonista e os seus amigos naufragaram. Lara tem que salvá-los, além de ter que lutar contra os habitantes e os perigos naturais da ilha.\n");
   
   }
  
  if(strcmp(nome, "The_Last_of_Us") == 0){
   
      printf("\nJoel, um sobrevivente durão, é contratado para contrabandear Ellie, uma jovem de 14 anos, para fora de uma zona de quarentena opressora. O que começa como um pequeno trabalho se torna uma jornada brutal e emocionante, conforme eles atravessam os Estados Unidos e dependem um do outro para sobreviver.\n");
   
   }
  
  if(strcmp(nome, "Grand_Theft_Auto_V") == 0){
   
      printf("\nO ex-assaltante de bancos Michael Townley vive em Los Santos, San Andreas, sob o programa proteção a testemunhas com o nome de Michael De Santa por causa de um roubo malsucedido em Ludendorff, North Yankton, nove anos antes. ... Os dois se reencontram depois de Trevor caçar Michael até Los Santos.\n");
   
   }   
   

  if(strcmp(nome, "FIFA_20") == 0){
   
      printf("\nFIFA 20 é o novo jogo de futebol da franquia da EA Sports. FIFA contará com melhorias em diversos elementos, como jogabilidade, gráficos e no balanceamento da dificuldade\n");
   
   }   
   
  if(strcmp(nome, "PES_2020") == 0){
   
      printf("\nSimulador de futebol. O game traz melhorias na sua jogabilidade e mudanças em seus principais modos, como o Liga Master e MyClub. Além é claro de ter um foco maior nos esports, fator que fez com que a franquia adicionasse o EFootball em seu nome oficial. \n");
   
   }   
   

  if(strcmp(nome, "Crash_Team_Racing_Nitro_Fueled") == 0){
   
      printf("\nÉ um jogo de corrida da série Crash Bandicoot. Jogadores devem evitar obstáculos e navegar pelas diversas pistas para alcançar a linha de chegada, utilizando power-ups colocados pela pista para conseguir um turbo ou atingir os oponentes.\n");
   
   }   
   

  if(strcmp(nome, "Need_For_Speed_Heat") == 0){
   
      printf("\nO jogo de corrida se passa na cidade fictícia de Palm City, um mundo aberto que serve de palco para corridas oficiais do “Speedhunters Showdown” durante o dia. À noite, o cenário muda e as corridas clandestinas tomam conta das ruas. Seguindo a tradição da franquia, a polícia será um perigo constante dos competidores que buscam um lugar na elite das corridas de rua.\n");
   
   }


  if(strcmp(nome, "UFC_3") == 0){
   
      printf("\nUm modo história evoluído que agora desafia o jogador a se tornar uma lenda do UFC, com direito a objetivos paralelos às lutas, uma área de treinamento personalizada e até a opção de promover um combate provocando o adversário nas redes sociais.\n");
   
   }   

  if(strcmp(nome, "Alien:_Isolation") == 0){
   
      printf("\nO jogo é baseado na série de filmes de terror de ficção científica Alien, e acontece quinze anos após os eventos do filme original Alien de 1979, seguindo a engenheira Amanda Ripley, filha da protagonista Ellen Ripley de Alien, enquanto ela investiga o desaparecimento de sua mãe.\n");
   
   }
   
   if(strcmp(nome, "Outlast") == 0){
   
      printf("\nOutlast é um jogo de survival horror em primeira pessoa, ambientado em um hospício. ... Como grande parte do hospicio é escuro, o jogador deve usar a câmera de vídeo de Miles para ver, graças à sua função de visão noturna. Usando a visão noturna há o consumo de baterias, as quais estão espalhadas por todo o ambiente.\n");
   
   }
   
   if(strcmp(nome, "Until_Dawn") == 0){
   
      printf("\nUm homem estranho se agacha pela beira do penhasco e estende a mão para ajudá-las, mas Hannah e Beth caem em sua aparente morte, para nunca mais serem vistas. No aniversário de um ano dos desaparecimento das gêmeas Washington, os sete amigos restantes aceitam o convite de Josh de volta à montanha\n");
   
   }
   
   if(strcmp(nome, "Resident_Evil_7") == 0){
   
      printf("\nA história segue a busca do civil Ethan Winters por sua esposa Mia, que o leva a uma mansão agrícola aparentemente abandonada e habitada pela família Baker. Ethan faz uso de armas e ferramentas na luta contra os membros da família e os Mofados, uma forma humanoide de bactéria.\n");
   
   }
   
   if(strcmp(nome, "Layers_of_Fear") == 0){
   
      printf("\nEm Layers of Fear, o jogador controla um pintor perturbado psicologicamente que procura terminar sua obra-prima enquanto anda por sua mansão vitoriana e descobre segredos sobre a família e obras do artista.\n");
   
   }     

   if(strcmp(nome, "The_Elder_Scrolls_V:_Skyrim") == 0){
   
      printf("\nO jogador entra na pele do último Dovahkiin,que tem o dever de livrar a província de Skyrim da tormenta causada pelos dragões e seu líder Alduin. O jogo se passa duzentos anos depois dos eventos de Oblivion. Na premissa, o Império começa a ceder territórios para as nações Élficas uma vez governadas, porque não há nenhum herdeiro para o trono do Imperador. Os Blades não tem ninguém para defender, e gradualmente morreram, foram assassinados ou se isolaram do resto do mundo. Depois do assassinato do Rei de Skyrim, uma guerra civil irrompe entre as raças nativas Nord — sendo a maioria aqueles que desejavam que Skyrim se separe do Império, e o resto sendo aqueles que desejam que Skyrim permaneça no Império.\n");
   
   }  
   
   if(strcmp(nome, "Disco_Elysium") == 0){
   
      printf("\nDisco Elysium se passa na fictícia cidade de Revachol, mais especificamente no bairro costal de Martinaise, cheio de crime, pobreza e corrupção, controlada pelo corrupto Sindicato dos estivadores. O protagonista é um detetive enviado pela RCM para investigar o assassinato de um homem que foi encontrado pendurado em uma árvore. Infelizmente, após um colapso emocional, o detetive começou a beber muito em todo o distrito de Martinaise, e acorda três dias depois em seu quarto do hotel, sem lembrança de quem ele é e o que estava fazendo. Agora cabe ao jogador resolver o caso de assassinato e orientar o detetive a redescobrir sua identidade preenchendo os buracos em sua memória\n");
   
   }
   
   if(strcmp(nome, "Persona_5_Royal") == 0){
   
      printf("\nO Persona 5 Royal é um novo relançamento da saga de RPG da Atlus, focado na aventura que já fez grande sucesso, o Persona 5 original. O jogo tem a mesma história da primeira versão, envolvendo os Phantom Thieves e sua missão para convencer pessoas ruins a se arrependerem de seus crimes.\n");
   
   }
   
   if(strcmp(nome, "Chrono_Cross") == 0){
   
      printf("\nA história de Chrono Cross é focada no adolescente chamado Serge e na temática de mundos paralelos. De cara com uma realidade alternativa na qual morreu ainda criança, Serge parte em busca da verdade em torno da divergência entre os dois mundos.\n");
   
   }
   
   if(strcmp(nome, "Final_Fantasy_VII_Remake") == 0){
   
      printf("\nA história se passa na metrópole distópica de Midgar e acompanha o mercenário Cloud Strife, que se junta a um grupo ecoterrorista em uma tentativa de impedir que a poderosa megacorporação Shinra use a essência vital do planeta como fonte de energia.\n");
   
   }    
  
     if(strcmp(nome, "The_Witcher_3") == 0){
   
      printf("\nThe Witcher 3: Wild Hunt conclui a história do lendário bruxo Geralt de Rívia, o protagonista da série, que vem sendo contada nos jogos antecessores e nos livros da série cronologicamente anteriores a esses.[20] Bruxos são humanos geneticamente modificados ensinados a lutar contra monstros desde jovens, possuindo diversas habilidades especiais, as quais divergem de bruxo para bruxo. Com grande conhecimento alquímico, estes caçadores de recompensas usam a magia em grande parte de seu cotidiano, sobrevivendo ao matar criaturas monstruosas e outras ameaças em troca de dinheiro. No entanto, apesar de serem cultos pela educação que receberam na juventude, sofrem grande preconceito da sociedade por submeterem-se a vários experimentos durante seu treinamento, sendo muitas vezes considerados como aberrações pelas pessoas.\n");
   }    
  
     if(strcmp(nome, "Diablo_III") == 0){
   
      printf("\n A história do novo jogo passa-se depois de vinte anos dos acontecimentos que marcaram o fim de Diablo II. Os guerreiros finalmente derrotaram o mal, mas quando um cometa cai na Terra exatamente no lugar onde Diablo foi confinado, os guerreiros são novamente convocados para defender a humanidade contra o novo inimigo.\n");
   
   }    
  
     if(strcmp(nome, "Stardew_Valley") == 0){
   
      printf("\nStardew Valley é um RPG sem fim da vida no campo! Você herdou a antiga fazenda de seu avô no Vale do Orvalho. Equipado com ferramentas de segunda mão e algumas moedas, você irá começar sua nova vida. Será que você consegue aprender a viver da terra e transformar esses campos absurdamente vegetados em uma casa próspera?\n");
   
   }    
  
     if(strcmp(nome, "Undertale") == 0){
   
      printf("\nUndertale inicia contando sobre o passado, no qual monstros e humanos viviam no planeta. Após uma guerra, os monstros foram derrotados e selados embaixo de uma montanha. O jogo, então, volta para o presente e passa a focar na história de uma criança que caiu dentro da montanha onde os monstros agora vivem.\n");
   
   }  
     if(strcmp(nome, "Monster_Hunter:_World") == 0){
   
      printf("\nMonster Hunter: World é um jogo de RPG eletrônico de ação desenvolvido e publicado pela Capcom. No jogo, o jogador assume o papel de um Caçador, encarregado de caçar e matar ou atrapalhar monstros que vagam em um dos vários espaços ambientais.\n");
   
   }  
      if(strcmp(nome, "Genshin_Impact") == 0){
   
      printf("\nO jogo apresenta um ambiente de mundo aberto de fantasia e sistema de batalha baseado em ação usando magia elemental e troca de personagem, e usa a monetização de jogo gacha para os jogadores obterem novos personagens, armas e outros recursos.\n");  
      
   }

      if(strcmp(nome, "Dark_Souls_III") == 0){
   
      printf("\nDark Souls III é um jogo do gênero RPG de ação numa perspectiva de terceira pessoa, similar aos jogos anteriores da série. ... As cinzas, de acordo com Miyazaki, têm um papel importante no jogo. A Magia está incluída no jogo, assim como a barra de magia, similar a Demon's Souls.\n");   
      
   }
   
      if(strcmp(nome, "Path_of_Exile") == 0){
   
      printf("\nPath of Exile é um RPG de ação no estilo Diablo 3 situado em um mundo sombrio de fantasia medieval. O jogo é gratuito, e tenta seguir uma nova tendência chamada de “micro transações éticas”, que basicamente significa que você não terá que pagar para ser bom no jogo.\n");   
      
   }
   
      if(strcmp(nome, "Horizon_Zero_Dawn") == 0){
   
      printf("\nHorizon Zero Dawn é um eletrônico de ação em que os jogadores controlam Aloy, uma caçadora e arqueira, à medida que ela progride através de um mundo pós-apocalíptico, dominado por criaturas mecanizadas como robôs dinossauros.\n");   
      
   }

      if(strcmp(nome, "SOMA") == 0){
   
      printf("\nSoma é um jogo em primeira pessoa onde o personagem principal não usará armas, tendo que contar com estratégias para sobreviver. Durante o jogo aparecerão monstros com características diferentes e o jogador deverá se adaptar a cada um deles.\n");   
      
   }
   
      if(strcmp(nome, "Dead_Space") == 0){
   
      printf("\nO jogador toma o papel de um engenheiro chamado Isaac Clarke, que luta contra uma infestação alienígena, parecida com vírus, que transforma humanos em monstros alienígenas chamados (Necromorphs), a bordo de uma nave de mineração espacial chamada USG Ishimura.\n");   
      
   }
   
      if(strcmp(nome, "F.E.A.R") == 0){

      printf("\nNeste game de tiro em primeira pessoa, você é membro da First Encounter Assault and Recon (F.E.A.R.), força militar de elite para assuntos paranormais, e deve investigar um lunático comandante militar que assumiu o controle de um batalhão de soldados de elite clonados.\n"); 
       
   }
   
      if(strcmp(nome, "Lone_Survivor") == 0){
   
      printf("\nLone Survivor é um jogo de suspense e terror psicológico que desafia jogadores a sobreviverem em meio a um apocalipse misterioso com criaturas nefastas. A grande sacada da história é que tanto tempo isolado já deixou seu personagem um pouco perturbado, sendo difícil definir o que é real.\n");   
      
   }
    
}


void plataforma_jogo(Lista2 *l, char nome[])
{

    if(strcmp(nome, "Katana_Zero") == 0){
   
      printf("\nPlataformas: Nintendo Switch, Xbox One, Microsoft Windows, macOS, Mac OS\n");
   
   }
   
    if(strcmp(nome, "Celeste") == 0){
   
      printf("\nPlataformas: Nintendo Switch, PlayStation 4, Xbox One, Microsoft Windows, Linux, Mac OS Classic, Google Stadia, macOS\n");
   
   }
   
   if(strcmp(nome, "Little_Nightmares") == 0){
   
      printf("\nPlataformas: PlayStation 4, Nintendo Switch, Xbox One, Microsoft Windows, Google Stadia\n");
   
   }
   
   if(strcmp(nome, "Ori_and_the_Blind_Forest") == 0){
   
      printf("\nPlataformas: Nintendo Switch, Xbox One, Microsoft Windows\n");
   
   }
   
   if(strcmp(nome, "Hollow_Knight") == 0){
   
      printf("\nPlataformas: PlayStation 4, Nintendo Switch, Xbox One, macOS, Microsoft Windows, Linux, Mac OS\n");
   
   }

   if(strcmp(nome, "Assassin’s_Creed_II") == 0){
   
      printf("\nPlataformas: PlayStation 4, Xbox One, PlayStation 3, Xbox 360, Microsoft Windows, macOS, Mac OS Classic\n");
   
   }
  
  if(strcmp(nome, "Red_Dead_Redemption_2") == 0){
   
      printf("\nPlataformas: PlayStation 4, Xbox One, Google Stadia, Microsoft Windows\n");
   
   }
  
  if(strcmp(nome, "Tomb_Raider") == 0){
   
      printf("\nPlataformas: Microsoft Windows, PlayStation 3, Xbox 360\n");
   
   }
  
  if(strcmp(nome, "The_Last_of_Us") == 0){
   
      printf("\nPlataformas: PlayStation 3, PlayStation 4\n");
   
   }
  
  if(strcmp(nome, "Grand_Theft_Auto_V") == 0){
   
      printf("\nPlataformas: PlayStation 4, Xbox One, PlayStation 3, Xbox Series X, Xbox 360, Microsoft Windows, PlayStation 5\n");
   
   }   
   

  if(strcmp(nome, "FIFA_20") == 0){
   
      printf("\nPlataformas: PlayStation 4, Xbox One, Nintendo Switch, Microsoft Windows\n");
   
   }   
   
  if(strcmp(nome, "PES_2020") == 0){
   
      printf("\nPlataformas: PlayStation 4, Android, Microsoft Windows, Xbox One, iOS\n");
   
   }   
   

  if(strcmp(nome, "Crash_Team_Racing_Nitro_Fueled") == 0){
   
      printf("\nPlataformas: PlayStation 4, Xbox One, Nintendo Switch\n");
   
   }   
   

  if(strcmp(nome, "Need_For_Speed_Heat") == 0){
   
      printf("\nPlataformas: PlayStation 4, Xbox One, Microsoft Windows\n");
   
   }


  if(strcmp(nome, "UFC_3") == 0){
   
      printf("\nPlataformas: PlayStation 4, Xbox One\n");
   
   }   

  if(strcmp(nome, "Alien:_Isolation") == 0){
   
      printf("\nPlataformas: PlayStation 4, Xbox One, PlayStation 3, Nintendo Switch, Xbox 360, Microsoft Windows, Mac OS, Linux, macOS\n");
   
   }
   
   if(strcmp(nome, "Outlast") == 0){
   
      printf("\nPlataformas: PlayStation 4, Xbox One, Android, Microsoft Windows, Nintendo Switch, Linux, macOS, Mac OS Classic\n");
   
   }
   
   if(strcmp(nome, "Until_Dawn") == 0){
   
      printf("\nPlataformas: PlayStation 4, Android\n");
   
   }
   
   if(strcmp(nome, "Resident_Evil_7") == 0){
   
      printf("\nPlataformas: PlayStation 4, Xbox One, Nintendo Switch, Microsoft Windows, Google Stadia, Amazon Luna\n");
   
   }
   
   if(strcmp(nome, "Layers_of_Fear") == 0){
   
      printf("\nPlataformas: PlayStation 4, Nintendo Switch, Xbox One, Android, Microsoft Windows, Linux, macOS, Mac OS\n");
   
   }     

   if(strcmp(nome, "The_Elder_Scrolls_V:_Skyrim") == 0){
   
      printf("\nPlataformas: PlayStation 4, Xbox One, Nintendo Switch, PlayStation 3, Xbox 360, Microsoft Windows\n");
   
   }  
   
   if(strcmp(nome, "Disco_Elysium") == 0){
   
      printf("\nPlataformas: PlayStation 4, PlayStation 5, Xbox One, Nintendo Switch, Xbox Series X, macOS, Google Stadia, Microsoft Windows\n");
   
   }
   
   if(strcmp(nome, "Persona_5_Royal") == 0){
   
      printf("\nPlataforma: PlayStation 4\n");
   
   }
   
   if(strcmp(nome, "Chrono_Cross") == 0){
   
      printf("\nPlataforma: PlayStation\n");
   
   }
   
   if(strcmp(nome, "Final_Fantasy_VII_Remake") == 0){
   
      printf("\nPlataformas: PlayStation 4, PlayStation 5\n");
   
   }    
  
     if(strcmp(nome, "The_Witcher_3") == 0){
   
      printf("\nPlataformas: PlayStation 4, Nintendo Switch, Xbox One, PlayStation 5, Xbox Series X, Microsoft Windows\n");
   }    
  
     if(strcmp(nome, "Diablo_III") == 0){
   
      printf("\nPlataformas: Microsoft Windows, Mac OS X, PlayStation 3, PlayStation 4, Xbox 360, Xbox One, Nintendo Switch\n");
   
   }    
  
     if(strcmp(nome, "Stardew_Valley") == 0){
   
      printf("\nPlataformas: Microsoft Windows, macOS, Linux, PlayStation 4, Xbox One, Nintendo Switch, iOS, Android\n");
   
   }    
  
     if(strcmp(nome, "Monster_Hunter:_World") == 0){
   
      printf("\nPlataformas: PlayStation 4, Xbox One, Microsoft Windows\n");
   
   }  
      if(strcmp(nome, "Genshin_Impact") == 0){
   
      printf("\nPlataformas : PlayStation 4, Microsoft Windows, iOS, Android, PlayStation 5\n");  
      
   }

      if(strcmp(nome, "Dark_Souls_III") == 0){
   
      printf("\nPlataformas: PlayStation 4, Xbox One, Microsoft Windows.\n");   
      
   }
   
      if(strcmp(nome, "Path_of_Exile") == 0){
   
      printf("\nPlataformas: PlayStation 4, Xbox One, macOS, Microsoft Windows, Mac OS.\n");  
      
   }
   
      if(strcmp(nome, "Horizon_Zero_Dawn") == 0){
   
      printf("\nPlataformas: PlayStation 4, Microsoft Windows.\n");   
      
   }

      if(strcmp(nome, "SOMA") == 0){
   
      printf("\nPlataformas: PlayStation 4, Xbox One, Microsoft Windows, Linux, macOS, Mac OS Classic.\n");  
      
   }
   
      if(strcmp(nome, "Dead_Space") == 0){
   
      printf("\nPlataformas: PlayStation 3, Xbox 360, Microsoft Windows\n");
      
   }
   
      if(strcmp(nome, "F.E.A.R") == 0){
   
      printf("\nPlataformas: Microsoft Windows, PlayStation 3, Xbox 360.\n"); 
       
   }
   
      if(strcmp(nome, "Lone_Survivor") == 0){
   
      printf("\nPlataformas: Nintendo Switch, PlayStation 4, Microsoft Windows, PlayStation 3, macOS, Wii U, PlayStation Vita.\n");   
      
   }
      

}


int main(void)
{

   Lista *lista;
   Lista2 *lista2;
   

   int i;
   char genero1[1000], nome[1000], r, user[1000];
   int tipo, cont = 0, len = 2;
   
   limpatela();
   
   printf("\n\n");
   printf("    ______________________________________________________________________________________________________________________________________________________________\n\n");
   printf("    |Programa que tem como objetivo dar recomendações de formas de entretenimentos como: filmes, series, livros e jogos de acordo com as preferências do usuário.|\n");
   printf("    ______________________________________________________________________________________________________________________________________________________________\n");
   printf("\n\n\n\n\n\n");
      
   lista =  malloc(1000 * sizeof(Lista));
   lista2 =  malloc(3*sizeof(Lista2));
   strcpy(user,"Minha Lista:");
   strcpy(lista2[1].nome,user);
   strcpy(lista2[1].nome2,user);
   strcpy(lista2[1].nome3,user);
   strcpy(lista2[1].nome4,user);
   
   
   printf(" Informe o nome de usuário : ");
   fgets(user,1000, stdin);
   strcpy(lista2[0].nome,user);
   strcpy(lista2[0].nome2,user);
   strcpy(lista2[0].nome3,user);
   strcpy(lista2[0].nome4,user);
   
   do
   {
   
   printf("\n\n==============================================================================================");
   printf("\n\n Selecione de acordo com o número, o tipo de recomendação que você gostaria de receber :  \n\n ");
   printf("|| 1 - Filme\n");
   printf(" || 2 - Série\n");
   printf(" || 3 - Livro\n");
   printf(" || 4 - Jogo\n");
   printf(" || 5 - Sair\n\n");
   printf("==============================================================================================\n\n");
   
   scanf("%d", &tipo);
   printf("\n");
   
   limpatela();
   
   if(tipo == 1){
    
      printf("\n\n\n                             ___________________________________________________________________________________________________________________\n");
      printf("\n                             |      Digite os gêneros que deseja incluir no seu filme, e quando terminar digite FIM.                           |\n");
      printf("                             |      Exemplos de gêneros: Drama, Ação, Romance, Terror, Comédia, Ficção, Suspense, Animação, Crime, Histórico.  |\n");
      printf("                             ___________________________________________________________________________________________________________________\n\n\n\n");
   
      while(strcmp(genero1, "FIM") != 0){
      
         scanf("%s", lista[cont].genero);
         strcpy(genero1,lista[cont].genero);
         cont++;
      }

      limpatela();
      recomendacoes_filme(lista, cont);
      printf("\n\n\n");
      pausatela();
      
        printf("\n\n\n                                            ___________________________________________________________________________________\n");
        printf("\n                                            |Menu com informações sobre os filmes e opções para criação da sua lista de filmes:|\n");
        printf("                                            ___________________________________________________________________________________\n\n\n\n");
        
        
        printf("\n Informe o caractere conforme a operação que deseja realizar:\n\n");
        printf(" S - Se deseja saber a sinopse de algum filme:\n");
        printf(" A - Se deseja saber o ano de lançamento de algum filme:\n");
        printf(" P - Se deseja saber o estúdio de algum filme:\n");
        printf(" I - Se deseja inserir um filme da lista:\n");
        printf(" R - Se deseja remover um filme da lista:\n");
        printf(" M - Se deseja mostrar o conteúdo da lista de filmes:\n");
        printf(" F - Se deseja finalizar a lista de filmes, mostrar o seu conteúdo e voltar a tela inicial:\n");
        
        
  do
    {
    
        printf("\n");
        scanf(" %c", &r);
        

        if(r == 'I')
        {
        
            printf("\n Informe o filme que deseja inserir.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");
            
            scanf("%s", nome);
            
            len++;            
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));
            inserir_filme(lista2, len-1, nome);
            

        }
        
        
        if(r == 'R')
        {
        
            printf("\n Informe o filme que deseja remover.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");
                        
            scanf("%s", nome);
            
            remover_filme(lista2, len, nome);
            
            len--;
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));

        }
        
        
        if(r == 'S')
        {
        
            printf("\n Informe o filme que deseja saber a sinopse.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");            
            
            scanf("%s", nome);
            
            sinopse_filme(lista2, nome);
        }
    
        if(r == 'A')
        {
        
            printf("\n Informe o filme que deseja saber o ano de lançamento.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");            
            
            scanf("%s", nome);
            
            ano_filme(lista2, nome);
        }
        
        if(r == 'P')
        {
        
            printf("\n Informe o nome do filme que deseja saber o estúdio.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");            
            
            scanf("%s", nome);
            
            estudio_filme(lista2, nome);
        }
   
        if(r == 'M')
        {
        
          printf("\n");
          imprimir_filme(lista2, len);
          printf("\n");

        }
        
        
        if(r == 'F')
        {
        
          limpatela();
          printf("\n");  
          imprimir_filme(lista2, len);
          printf("\n\n\n");
          pausatela();
          limpatela();
              
        }
    }
    while(r != 'F'); 
          
  } 
  
  
  else if(tipo == 2){
    
      printf("\n\n\n                             ___________________________________________________________________________________________________________\n");
      printf("\n                             |      Digite os gêneros que deseja incluir na sua série, e quando terminar digite FIM.                   |\n");
      printf("                             |      Exemplos de gêneros: Drama, Ação, Romance, Terror, Comédia, Fantasia, Suspense, Mistério           |\n");
      printf("                             ___________________________________________________________________________________________________________\n\n\n\n");
   
      while(strcmp(genero1, "FIM") != 0){
      
         scanf("%s", lista[cont].genero2);
         strcpy(genero1,lista[cont].genero2);
         cont++;
      }
      
       limpatela();
       recomendacoes_serie(lista, cont);     
       printf("\n\n\n");
       pausatela();
      
        printf("\n\n\n                                            ___________________________________________________________________________________\n");
        printf("\n                                            |Menu com informações sobre as séries e opções para criação da sua lista de séries:|\n");
        printf("                                            ___________________________________________________________________________________\n\n\n\n"); 
        
        printf("\n Informe o caractere conforme a operação que deseja realizar:\n\n");
        printf(" S - Se deseja saber a sinopse de alguma série:\n");
        printf(" A - Se deseja saber os anos de duração de alguma série:\n");
        printf(" P - Se deseja saber a quantidade de temporadas e episódios de alguma série:\n");
        printf(" I - Se deseja inserir uma série da lista:\n");
        printf(" R - Se deseja remover uma série da lista:\n");
        printf(" M - Se deseja mostrar o conteúdo da sua lista de séries:\n");
        printf(" F - Se deseja finalizar a sua lista de séries, mostrar o seu conteúdo e voltar a tela inicial:\n");
        
        
  do
    {
    
        printf("\n");
        scanf(" %c", &r);
        

        if(r == 'I')
        {
        
            printf("\n Informe a série que deseja inserir.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");
            
            scanf("%s", nome);
            
            len++;            
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));
            inserir_serie(lista2, len-1, nome);
            

        }
        
        
        if(r == 'R')
        {
        
            printf("\n Informe a série que deseja remover.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");
                        
            scanf("%s", nome);
            
            remover_serie(lista2, len, nome);
            
            len--;
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));

        }
        
        
        if(r == 'S')
        {
        
            printf("\n Informe a série que deseja saber a sinopse.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");            
            
            scanf("%s", nome);

            sinopse_serie(lista2, nome);            

        }
        
        if(r == 'A')
        {
        
            printf("\n Informe a série que deseja saber a duração do lançamento.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");            
            
            scanf("%s", nome);
            
            ano_serie(lista2, nome);
        }
        
        if(r == 'P')
        {
        
            printf("\n Informe o nome da série que deseja saber o número de temporadas e episódios.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");            
            
            scanf("%s", nome);
            
            temporadas_serie(lista2, nome);
        }
           
        if(r == 'M')
        {
        
          printf("\n");
          imprimir_serie(lista2, len);
          printf("\n");

        }
        
        
        if(r == 'F')
        {
          
          limpatela();
          printf("\n");  
          imprimir_serie(lista2, len);
          printf("\n\n\n");
          pausatela();
          limpatela();
          
        }
    }
    while(r != 'F'); 
          
  } 
  
  
  else if(tipo == 3){
    
      printf("\n\n\n                             ___________________________________________________________________________________________________________\n");
      printf("\n                             |      Digite os gêneros que deseja incluir no seu livro, e quando terminar digite FIM.                   |\n");
      printf("                             |      Exemplos de gêneros: Drama, Ação, Romance, Terror, Comédia, Fantasia                               |\n");
      printf("                             ___________________________________________________________________________________________________________\n\n\n\n");
   
      while(strcmp(genero1, "FIM") != 0){
      
         scanf("%s", lista[cont].genero3);
         strcpy(genero1,lista[cont].genero3);
         cont++;
      }

      limpatela();
      recomendacoes_livro(lista, cont);
      printf("\n\n\n");
      pausatela();
  
        printf("\n\n\n                                            ___________________________________________________________________________________\n");
        printf("\n                                            |Menu com informações sobre os livros e opções para criação da sua lista de livros:|\n");
        printf("                                            ___________________________________________________________________________________\n\n\n\n");
        
        printf("\n Informe o caractere conforme a operação que deseja realizar:\n\n");
        printf(" S - Se deseja saber a sinopse de algum livro:\n");
        printf(" A - Se deseja saber o ano de publicação de algum livro:\n");
        printf(" P - Se deseja saber o nome do autor de algum livro:\n");
        printf(" I - Se deseja inserir um livro da lista:\n");
        printf(" R - Se deseja remover um livro da lista:\n");
        printf(" M - Se deseja mostrar o conteúdo da lista de livros:\n");
        printf(" F - Se deseja finalizar a lista de livros, mostrar o seu conteúdo e voltar a tela inicial:\n");
        
        
  do
    {
    
        printf("\n");
        scanf(" %c", &r);
        

        if(r == 'I')
        {
        
            printf("\n Informe o livro que deseja inserir.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");
            
            scanf("%s", nome);
            
            len++;            
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));
            inserir_livro(lista2, len-1, nome);
            

        }
        
        
        if(r == 'R')
        {
        
            printf("\n Informe o livro que deseja remover.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");
                        
            scanf("%s", nome);
            
            remover_livro(lista2, len, nome);
            
            len--;
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));

        }
        
        
        if(r == 'S')
        {
        
            printf("\n Informe o livro que deseja saber a sinopse.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");            
            
            scanf("%s", nome);
            
            sinopse_livro(lista2, nome);
               
        }
        
        if(r == 'A')
        {
        
            printf("\n Informe o livro que deseja saber o ano de lançamento.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");            
            
            scanf("%s", nome);
            
            ano_livro(lista2, nome);
        }
        
        if(r == 'P')
        {
        
            printf("\n Informe o livro que deseja saber o nome do autor.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");            
            
            scanf("%s", nome);
            
            autor_livro(lista2, nome);
        }
   
        
        if(r == 'M')
        {
        
          printf("\n");
          imprimir_livro(lista2, len);
          printf("\n");

        }
        
        
        if(r == 'F')
        {
        
          limpatela();
          printf("\n");  
          imprimir_livro(lista2, len);
          printf("\n\n\n");
          pausatela();
          limpatela();
          
        }
    }
    while(r != 'F'); 
          
  } 
  
  
  else if(tipo == 4){
    
      printf("\n\n\n                             ___________________________________________________________________________________________________________\n");
      printf("\n                             |      Digite os gêneros que deseja incluir no seu jogo, e quando terminar digite FIM.                    |\n");
      printf("                             |      Exemplos de gêneros: Plataforma, Ação, Aventura, Tiro, Esportes, Terror, RPG.                      |\n");
      printf("                             ___________________________________________________________________________________________________________\n\n\n\n");
   
      while(strcmp(genero1, "FIM") != 0){
      
         scanf("%s", lista[cont].genero4);
         strcpy(genero1,lista[cont].genero4);
         cont++;
      }
      
      limpatela();
      recomendacoes_jogo(lista, cont); 
      printf("\n\n\n");
      pausatela(); 
      
        printf("\n\n\n                                            _________________________________________________________________________________\n");
        printf("\n                                            |Menu com informações sobre os jogos e opções para criação da sua lista de jogos:|\n");
        printf("                                            _________________________________________________________________________________\n\n\n\n");
        
        printf("\n Informe o caractere conforme a operação que deseja realizar:\n\n");
        printf(" S - Se deseja saber a sinopse de algum jogo:\n");
        printf(" A - Se deseja saber o ano de lançamento de algum jogo:\n");
        printf(" P - Se deseja saber as plataformas em que o jogo escolhido está disponível:\n");
        printf(" I - Se deseja inserir um jogo da lista:\n");
        printf(" R - Se deseja remover um jogo da lista:\n");
        printf(" M - Se deseja mostrar o conteúdo da lista de jogos:\n");
        printf(" F - Se deseja finalizar a lista de jogos, mostrar o seu conteúdo e voltar a tela inicial:\n");
        
        
  do
    {
    
        printf("\n");
        scanf(" %c", &r);
        

        if(r == 'I')
        {
        
            printf("\n Informe o jogo que deseja inserir.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");
            
            scanf("%s", nome);
            
            len++;            
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));
            inserir_jogo(lista2, len-1, nome);
            

        }
        
        
        if(r == 'R')
        {
        
            printf("\n Informe o jogo que deseja remover.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");
                        
            scanf("%s", nome);
            
            remover_jogo(lista2, len, nome);
            
            len--;
            lista2 = (Lista2*) realloc(lista2,(len+2) * sizeof(Lista2));

        }
        
        
        if(r == 'S')
        {
        
            printf("\n Informe o jogo que deseja saber a sinopse.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");            
            
            scanf("%s", nome);
            
            sinopse_jogo(lista2, nome); 
        }
        
        if(r == 'A')
        {
        
            printf("\n Informe o jogo que deseja saber o ano de lançamento.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");            
            
            scanf("%s", nome);
            
            ano_jogo(lista2, nome);
        }
        
        if(r == 'P')
        {
        
            printf("\n Informe o jogo que deseja saber a plataforma em que está disponível.\n");
            printf(" Utilize o caractere sublinha (“_”) para nomes que contenham espaço em sua formação (nomes compostos).\n\n");            
            
            scanf("%s", nome);
            
            plataforma_jogo(lista2, nome);
        }
        
        if(r == 'M')
        {
        
          printf("\n");
          imprimir_jogo(lista2, len);
          printf("\n");

        }
        
        
        if(r == 'F')
        {
        
          limpatela();
          printf("\n");  
          imprimir_jogo(lista2, len);
          printf("\n\n\n");
          pausatela();
          limpatela();
          
        }
    }
    while(r != 'F');   
        
  } 
  
  limpa_filme(lista, cont);
  limpa_serie(lista, cont);
  limpa_livro(lista, cont);
  limpa_jogo(lista, cont);
  strcpy(genero1,"teste");
  
  }while( tipo != 5);
        

  free(lista);
  free(lista2);

return 0;
}
