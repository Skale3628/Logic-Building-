/*
 1  2  3  4 
 *  1  2  3
 *  *  1  2
 *  *  *  1
*/

#include<stdio.h>
int main(){
    int row=4;
    for(int i=1;i<=row;i++){
        for(int j=1 ; j<i ; j++){
            printf(" ");
        }
      //  printf("\n");
   // }
    //for(int i=1;i<=4;i++){
        int num =1;
        for(int j=4;j>=i;j--){
            printf( " %d ",num);
            num++;
        }
        printf("\n");
    }
}
