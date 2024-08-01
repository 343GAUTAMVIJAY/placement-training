import java.util.Scanner;

public class fib{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a=0,b=1,n=10;
        for(int i=0;i<n;i++){
            System.out.println(a+ " ");
            int nxt=a+b;
            a=b;
            b=nxt;
        }
        
    }
}
