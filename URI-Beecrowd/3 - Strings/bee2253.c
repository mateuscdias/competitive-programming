/*
Solution for problem 2253 (Passwords Validator)- Platform: Beecrowd
Author: Mateus Dias @mateuscdias
All Rights Reserved.
Created on Sep 23 2025
*/

#include <stdio.h>
#include <string.h>

#define MAX_STRING 2000

void RemoveEOL(char str[]){

    for(int i = 0; i< (int) strlen(str);i++){

        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }
    }
}

int HasUpper(char str[]){

    for(int i = 0; i< (int) strlen(str);i++){

        if(str[i] >= 'A' && str[i] <= 'Z'){
            return 1;
        }
    }

    return 0;
}

int HasLower(char str[]){
    
    for(int i = 0; i< (int) strlen(str);i++){

        if(str[i] >= 'a' && str[i] <= 'z'){
            return 1;
        }
    }

    return 0;
}

int HasNum(char str[]){
    
    for(int i = 0; i< (int) strlen(str);i++){

        if(str[i] >= '0' && str[i] <= '9'){
            return 1;
        }
    }

    return 0;
}

int HasSpecChars(char str[]){

    for(int i = 0; i<(int) strlen(str); i++){

        if(str[i] < '0'){
            return 1;
        }else if (str[i] > '9' && str[i] < 'A'){
            return 1;
        }else if(str[i] > 'Z' && str[i] < 'a'){
            return 1;
        }else if (str[i] > 'z'){
            return 1;
        }
        
    }

    return 0;
}

int main(void){

    char str[MAX_STRING];
    while(fgets(str,MAX_STRING,stdin) != NULL){

        RemoveEOL(str);
        int upper = HasUpper(str);
        int lower = HasLower(str);
        int nums = HasNum(str);
        int specs = HasSpecChars(str);
        int size = ((int) strlen(str) >= 6 && (int) strlen(str) <= 32) ? 1:0;
        
        if(upper && lower && nums && !specs && size){
            puts("Senha valida.");
        }else{
            puts("Senha invalida.");
        }
     
    }

    return 0;
}