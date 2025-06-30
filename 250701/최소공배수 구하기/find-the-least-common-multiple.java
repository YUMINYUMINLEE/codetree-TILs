import java.util.Scanner;

public class Main {

    public static int lcm(int n, int m ,int result){
        return (n/result)*(m/result)*result;
    }

    public static int gcd(int n, int m){
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
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        int result=(gcd(n,m));
        if(result==-1){
            System.exit(-1);
        }
        System.out.print(lcm(n,m,result));
        // Please write your code here.
    }
}