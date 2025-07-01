import java.util.Scanner;
public class Main {

    public static boolean isTrue(int n){
        int result=n;
        if(n>9){
            result=(n/10)+(n%10);
        }

        return (n%2==0&&result%5==0);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        System.out.println((isTrue(n)?"Yes":"No"));
       
    }
}
