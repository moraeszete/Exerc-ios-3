/*5) Em uma eleição presidencial existem quatro candidatos. Os votos são
informados através de códigos. Os dados utilizados para a contagem dos
votos obedecem à seguinte codificação:
a) 1,2,3,4 = voto para os respectivos candidatos;
b) 5 = voto nulo;
c) 6 = voto em branco;
d) 0 = Sai do Sistema
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct votos{
    int voto[4];
    int numNulo=0, numBranco=0;
}

int resultado (){

       printf("A quantidade de votos para Vegeta: %d", votos.voto[0]);
       printf("A quantidade de votos para Babidi: %d", votos.voto[1]);  
       printf("A quantidade de votos para Piccolo: %d", votos.voto[2]);
       printf("A quantidade de votos para Gohan: %d", votos.voto[3]);
}

int main (){
//numReiniciar setado para 1 para que o loop fique infinito até 
//chegar no case default, onde o numReiniciar recebe 0 
//encerrando o loop 
    int voto, numReiniciar = 1;

 for (int i = 1; i = numReiniciar ;i++){
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
     votos.voto[0] ++;
     sleep(5);
     system("cls");
        break;

    case 2:
     printf("Seu voto foi salvo!\n" "Babidi! ");
     votos.voto[1] ++;
     sleep(5);
     system("cls");
        break;

    case 3:
     printf("Seu voto foi salvo!\n" "Piccolo! ");
     votos.voto[2] ++;
     sleep(5);
     system("cls");
        break;

    case 4:
     printf("Seu voto foi salvo!\n" "Gohan! ");
     votos.voto[3] ++;
     sleep(5);
     system("cls");
        break;
    
    case 5:
     printf("Seu voto foi salvo!\n" "NULO! ");
     votos.numNulo ++;
     sleep(5);
     system("cls");
        break;
    
    case 6:
     printf("Seu voto foi salvo!\n" "Em Branco! ");
     votos.numBranco ++;
     sleep(5);
     system("cls");
        break;
    
    default:
        numReiniciar = 0;
        system("cls");
        break;
    }
  }
}
