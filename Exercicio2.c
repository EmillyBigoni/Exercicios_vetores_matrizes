/*exemplo : valores inseridos no vetor A:1,2,3,4,5
valores inseridos no vetor B:1,2,3,4,5,6,7
valores em comum entre os vetores A e B:1,2,3,4,5

Dados de entrada : numeros do vetor A, numeros do vetor B
processamento: Ler todo o vetor de A e B e comparar os elementos iguais entre os vetores 
dados saida:elementos em comuuns entre os vetores

 poderia ser feito de outra maneira usando o for inves de do while , pois tenho um tamanho fixo adquirido 
*/

/*#include <stdio.h>

int main() {
  int vetA[5], vetB[7], vetc[5], i = 0, j = 0, z = 0;

  do {
    printf("Digite o numero %d do vetor A: \t", i + 1);
    scanf("%d", &vetA[i]);
    i++;
  } while (i < 5);

  do {
    printf("Digite o numero %d do vetor B: \t", j + 1);
    scanf("%d", &vetB[j]);
    j++;
  } while (j < 7);

  printf("Os elementos comuns entres os vetores sao: \n\n");
  for (i = 0; i < 7; i++) {
    for (j = 0; j < 5; j++) {
      if (vetA[i] == vetB[j]) {
        vetc[z++] = vetA[i];
      }
    }
  }

  for (i = 0; i < z; i++) {
    printf("%d\t", vetc[i]);
  }
  return 0;
}*/