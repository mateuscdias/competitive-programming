/*
Solution for problem 1171 (Number frequence)- Platform: Beecrowd
Author: Mateus Dias @mateuscdias
All Rights Reserved.
Created on Sep 23 2025
*/

#include <stdio.h>

void BubbleSort(int arr[], int tam){

    int troca = 1;
    int temp;

    while (troca){
        
        troca = 0;
        for(int i = 0; i < tam-1;i++){

            if(arr[i] > arr[i+1]){
                troca = 1;
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

int main(void){

    int n;
    scanf("%d",&n);

    int nums[n];
    int set[n];
    int freq[n];
    int s = 0,f = 0;

    for(int j = 0; j<n;j++){
        scanf("%d",&nums[j]);
    }
    BubbleSort(nums,n);
    for(int i = 0;i<n;i++){

        if(i == 0){
            set[s] = nums[i];
            freq[f] = 1;
            continue;
        }

        if(nums[i] == nums[i-1]){
            freq[f] += 1;
            continue;
        }

        if(nums[i] != nums[i-1]){
            f++;
            freq[f] = 1;
            s++;
            set[s] = nums[i];
        }
    }

    for(int i = 0; i<=s;i++){
        printf("%d aparece %d vez(es)\n",set[i],freq[i]);
    }
    return 0;
}