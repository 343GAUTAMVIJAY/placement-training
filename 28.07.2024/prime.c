    #include<stdio.h>
    int main(){
        int num,i,flag=0;
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num<=1){
            printf("Not a prime number.\n");
            return 0;
        }

        for(i=2;i<=num/2;i++){
            if(num%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("Prime number.\n");
        }else{
            printf("Not a prime number.\n");
        }
    }