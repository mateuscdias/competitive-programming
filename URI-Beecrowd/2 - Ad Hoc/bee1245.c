/*
Solution for problem 1245 (Lost boots)- Platform: Beecrowd
Author: Mateus Dias @mateuscdias
All Rights Reserved.
Created on Sep 23 2025
*/

#include <stdio.h>

#define MAX_ARRAY 10000

int main(void){

    int n;
    int tsize;
    char tside;
    int id = 0;
    int found = 0;
    int out = 0;
    
    while (scanf("%d",&n) != EOF){
        
        int size[MAX_ARRAY];
        int side[MAX_ARRAY];
        for(int i = 0; i<n;i++){

            scanf("%d %c",&tsize,&tside);

            if(i == 0){
                size[0] = tsize;
                side[0] = tside;
                id++;
                continue;
            }

            for(int j = 0; j < id;j++){

                if(size[j] == tsize && side[j] != tside){
                    size[j] = -1;
                    side[j] = -1;
                    out++;
                    found = 1;
                    break;
                }
            }

            if(!found){
                size[id] = tsize;
                side[id] = tside;
                id++;
                continue;
            }

            found = 0;
        }

        printf("%d\n",out);
        out = 0;
        id = 0;
        found = 0;
    }
    
    return 0;
}