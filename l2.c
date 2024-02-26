//find odd numbers in range 10 to 20
/* expected output
121
169
225
289
361
*/
#include<stdio.h>

void main(){
    for(int i=10;i<=20;i++){
        if(i%2 !=0){
            printf("%d\n",i*i);
        }
    }
}