#include <stdio.h>

int main(){

	//Variaveis
	float M, K;

	printf("Digite a velocidade a ser convertida em KM(quilometro por hora): ");
	scanf("%f", &K);

	M = K/3.6;

	printf("A conversação para MS(metro por segundo) é : %.2f", M);
}
