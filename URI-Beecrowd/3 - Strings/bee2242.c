/*
Solution for problem 2242 (Huaauhahhuahau)- Platform: Beecrowd
Author: Mateus Dias @mateuscdias
All Rights Reserved.
Created on Sep 23 2025
*/

#include <stdio.h>
#include <string.h>

#define MAX_STRING 51
void FillVocals(char laugh[],char vocals[]){
    
    int j = 0;
    for(int i = 0; i< strlen(laugh);i++){

        char ch = laugh[i];
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            vocals[j] = ch;
            j++;
        }else if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            vocals[j] = ch;
            j++;
        }
    }

    vocals[j] = '\0';
}

int IsPalindrome(char vocals[]){

    /*two pointers*/
    int l = 0;
    int r = (int) strlen(vocals) - 1;

    if(l == r){
        return 1;
    }

    int isPal = 1;
    while(r > l){

        if(vocals[r] != vocals[l]){
            isPal = 0;
            break;
        }

        r--;
        l++;
    }

    if(isPal){
        return 1;
    }else{
        return 0;
    }
}
int main(void){

    char laugh[MAX_STRING];
    fgets(laugh,MAX_STRING,stdin);

    char vocals[MAX_STRING];
    FillVocals(laugh,vocals);

    int isPalindrome = IsPalindrome(vocals);

    if(isPalindrome){
        puts("S");
    }else{
        puts("N");
    }
    return 0;
}