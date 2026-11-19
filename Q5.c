#include<stdio.h>
int main(){
    int n;
    printf("enter the number:\n");
    scanf("%d", &n);

    if(n%3==0 && n%5==0){
        printf("the number is divisible by both");
    }
        else if(n%3==0){
            printf("the number is divisible by 3");
        }
        else if(n%5==0){
            printf("the number is divisible by 5");
        }
        else{
            printf("the number is divisible by neither");
        }
    return 0;

}
