/*
exemplo digite um valor numerico : 10, 20, 30, 40, 50, 60, 70
vator dividido pelo maior valor : 00, 0,85, 0,71, 0,57, 0,42, 0,28, 0,14.
maior valor :70

Dados de entrada :valor[7] numerico 
processamento: encontrar o maior do vetor , calcular dividir todo o vetor pelo o maior
dados saida: dados todos dividos e qual era o maior valor do vetor encontrado

poderia ser feito de outra forma inves de usar for poderia usar do while pois sei que precisa ser executado pelo menos uma vez 

*/


/*#include <stdio.h>

main() {
  int valor[7], i, maior;
  float div = 0;

  for (i = 0; i < 7; i++) {
    printf("digite um valor numerico:\n");
    scanf("%d", &valor[i]);
    
  }
maior= valor[0];

  for(i=0;i <7 ;i++){

    if(valor[i]> maior){
      maior= valor[i];
    }
  }


for(i=0;i<7;i++){
  div= (float)valor[i]/maior;
  printf("\n%.2f", div);
}

printf("\no maior eh %d", maior);


return 0;


}
*/