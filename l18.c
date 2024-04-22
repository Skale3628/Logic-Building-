/* A
       1 
     1  2
   1  2  3
 1  2  3  4
*/
/*************************************
 * B
        1 
     2  3
   4  5  6
 7  8  9  10
 ******************************************/

#include<stdio.h>
int main(){

    int rows=4;
    int num=1;                          //------> B
    for(int i=1;i<=rows;i++){
        for(int j=rows;j>i;j--){
            printf("  ");
    }
    //printf("\n");
//}     
//int num=1;                           // ---->> A
//for (int i=1;i<=rows;i++){
    for(int j=1;j<=i;j++){
        printf(" %d ",num);
        num++;
    }
    printf("\n");
//}
}
}