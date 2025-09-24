/*
Solution for problem 1318 (Fake tickets)- Platform: Beecrowd
Author: Mateus Dias @mateuscdias
All Rights Reserved.
Created on Sep 23 2025
*/

#include <stdio.h>

void BubbleSort(int arr[], int tam){

    int trocas = 1;
    int temp;

    while(trocas !=0){

        trocas = 0;

        for(int i = 0; i<tam-1;i++){

            if(arr[i] > arr[i+1]){

                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                trocas = 1;
            }
        }
    }
}

int main(void){

    int n,m;

    while (1){
        
        scanf("%d%d",&n,&m);

        if(n == 0 && m == 0){
            break;
        }

        int tkts[m];

        for(int i = 0; i<m;i++){
            scanf("%d",&tkts[i]);
        }

        BubbleSort(tkts,m);
        int out = 0;
        int ent = 0;
        for(int j = 0; j<m;j++){

            if(j == 0){
                continue;
            }

            if(tkts[j] == tkts[j-1] && !ent){
                out++;
                ent = 1;
            }

            if(tkts[j] != tkts[j-1]){
                ent = 0;
                continue;
            }
        }

        printf("%d\n",out);
    }
    
    return 0;
}