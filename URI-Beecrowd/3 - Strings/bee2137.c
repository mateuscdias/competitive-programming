/*
Solution for problem 2137 (The Library of Mr. Severino)- Platform: Beecrowd
Author: Mateus Dias @mateuscdias
All Rights Reserved.
Created on Sep 26 2025
*/

#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[],int tam){

    int trocas = 1;
    int temp;

    while(trocas){

        trocas = 0;

        for(int i = 0; i<tam-1; i++){
            if(arr[i] > arr[i+1]){
                
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                trocas = 1;
            }
        }
    }
    return;
}
int main(void){

    int t;

    while (scanf("%d",&t) != EOF){

        int arr[t];
        char num[5];

        for(int i = 0; i<t; i++){
            scanf("%s",num);
            arr[i] = atoi(num);
        }

        BubbleSort(arr,t);

        for(int j = 0; j<t;j++){
            printf("%04d\n",arr[j]);
        }
    }
    
    return 0;
}