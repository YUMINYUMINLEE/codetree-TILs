import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int cnt=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(cnt%9+1+" ");
                cnt++;
            }
            System.out.println();
        }
    }
}

//NxN 모양 삼각형/ 123456789->123456789 반복 / 배열에 123456789를 넣어두고 모듈러 연산으로 n(현재 숫자)%9 를 해서 배열 0번 인덱스로 보내면 될것같