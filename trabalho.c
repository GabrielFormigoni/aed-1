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
    
    printf("Usuário:%s\n\n\n%s\n\n", l[0].nome, l[1].nome);
    
    for(i = 2; i < len; i++)
    {

       printf("%s\n", l[i].nome);
       
    
    }

}


void imprimir_serie(Lista2 *l, int len)
{
    int i;
    
    printf("Usuário:%s\n\n\n%s\n\n", l[0].nome, l[1].nome);
    
    for(i = 2; i < len; i++)
    {

       printf("%s\n", l[i].nome);
       
    
    }

}


void imprimir_livro(Lista2 *l, int len)
{
    int i;
    
    printf("Usuário:%s\n\n\n%s\n\n", l[0].nome, l[1].nome);
    
    for(i = 2; i < len; i++)
    {

       printf("%s\n", l[i].nome);
       
    
    }

}


void imprimir_jogo(Lista2 *l, int len)
{
    int i;
    
    printf("Usuário:%s\n\n\n%s\n\n", l[0].nome, l[1].nome);
    
    for(i = 2; i < len; i++)
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
          printf(" Minha_Mãe_é_Uma_Peça\n");
          printf(" Até_que_a_Sorte_nos_Separe\n");
          printf(" Missão_Madrinha_de_Casamento\n");
          printf(" As_Férias_de_Mr_Bean\n");
          printf(" O_virgem_de_40_anos\n");
        
        }
          
     }     
}

void recomendacoes_serie(Lista *k, int cont)
{
  int i;
  
     for(i = 0; i < cont; i++){
       
        if(strcmp(k[i].genero, "Drama") == 0){
        
          printf("\n\nSéries Drama\n\n");
          printf(" Elite\n");
          printf(" The_End_of_the_F***ing_World\n");
          printf(" The_Witcher\n");
          printf(" Kingdom\n");
          printf(" Sex_Education\n");
        
        }
       
        if(strcmp(k[i].genero, "Ação") == 0){
        
          printf("\n\nSéries Ação\n\n");
          printf(" Sky_Rojo\n");
          printf(" Lupin\n");
          printf(" Sherlock\n");
          printf(" Peaky_Blinders\n");
          printf(" La_Casa_de_Papel\n");
        
        } 
       
       if(strcmp(k[i].genero, "Romance") == 0){
       
          printf("\n\nSéries Romance\n\n");
          printf(" Jane_a_Virgem\n");
          printf(" Riverdale\n");
          printf(" Virgin_River\n");
          printf(" Os_Inocentes\n");
          printf(" Bridgerton\n");
        
        }
       
       if(strcmp(k[i].genero, "Terror") == 0){
        
          printf("\n\nSéries Terror\n\n");
          printf(" American_Horror_Story\n");
          printf(" Stranger_Things\n");
          printf(" O_Mundo_Sombrio_de_Sabrina\n");
          printf(" A_Maldição\n");
          printf(" Bates_Motel\n");
        
        }
       
       if(strcmp(k[i].genero, "Comédia") == 0){
          
          printf("\n\nSéries Comédia\n\n");
          printf(" Friends\n");
          printf(" The_Big_Bang_Theory\n");
          printf(" How_I_Met_Your_Mother\n");
          printf(" Os_Simpsons\n");
          printf(" Todo_Mundo_Odeia_o_Chris \n");
        
        }
          
     } 

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
   
      printf("\nUm agente secreto embarca em uma missão perigosa para evitar o início da Terceira Guerra Mundial.\n");
   
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
   
   if(strcmp(nome, "A_Maldição") == 0){
   
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
   strcpy(user,"Lista de Títulos:");
   strcpy(lista2[1].nome,user);
   
   
   printf("Informe o nome de usuário:\n");
   gets(user);
   strcpy(lista2[0].nome,user);
   
   
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
      
       recomendacoes_serie(lista, cont);     
  
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

            sinopse_serie(lista2, nome);            

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

      recomendacoes_livro(lista, cont);
  
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
            
            sinopse_livro(lista2, nome);
               
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
  
      recomendacoes_jogo(lista, cont);  
      
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
            
            sinopse_jogo(lista2, nome); 
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
