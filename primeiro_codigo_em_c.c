#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	printf("* Seja bem vindo ao jogo do milhao *\n");

	int segundos = time(0);
	srand(segundos);

	int numerogrande = rand();


	int ns, chute, tentativas, ganhou;
	ns=numerogrande % 100;
	tentativas=1;
	ganhou=0;
	double pontos=1000;
	int nivel;
	int numerodetentativas;
	int acertou = (chute==ns);

	printf("Qual nivel de dificuldade prefere?\n");
	printf("(1)Facil (2) Medio (3) Dificil\n\n");
	printf("Escolha: ");
	scanf("%d", &nivel);

		switch(nivel) {
			case 1:
				numerodetentativas = 20;
				break;
			case 2:
				numerodetentativas = 15;
				break;
			case 3:
				numerodetentativas = 6;
				break;
		}
		

		for(int i = 1; i<=numerodetentativas; i++) {
			printf("Tentativa %d de %d\n", i, numerodetentativas);
			printf("Qual eh o seu chute? ");
			scanf("%d", &chute);
			
			if (chute<0){
				printf("Voce nao pode digitar numeros negativos!\n");
				continue;
			}
				acertou = (chute == ns);
				int maior=(chute > ns);
				if(acertou){
					printf("Parabens voce acertou\n");
					break;
				} else if(maior){
					printf("Seu chute eh maior do que o numero correto\n");
				} else {
					printf("Seu chute eh menor do que o numero certo\n");
				}
			tentativas++;
		double pontosperdidos = abs(chute - ns)/2.0;
		pontos = pontos -pontosperdidos;
		}	
	printf("Fim de jogo.\n");	
	if(acertou){
		printf("Voce acertou em %d tentativas.\n", tentativas-1);
		printf("Sua pontuacao foi de: %.1f\n", pontos);
	} else { printf("Voce perdeu, tente novamente.\n");
}
}
