#include<stdio.h>

int main(){
    float temp;
    char unit;

    printf("Enter temperature(C for Celsius,F for Fahrenheit): ");
    scanf("%f %c",&temp,&unit);

    if(unit=='C' || unit=='c'){
        temp=temp*9/5+32;
        printf("Temperature in Fahrenheit: %.2f\n",temp);
    } else if(unit=='F' || unit=='f'){
        temp=(temp-32)*5/9;
        printf("Temperature in Celsius: %.2f\n",temp);
    } else{
        printf("Invalid unit!\n");
    }

    return 0;
}
