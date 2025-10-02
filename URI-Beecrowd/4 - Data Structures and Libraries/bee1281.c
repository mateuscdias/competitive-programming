/*
Solution for problem 1281 (Going to the market)- Platform: Beecrowd
Author: Mateus Dias @mateuscdias
All Rights Reserved.
Created on Oct 1 2025
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct item{

    char name[52];
    double price;

} tProduct;

int main(void){

    int n;
    int m;
    int p;
    double total = 0;
    char name[52];
    int q;
    scanf("%d",&n);

    for(int i = 0; i < n; i++){

        scanf("%d",&m);
        tProduct products[m];

        for(int j = 0; j<m; j++){
            
            tProduct product;
            scanf("%s %lf",product.name,&product.price);

            products[j] = product;
        }

        scanf("%d",&p);

        for(int k = 0; k<p; k++){

            scanf("%s %d",name,&q);

            for(int l = 0; l < m; l++){
                
                if(!strcmp(products[l].name, name)){
                    total += q*products[l].price;
                    break;
                }
            }
        }

        printf("R$ %.2lf\n",total);
        total = 0;
    }
    return 0;
}