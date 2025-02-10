#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int numberLetters, nomeCity, opcao;
    char typeComparison;
    float tamanhoCity, result, PIB, areaCity;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1. insira os dados das cidades\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    switch (opcao)
  {
  case 1:
      // Entrada dados cidade
      printf("Digite o nome da cidade: ");
      scanf("%d", &nomeCity);
      printf("Digite o PIB: ");
      scanf("%f", &PIB);
      printf("Digite a area da cidade : ");
      scanf("%f", &areaCity);
      printf("Digite o tamanho: ");
      scanf("%f", &tamanhoCity);

      result = (areaCity && tamanhoCity ? "Cidade 1 tem maior população.\n" : "Cidade 2 tem maior população.\n" );
      printf("A média do estudante é: %.2f\n", result);
      break;
     
      case 2:
      printf("Digite a média do estudante: ");
      scanf("%f", &result);
     if (result >= 5000) {
        printf("Status: Cidade grande\n");
      } else if (result >= 5000) {
        printf("Status: cidade media\n");
      } else {
        printf("Status: cidade reprovada\n");
      }
      break;
      case 3:

      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  };

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
