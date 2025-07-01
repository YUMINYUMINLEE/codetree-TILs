import java.util.Scanner;


public class Main {
    public static boolean isMagicNum(int i){
        if(i%3==0){return true;}
        while(i>0){
            int digit = i%10;
            if(digit==3||digit==6||digit==9){return true;}
            i/=10;
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int cnt=0;
        for(int i=A;i<=B;i++){
            if(isMagicNum(i)){
                cnt++;
            }
        }
        System.out.print(cnt);
    }
}

