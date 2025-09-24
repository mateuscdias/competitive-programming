/*
Solution for problem 1553 (Frequent asked questions)- Platform: Beecrowd
Author: Mateus Dias @mateuscdias
All Rights Reserved.
Created on Sep 23 2025
*/

#include <stdio.h>

#define MAX_ARRAY 1000

int main(void){

    int n,k;
    int qst[MAX_ARRAY];
    int qtd[MAX_ARRAY];
    int num;
    int id = 0;
    int isin = 0;
    int out = 0;
    
    while (1){
        
        scanf("%d%d",&n,&k);

        if(n == 0 && k == 0){
            break;
        }

        for(int i = 0; i<n;i++){
            scanf("%d",&num);

            if(id == 0){
                qst[0] = num;
                qtd[0] = 1;
                id++;
                continue;
            }

            for(int j = 0; j<id;j++){

                if(qst[j] == num){
                    qtd[j] += 1;
                    isin = 1;
                    continue;
                }
            }

            if(!isin){
                qst[id] = num;
                qtd[id] = 1;
                id++;
                continue;
            }

            isin = 0;
        }

        for(int l = 0; l < id; l++){

            if(qtd[l] >= k){
                out++;
            }
        }

        printf("%d\n",out);
        isin = 0;
        out = 0;
        id = 0;
        
    }
    
    return 0;
}