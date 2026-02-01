#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
int option;

printf("Escolha uma opção:\n");
printf("\n1 - Iniciar");
printf("\n2 - Ver Regras");
printf("\n3 - Cŕeditos");
printf("\n4 - Sair\n\n\n");
scanf("%d", &option);

switch(option){
case 1:
printf("Iniciando...");
break;
case 2:
printf("\n1. Não piratear a obra\n2. Utilizar com moderação\n3. Não desistir\n");
break;
case 3: 
printf("\nCriador - Joelson Moreira Silva\n");
break;
case 4:
printf("\nSaindo, Até Logo...\n");
break;
default:
printf("\nOperação Inválida\n");
}

return 0;
}