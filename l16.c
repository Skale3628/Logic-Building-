/*
*  *  *  1 
 *  *  1  2
 *  1  2  3
 1  2  3  4
*/

#include<stdio.h>
int main(){

    int rows=4;
    for(int i=1;i<=rows;i++){
        for(int j=rows;j>i;j--){
            printf(" * ");
    }
    //printf("\n");
//}
int num=1;
//for (int i=1;i<=rows;i++){
    for(int j=1;j<=i;j++){
        printf(" %d ",num);
        num++;
    }
    printf("\n");
//}
}
}