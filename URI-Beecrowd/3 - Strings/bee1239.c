/*
Solution for problem 1239 (Bloggo Shortcuts)- Platform: Beecrowd
Author: Mateus Dias @mateuscdias
All Rights Reserved.
Created on Oct 3 2025
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_BLOGGO 250
#define MAX_TEXT 250

void RemoveEOL(char *str){

    for(int i = 0; i<strlen(str);i++){

        if(str[i] == '\n'){
            str[i] = '\0';
            return;
        }
    }
}

void ReplaceAsterisks(char *text, char *bloggo){

    int last = 0;
    int idx = 0;

    for(int i = 0; i<strlen(text);i++){

        if(text[i] == '*'){

            if(last){
                bloggo[idx] = '<';
                bloggo[idx+1] = '/';
                bloggo[idx+2] = 'b';
                bloggo[idx+3] = '>';

                idx += 4;
                last = 0;
                continue;
            }

            bloggo[idx] = '<';
            bloggo[idx+1] = 'b';
            bloggo[idx+2] = '>';
            last = 1;
            idx += 3;
            continue;
        }

        bloggo[idx] = text[i];
        idx++;
}
    bloggo[idx] = '\0';
    return;
}

void ReplaceUnderlines(char *text, char *bloggo){

    int last = 0;
    int idx = 0;

    for(int i = 0; i<strlen(text);i++){

        if(text[i] == '_'){

            if(last){
                bloggo[idx] = '<';
                bloggo[idx+1] = '/';
                bloggo[idx+2] = 'i';
                bloggo[idx+3] = '>';

                idx += 4;
                last = 0;
                continue;
            }

            bloggo[idx] = '<';
            bloggo[idx+1] = 'i';
            bloggo[idx+2] = '>';
            last = 1;
            idx += 3;
            continue;
        }

        bloggo[idx] = text[i];
        idx++;
}
    bloggo[idx] = '\0';
    return;
    
}
int main(void){

    char text[MAX_TEXT];
    char bloggo[MAX_BLOGGO];

    while(fgets(text,MAX_TEXT,stdin) != NULL){

        RemoveEOL(text);
        ReplaceAsterisks(text,bloggo);
        strcpy(text,bloggo);
        ReplaceUnderlines(text,bloggo);
        printf("%s\n",bloggo);

        
    }
    return 0;
}