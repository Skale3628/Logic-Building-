/*
          * 
       *  *  *
    *  *  *  *  *
 *  *  *  *  *  *  *
    *  *  *  *  *
       *  *  *
          *
*/

#include<stdio.h>

int main(){
    int rows=4;
    int space;
    int cols;
    for(int i=1;i<rows*2;i++){
        if(i<=rows){
            space=rows-i;
        }
        else{
            space=i-rows;
        }
        for(int sp=1;sp<=space;sp++){
            printf("   ");
        }
        if(i<=rows){
            cols=2*i-1;
        }else{
            cols=cols-2;
        }
        for(int j=1;j<=cols;j++){
            printf(" * ");
        }
        printf("\n");
    }

}