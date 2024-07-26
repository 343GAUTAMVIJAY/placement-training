#include<stdio.h>
int main(){
    float num1,num2,res;

    printf("Enter the 1st number: ");
    scanf("%f",&num1);
    printf("Enter the 2nd number: ");
    scanf("%f",&num2);
    if(num1>num2){
        res=num1/num2; 
        printf("%.2f/%.2f = %.2f\n",num1,num2,res);
    }
    else{
        res=num1*num2;
        printf("%.2f*%.2f = %.2f\n",num1,num2,res);
    }

}
