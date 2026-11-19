#include<stdio.h>
int main(){
    float c;
    float f;

    printf("enter the value of celsius\n");
    scanf("%f",&c);

    f=(c*(9.0/5.0))+32;
    printf("celsius converted to fahrenheit:%f\n", f);

    printf("enter the value of fahrenheit\n");
    scanf("%f",&f);

    c=(f-32)*5.0/9.0;
    printf("temperature in celsius=%f\n", c);
    return 0;
}
