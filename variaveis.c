#include <stdio.h>
#include <string.h>

int main () {
	
	int idade = 23;
	double salario = 5800.50, altura = 1.67;
	char genero = 'F';
	char nome[50] = "Hashiley";

/* Na linguagem C para dar valor a uma variavel, basta usar =
na frente do nome da varíavel para atribuir um valor inicial
em casos de nome,não é possível usar o ex: nome = hashiley
pois a linguagem C tem um nível de abstração baixo, para dar
um valor que seja mais que 1 caractere, deve-se usar STRCPY
antes do nome da variavel, seguido pela mesma e o valor dado
a ela, entre parenteses*/
	
	printf("IDADE = %d\n", idade);
	printf("SALARIO = R$ %.2lf\n",salario);
	printf("ALTURA = %.2lf\n", altura);
	printf("GENERO = %c\n", genero);
	printf("NOME = %s\n", nome);
	 
	return 0;
}
	

/* A linguagem C aceita atribuição diretamente na delcaração
da variável, inclusive para texto. Por exemplo:

int main () {
	
	int idade = 23;
	double salario = 5800.50, altura = 1.67;
	char genero = 'F';
	char nome[50] = "Hashiley";  */

