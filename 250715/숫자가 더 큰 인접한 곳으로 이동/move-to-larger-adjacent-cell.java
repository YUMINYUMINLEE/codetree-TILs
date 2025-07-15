import java.util.Scanner;
public class Main {
    public static boolean InRange(int x,int y,int N){
        //범위는 (0,0)~(N-1,N-1)
        if(x>=0&&x<=N-1&&y>=0&&y<=N-1){
             return true;
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int r = sc.nextInt();
        int c = sc.nextInt();
        int[][] grid = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                grid[i][j] = sc.nextInt();
            }
        }
        int[] dx={-1,1,0,0};
        int[] dy={0,0,-1,1};

        int currentX=r-1;
        int currentY=c-1;

        int nextX,nextY;

        while(true){
            System.out.print(grid[currentX][currentY]+" ");
            int beforeX=currentX;
            int beforeY=currentY;
            for(int i=0;i<4;i++){
                nextX=currentX+dx[i];
                nextY=currentY+dy[i];
                if(InRange(nextX,nextY,n)&&grid[nextX][nextY]>grid[currentX][currentY]){
                    currentX=nextX;
                    currentY=nextY;
                    break;
                }   
            }
            if(beforeX==currentX&&beforeY==currentY){
                break;
            }
        }
        
    }
}
/*
격자 크기는 N*N
상하좌우로 인접한 칸중 처음으로 만나는 나보다 큰 값으로 이동
우선순위:상하좌우
격자를 벗어나면 안됨.
(r,c)는 시작위치
이동이 불가능할때까지 계속
출력은 지나간 숫자들을 차례로
1-based로 r과c가 주어짐
*/
