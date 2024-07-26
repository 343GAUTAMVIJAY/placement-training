
#include<stdio.h>
int main(){
    int dl;
    float fine=0.0;
    printf("Enter the number of days the member is late: ");
    scanf("%d",&dl);

    if(dl<=0){
        fine=0.0;
    }else if(dl<=5){
        fine=dl*0.5; 
    }else if(dl<=10){
        fine=5*0.5+(dl-5)*1.0;
    }else if(dl<=30){
        fine=5*0.5+5*1.0+(dl-10)*5.0;
    }else{
        printf("Membership cancelled due to returning the book %d days beyond 30 days.\n",dl-30);
        return 0;
    }
    printf("Fine for returning the book %d days late is Rs. %\.2f\n",dl,fine);
}
