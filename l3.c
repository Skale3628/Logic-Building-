//wap to print the n divisible by 3 and 7 between given range 80 to 30 inr reverse order 

#include<stdio.h>

void main(){
    for(int i=80;i>=30;i--){
        if(i%3==0 && i%7==0){
            printf("%d\n",i);
        }
    }
}