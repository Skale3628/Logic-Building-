/*
 *  *  *  *  *  *  * 
   *  *  *  *  *
     *  *  *
       *
*/


#include<stdio.h>

int main(){
    int row=4;
    for(int i=1;i<=row;i++){
        for(int j=1;j<i;j++){
            printf("  ");
        }
    int num=1;
    for(int j=1;j<=(row*2-2*i+1);j++){
        printf( " * " );  
        num++;
    }
    printf("\n");
}
}