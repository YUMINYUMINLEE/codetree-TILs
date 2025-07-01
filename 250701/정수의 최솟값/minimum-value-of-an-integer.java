import java.util.Scanner;

public class Main {

    public static int min(int a, int b, int c){
        int[] m={a,b,c};
        int result=a;
        for(int i=1;i<3;i++){
            if (m[i]<result)
                result=m[i];
        }
        return result;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        // Please write your code here.
        System.out.print(min(a,b,c));
    }
}