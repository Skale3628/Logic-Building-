/*
          1 
       2  2  2
    3  3  3  3  3
 4  4  4  4  4  4  4
    3  3  3  3  3
       2  2  2
          1
*/

#include<stdio.h>

int main(){
    int rows=4;
    int space;
    int cols;
    int num=0;
    for(int i=1;i<rows*2;i++){
        if(i<=rows){
            space=rows-i;
            cols=2*i-1;
            num++;
        }
        else{
            space=i-rows;
            cols=cols-2;
            num--;
        }
        for(int sp=1;sp<=space;sp++){
            printf("   ");
        }
        
        for(int j=1;j<=cols;j++){
         printf(" %d ",num);
        }
        printf("\n");
    }
}