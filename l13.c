/*
 4  3  2  1 
 4  3  2
 4  3
 4
*/

#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        int num=4;
        for(int j=4;j>=i;j--){
            printf(" %d ",num);         
            num--;
        }
        printf("\n");
    }
}