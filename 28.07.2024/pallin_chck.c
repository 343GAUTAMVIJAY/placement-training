    #include<stdio.h>
    #include<string.h>
    int main(){
        char str[100],rev[100];
        printf("Enter a string: ");
        scanf("%s",str);

        int len=strlen(str);
        for(int i=0;i<len;i++){
            rev[i]=str[len-1-i];
        }
        rev[len]='\0';

        if(strcmp(str,rev)==0){
            printf("The string is a palindrome.\n");
        } else {
            printf("The string is not a palindrome.\n");
        }

    }