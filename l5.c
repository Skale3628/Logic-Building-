/*
1 2 3 4
5 6 7 8
9 10 11 12
*/
#include<stdio.h>

int main(){
    int num=1;
    int row;
    for(row=1;row<=3;row++){
        for (int col=1;col<=4;col++){
            printf(" %d ",num);
            num++;
        }
        
        printf("\n");
    }
}