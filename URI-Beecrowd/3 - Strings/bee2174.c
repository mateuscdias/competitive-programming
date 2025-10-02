/*
Solution for problem 2174 (Pomekon Collection)- Platform: Beecrowd
Author: Mateus Dias @mateuscdias
All Rights Reserved.
Created on Oct 1 2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1003

int main(void){

    char pomekons[MAX][MAX];
    int n;
    char pomekon[MAX];
    int id = 0;
    int cmp;
    
    while(scanf("%d",&n) != EOF){
        
        for(int i = 0; i<n;i++){

            scanf("%s",pomekon);

            if(i == 0){
                strcpy(pomekons[0],pomekon);
                id++;
                continue;
            }

            for(int j = 0; j<id;j++){
                
                cmp = strcmp(pomekon,pomekons[j]);

                if(!cmp){
                    break;
                }
            }

            if(!cmp){
                continue;
            }else{
                strcpy(pomekons[id],pomekon);
                id++;
            }
        }

        printf("Falta(m) %d pomekon(s).\n",151-id);
        id = 0;
    }
    return 0;
}