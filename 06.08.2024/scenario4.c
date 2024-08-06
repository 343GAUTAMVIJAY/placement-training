#include<stdio.h>

int main(){
    float marks[5],sum=0,average;
    printf("Enter marks for 5 subjects:\n");

    for(int i=0;i<5;i++){
        printf("Subject %d: ",i+1);
        scanf("%f",&marks[i]);
        sum+=marks[i];
    }

    average=sum/5;
    printf("Average Grade: %.2f\n",average);

    return 0;
}
