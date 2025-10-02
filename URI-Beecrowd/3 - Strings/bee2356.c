/*
Solution for problem 2356 (Bacteria I)- Platform: Beecrowd
Author: Mateus Dias @mateuscdias
All Rights Reserved.
Created on Sep 27 2025
*/

#include <stdio.h>
#include <string.h>

#define MAX_STRING 102

int main(void){

    char d[MAX_STRING];
    char s[MAX_STRING];
    
    
    while (scanf("%s",d) != EOF){
        
        scanf("%s",s);

        if(strstr(d,s)){
            puts("Resistente");
        }else{
            puts("Nao resistente");
        }
    }
    
    return 0;
}