#include <stdio.h>
#include "proto.h"

int main(void){
int menu = 100;
int a = 100;

do{
printf("\n\n\n");

printf("==================================\n");
printf("           MENU PRINCIPAL         \n");
printf("==================================\n");
printf("\n");

printf(" [1] Ronan \n");

printf("\n");
printf("==================================\n");

printf("Ou veut tu aller : ");
scanf("%d",&menu);

printf("\n\n\n");


if (menu == 1 ){
	ronan();
}

/////////////////////////////////
printf("===========================\n");

printf("[0] Retourner au Menu ? \n");
printf("Reponse ");
scanf("%d",&a);

printf("=========================\n");

}while (a == 0);

return 0;
}
