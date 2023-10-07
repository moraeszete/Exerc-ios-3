/*5) Em uma eleição presidencial existem quatro candidatos. Os votos são
informados através de códigos. Os dados utilizados para a contagem dos
votos obedecem à seguinte codificação:
a) 1,2,3,4 = voto para os respectivos candidatos;
b) 5 = voto nulo;
c) 6 = voto em branco;
d) 0 = Sai do Sistema
*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //usar o temporizador antes do system clear 
struct Votos{
    int voto[4];
    int numNulo, numBranco;
};

int resultado(Votos votosDados){

       printf("A quantidade de votos para Vegeta: %d\n", votosDados.voto[0]);
       printf("A quantidade de votos para Babidi: %d\n", votosDados.voto[1]);  
       printf("A quantidade de votos para Piccolo: %d\n", votosDados.voto[2]);
       printf("A quantidade de votos para Gohan: %d\n", votosDados.voto[3]);
       printf("A quantidade de votos Nulos: %d\n", votosDados.numNulo);
       printf("A quantidade de votos em Branco: %d\n", votosDados.numBranco);
       return(0);
}

int main (){
     setlocale(LC_ALL, "");
//numReiniciar setado para 1 para que o loop fique infinito até 
//chegar no case default, onde o numReiniciar recebe 0 
//encerrando o loop 
   int voto, numReiniciar;
   Votos votosDados={}; // ={} --> significa colocar int voto[4] = {0}; para q os valores sejam zero nos vetores 

    printf("Digite o número de Pessoas que vão votar: ");
    scanf("%d", &numReiniciar);


 for (int i = 1; i <= numReiniciar ;i++){
    printf("------------------------\n");
    printf("- Vote 1 para Vegeta  --\n");
    printf("- Vote 2 para Babidi  --\n");
    printf("- Vote 3 para Piccolo --\n");
    printf("- Vote 4 para Gohan   --\n");
    printf("------------------------\n");
    printf("- Vote 5 para NULO    --\n");
    printf("- Vote 6 para BRANCO  --\n");
    printf("- Escolha 0 para SAIR --\n");
    printf("------------------------\n");
    scanf("%d", &voto);

    switch (voto){
//linhas 37 e 38, respectivamente, uma "seta" um tempo para de o comando de clear e reinicar o loop  
    case 1:
     printf("Seu voto foi salvo!\n" "Vegeta! ");
     votosDados.voto[0] += 1;
     sleep(3);
     system("cls");
        break;

    case 2:
     printf("Seu voto foi salvo!\n" "Babidi! ");
     votosDados.voto[1] += 1;
     sleep(3);
     system("cls");
        break;

    case 3:
     printf("Seu voto foi salvo!\n" "Piccolo! ");
     votosDados.voto[2] += 1;
     sleep(3);
     system("cls");
        break;

    case 4:
     printf("Seu voto foi salvo!\n" "Gohan! ");
     votosDados.voto[3] += 1;
     sleep(3);
     system("cls");
        break;
    
    case 5:
     printf("Seu voto foi salvo!\n" "NULO! ");
     votosDados.numNulo += 1;
     sleep(3);
     system("cls");
        break;
    
    case 6:
     printf("Seu voto foi salvo!\n" "Em Branco! ");
     votosDados.numBranco += 1;
     sleep(3);
     system("cls");
        break;
    
    default:
        i = numReiniciar;
        system("cls");
        break;
    }
  }

  resultado(v1,v2);
  resultado(votosDados);
}
