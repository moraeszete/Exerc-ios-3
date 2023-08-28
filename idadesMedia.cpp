
/* Faça um algoritmo que permita ao usuário informar a idade de quantas
pessoas ele desejar. Após isso, o algoritmo deve informar a quantidade das
pessoas maiores de idade e a média de idade das pessoas maiores de idade
informada.
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
//totalMaior = 0, deve estar zerado pois começa a somar apenas após as entradas de idade
//numMaiores = 0, Ppor ser um incremento, começando o zero para contar o numero de maiores 
   int numPessoas, idade, totalMaior=0, numMaiores=0;
   float mediaMaior;

    printf("Quantas pessoas serão informadas a lista: ");
    scanf("%d", &numPessoas);

 for (int i = 1; i <= numPessoas; i++) {
    printf("Informe a idade das %d pessoas: ", i);
    scanf("%d", &idade);

//Contador de maiores de idade, cada vez que o if é verdadeiro 
//cada verdade no if é incrementado uma pessoa à nummaiores
//cada idade maior ou igual a 18 é somada e guardada no totalMaior 
    if (idade >= 18) {
        totalMaior += idade;
        numMaiores++ ;
    }
 }
  
  if(numMaiores > 0) {
    mediaMaior =  (float) totalMaior/numMaiores ;
        printf("Quantidade de pessoas maiores de idade são: %d\n", numMaiores);
        printf("A media de idades dessas %d é de %.1f:",numMaiores ,mediaMaior);
  }else {
        printf("Não há pessoas maiores de idade!");
  }
}