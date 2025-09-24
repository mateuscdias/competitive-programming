/*
Solution for problem 1551 (Complete sentence)- Platform: Beecrowd
Author: Mateus Dias @mateuscdias
All Rights Reserved.
Created on Sep 23 2025
*/

#include <stdio.h>
#include <string.h>

#define MAX_STRING 1002

int CalculateAlphabet(char str[]){

    char set[27];
    int l = 0;
    for(int j = 0; j<strlen(str);j++){

        if(str[j] >= 'a' && str[j] <= 'z'){
            set[0] = str[j];
            l = j;
            break;
        }
    }

    int k = 1;
    int skip = 0;
    for(int i = l; i<strlen(str);i++){

        char ch = str[i];

        if(ch >= 'a' && ch <= 'z'){

            for(int j = 0; j<k; j++){
                
                if(ch == set[j]){
                    skip = 1;
                    break;
                }
            }

            if(skip){
                skip = 0;
                continue;
            }

            set[k] = ch;
            k++;
        }
    }

    set[k] = '\0';
    return (int) strlen(set);
}

int main(void){

    int n;
    scanf("%d",&n);
    getchar();
    char str[MAX_STRING];

    for(int i = 0; i<n;i++){

        fgets(str,MAX_STRING,stdin);

        int qtdLetras = CalculateAlphabet(str);

        if(qtdLetras == 26){
            puts("frase completa");
            continue;
        }else if(qtdLetras >= 13){
            puts("frase quase completa");
        }else{
            puts("frase mal elaborada");
        }
    }
    return 0;
}