/*
Solution for problem 2569 (The 7x1 witch)- Platform: Beecrowd
Author: Mateus Dias @mateuscdias
All Rights Reserved.
Created on Oct 1 2025
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_OP 20

int main(void){

    int a,b;
    char op;

    scanf("%d %c %d",&a,&op,&b);

    char sa[MAX_OP],sb[MAX_OP];

    sprintf(sa,"%d",a);
    sprintf(sb,"%d",b);

    for(int i = 0; i<strlen(sa);i++){
        if(sa[i] == '7'){
            sa[i] = '0';
        }
    }

    for(int j = 0; j<strlen(sb);j++){
        if(sb[j] == '7'){
            sb[j] = '0';
        }
    }

    a = atoi(sa);
    b = atoi(sb);

    int result = 0;
    char res[MAX_OP];

    if(op == '+'){

        result = a+b;
        sprintf(res,"%d",result);

        for(int k = 0; k<strlen(res);k++){
            
            if(res[k] == '7'){
                res[k] = '0';
            }
        }

        result = atoi(res);

        printf("%d\n",result);
    }else{
        result = a*b;
        sprintf(res,"%d",result);

        for(int k = 0; k<strlen(res);k++){
            
            if(res[k] == '7'){
                res[k] = '0';
            }
        }

        result = atoi(res);

        printf("%d\n",result);
    }
    return 0;
}