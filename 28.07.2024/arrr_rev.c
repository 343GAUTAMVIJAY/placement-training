    #include<stdio.h>
    void reverseArray(int arr[],int start,int end){
        while(start<end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }

    int main(){
        int arr[]={1,2,3,4,5};
        int size=sizeof(arr)/sizeof(arr[0]);

        reverseArray(arr,0,size-1);

        printf("Reversed array: ");
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");

    }
