/*import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        // Please write your code here.
    }
}*/

import java.util.Scanner;

public class Main{

    public static int gcd(int n ,int m){
        if(m==0&&n==0){
            return -1;
        }
        if(m==0){
            return Math.abs(n);
        }
        if(n==0){
            return Math.abs(m);
        }
        return gcd(m,n%m);
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int result=gcd(n,m);
        if(result==-1){
            System.out.print("에러");
            return ;
        }
        System.out.print(result);
        
    }
}