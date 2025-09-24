/*
Solution for problem 1168 (LED)- Platform: Beecrowd
Author: Mateus Dias @mateuscdias
All Rights Reserved.
Created on Sep 23 2025
*/

#include <stdio.h>
#include <string.h>
 
int main() {
 
    int n;
    scanf("%d",&n);

    int conversion[10] = {2,5,5,4,5,6,3,7,6,6};

    for(int i = 0; i<n;i++){

        char num[100];
        scanf("%s",num);
        int out = 0;

        for(int j = 0; j<strlen(num); j++){

            int num_i = num[j] - '0';
            
            if(num_i == 0){
                out += conversion[9];
                continue;
            }

            out += conversion[num_i-1];
        }

        printf("%d leds\n",out);

    }
 
    return 0;
}
