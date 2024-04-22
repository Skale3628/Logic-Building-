/*
          1 
       1  2  1
    1  2  3  2  1
 1  2  3  4  3  2  1
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
           if(j<i){
            printf( " %d ",num); 
            num++;
           }else{
            printf(" %d ",num);
            num--;
           }
        }
        printf("\n");
   // }
}
}