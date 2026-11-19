#include<stdio.h>
int main(){
    float p;
    float r;
    float t;
    printf("enter the value of p\n");
    scanf("%f", &p);
        printf("enter the value of r\n");
    scanf("%f", &r);
        printf("enter the value of t\n");
    scanf("%f", &t);

    printf("the interest value is %f", p*r*t/100);
return 0;
}
