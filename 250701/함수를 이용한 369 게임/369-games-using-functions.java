import java.util.Scanner;


public class Main {
    public static boolean isMagicNum(int i){
        int cnt=0;
        int n=i;
        int[] arr= new int[3];
        arr=new int[]{3,6,9};
        if(i%3==0){
            return true;
        }
        while(i>0){
            int num;
            num=i%10;
            for(int k=0;k<arr.length;k++){
                if(num==arr[k]){return true;}
            }
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

