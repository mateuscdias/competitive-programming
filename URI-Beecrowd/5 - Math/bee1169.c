/*
Solution for problem 1169 (Grains in a chessboard)- Platform: Beecrowd
Author: Mateus Dias @mateuscdias
All Rights Reserved.
Created on Sep 23 2025
*/

#include <stdio.h>

int main() {
 
    int n,x;
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++){
        scanf("%d",&x);
        unsigned long long int grains = 0;
        unsigned long long int sum[x];
        unsigned long long int pow[x];
        sum[0] = 1;
        pow[0] = 1;

        for(int j = 1; j<x;j++){
            pow[j] = pow[j-1]*2;
            sum[j] = pow[j] + sum[j-1];
        }

        grains = sum[x-1];
        grains = grains/12000;
        printf("%llu kg\n",grains);
    }
    
    return 0;
}