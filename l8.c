#include<stdio.h>
int main(){
    int num=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j>=i;j++){
            printf(" %d ",num*num);
            num;
        }
        printf("\n");
    }
}