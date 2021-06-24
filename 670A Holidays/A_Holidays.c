#include<stdio.h>
int main()
{
    int n, min, max;
    scanf("%d" , &n);
    if(n%7==6){
        min=((n/7)*2)+1;
    } 
    else{
        min=(n/7)*2;
    }
    if(n%7==1){
        max=min+1;
    }
    else if(n%7>=2){
        if(n%7==6)
         max=min+1;
    else
        max=min+2;

    }
    else
        max=min;
    printf("%d %d" , min, max);
    return 0;




}
