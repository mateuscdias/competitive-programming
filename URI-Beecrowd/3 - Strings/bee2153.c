/*
Solution for problem 2153 (Sanduicheiche)- Platform: Beecrowd
Author: Mateus Dias @mateuscdias
All Rights Reserved.
Created on Sep 26 2025
*/

#include <stdio.h>
#include <string.h>

#define MAX_STRING 32
int main(void){

    char str[MAX_STRING];
    char repeat[MAX_STRING];
    char out[MAX_STRING];
    int isRepeat = 0;

    while (scanf("%s",str) != EOF){
        
        for(int i = strlen(str)/2;i<strlen(str);i++){
            
            for(int j = 0; j<i;j++){
                out[j] = str[j];
            }
            out[i] = '\0';
            for(int k = i; k<strlen(str); k++){
                repeat[k-i] = str[k];
            }
            repeat[strlen(str)-i] = '\0';

            if(strstr(out,repeat)){

                isRepeat = 1;
                break;
            }
        }

        if(!isRepeat){
            puts(str);
            continue;
        }

        puts(out);
        isRepeat = 0;
    }
    
    return 0;
}