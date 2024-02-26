/*
 *  *  *  * 
 *  *  *
 *  *
 *
*/

#include<stdio.h>
int main(){
    //int num =1;
    for(int i=1;i<=4;i++){
        for(int j=4;j>=i;j--){
            printf(" * ");
            //num++;
        }
        printf("\n");
    }
}