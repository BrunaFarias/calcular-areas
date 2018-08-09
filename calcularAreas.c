/*Oficina Git - Controle de Versão
	Professor: Orlewilson B. Maia
	Equipe: Bruna Tatiane, Wendel Nascimento, Natanel Cruz
	Data: 08/08/2018
	Descrição: Calcular area do circulo tringulo equilatero e quadrado */

#include <stdio.h>

void areaTriangulo(){
	int base, altura;
	float area;

	printf(" insira a base do tringulo");
	scanf("%d", &base);
	printf(" insira a altura do tringulo");
	scanf("%d", &altura);

	area = ((base * altura)/2);
	//printf("A area do tringulo eh: %d", area );
		
}

void areaQuadrado(){
	int baseQ, alturaQ,areaQ;
	printf(" insira a base do tringulo");
	scanf("%d", &baseQ);
	printf(" insira a altura do tringulo");
	scanf("%d", &alturaQ);

	area = baseQ * alturaQ;
}
int main(){
	

}
