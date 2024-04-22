/*
          1 
       1  2  3
    1  2  3  4  5
 1  2  3  4  5  6  7
*/

#include<stdio.h>
int main(){
    int row=4;
    for(int i=1;i<=row;i++){
        for(int j=row;j>i;j--){
            printf("   ");
        }
        //printf("\n");
   // }
    int num =1;
    //for(int i=1;i<=4;i++){
        for(int j=1;j<=2*i-1;j++){
            printf(" %d ",num);
            num++;
        }
        printf("\n");
   // }
}
}