/* main.c */
#include <stdio.h>
#include "token.h"

extern int yylex();

int main () {
// nome da funçao retorna o proximo token é yylex()

    token_t token = -1;
    while (token != EOL){
        token = yylex();                    // call yylex()
        if(token == ERROR  ){
            printf("error lexico\n");
        }
        else
        printf("Código do token: %d\n",token);
    }



}
