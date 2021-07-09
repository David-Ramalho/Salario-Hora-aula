#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float salarioask(float h, float ha);

int main()
{
	float wage, wagetotal;
	int i,n, j, mostrar;
	float hora,horaclass;
	
	printf("Queres Cadastrar ou verificar os salarios:\n 1- cadastrar\n 2 verificar\n 0- sair\n");
	scanf("%d", &n);
	
	

	if(n==1)
	{
		wage=salarioask(hora, horaclass);
	}
	if(n==2)
	{
		wage=salarioask(hora, horaclass);
		printf("O salario do mês é:%f " ,wage);
	}
	
	else
	{
	
	printf("Queres Cadastrar ou verificar os salarios:\n 1- cadastrar\n 2- verificar\n");
	scanf("%d", &n);
}
	
	
	
	
	return 0;
}

float salarioask(float h, float ha){
float ht;

printf("Quantas horas fez no mês?");
		scanf("%f", &h);
		
		printf("\nQual sua hora aula?");
		scanf("%f", &ha);
		
		ht=h*ha;
		
		return ht;
			}