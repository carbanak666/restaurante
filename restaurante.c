/*
+=======================+
+CODIGO FEITO POR SOLDAT+
+=======================+
*/

/*
+==============================+
+CODIGO FEITO NO DIA 16/02/2021+
+==============================+
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
+============================+
+ tabela de comidas e preços +
+============================+
*/
#define PIZZA "pizza custa - 20 reais\n"
#define HAMBURGUER "hambuguer custa - 30 reais\n"
#define CHURRASCO "churrasco custa - 40\n" 

/*
+===================+
+ tabela de rodizio +
+===================+
*/

#define PIZZA_RODIZIO "rodizio de pizza custa - 40 reais\n"
#define HAMBURGUER_RODIZIO "rodizio de hambuguer custa - 50 reais\n"
#define CHURRASCO_RODIZIO "rodizio de churrasco custa - 80 reais\n"


#define VAZIO NULL

void criador() {
    printf("olá meu codenome e soldat, e sou iniciante em programação, espero que eu evolua muito pela frente :))\n");
}
void help() {
     
 printf("tabela - 1\n\n");
 printf("digito 1 - escolhe a pizza\n");
 printf("digito 2 - escolhe o hambuguer\n");
 printf("digito 3 - escolhe o churrasco\n");
 printf("\n");

 printf("tabela - 2\n\n");
 printf("digito 4 - escolhe o rodizio de pizza\n");
 printf("digito 5 - escolhe o rodizio de hambuguer\n");
 printf("digito 6 - escolhe o rodizio de churrasco\n");
 printf("\n");
 printf("modo de usar ./restaurante (ea opção que você quer)\n");
 printf("para ver o criador basta dar um ./restaurante creator\n");
 
}

int escolha;

void restaurante(int escolha) {

   switch(escolha) {
 
            case 1:
                printf("você comprou uma pizza que custa 20 reais\n");
                break;
            case 2:
                printf("você comprou um hambuguer que custa 30 reais\n");
                break;
            case 3:
                printf("você comprou um churrasco que custa 40 reais\n");
                break;
            case 4:
                printf("você pegou um rodizio de pizza que custa 40 reais\n");
                break;
            case 5:
                printf("você pegou um rodizio de hambuguer que custa 50 reais\n");
                break;
            case 6:
                printf("você pegou um rodizio de churrasco que custa 80 reais\n");
                break;
            default:
                printf("opção invalida\n");

   }

}


int main(int argc, char *argv[])
{

   if(argv[1] == VAZIO){
   	  help();
   }
   else {

   if(0 == strcmp(argv[1], "1")){
   	  restaurante(1);
   }

   if(0 == strcmp(argv[1], "2")) {
      restaurante(2);
   }

   if(0 == strcmp(argv[1], "3")) {
      restaurante(3);
   }

   if(0 == strcmp(argv[1], "4")) {
      restaurante(4);
   }

   if(0 == strcmp(argv[1], "5")) {
      restaurante(5);
   }

   if(0 == strcmp(argv[1], "6")) {
      restaurante(6);
   }
   if(0 == strcmp(argv[1], "creator")){
   	  criador();
   }

   }
   return 0;
}