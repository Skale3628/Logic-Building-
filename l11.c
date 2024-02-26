// 7 42 210 840 2520 5040 5040

#include<stdio.h>
/*
int main(){
    int store=1;
    int x;
    scanf( "%d", &x);
    for(int i=x;i>=1;i--){
        store=store*i;
        printf(" %d",store);
    }
}

*/

//------------------------------------------------------------------------------------------------------
//with while loop
int main(){
int num=7;
int store=1;
while(num>=1){
    store=store*num;
    num--;
}
printf("%d\n",store);
}