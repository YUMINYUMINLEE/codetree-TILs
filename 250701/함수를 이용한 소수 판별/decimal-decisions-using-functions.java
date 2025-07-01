import java.util.Scanner;

public class Main {

    public static boolean isPrimeNum(int num){
        if(num<2){
            return false;
        }
        if(num==2){
            return true;
        }
        if(num%2==0){
            return false;
        }
        for(int i=3;i<=Math.sqrt(num);i++){
            if(num%i==0){
                return false;
            }
        }
        return true;

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int result=0;
        for(int i=a;i<=b;i++){
            if(isPrimeNum(i)){
                result+=i;
            }
        }
        System.out.print(result);
    }
}