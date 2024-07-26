#include<stdio.h>
int main() 
{
    int x; 
    float a,b; 
    float t_sales,t_cost,profit;

    printf("Enter the no. of copies sold: ");
    scanf("%d",&x);
    printf("Enter the selling price per copy : ");
    scanf("%f",&a);
    printf("Enter the cost price per copy: ");
    scanf("%f",&b);
    
    t_sales=x*a;
    t_cost=x*b+100;
    profit=t_sales-t_cost;
    printf("\nTotal sales : Rs.%.2f\n",t_sales);
    printf("Totl cost: Rs. %.2f\n",t_cost);
    printf("Profit: Rs. %.2f\n",profit);

}
