import java.util.Scanner;
public class Main {

    static class Point{
        int x;
        int y;

        Point(int x, int y ){
            this.x=x;
            this.y=y;
        }
    }

    public static Point move(int x,int y,char dir,int num){
        int[] dx,dy;
        dx=new int[]{1,0,-1,0};
        dy=new int[]{0,-1,0,1};

        char[] direction={'E','S','W','N'};
        for(int i=0;i<4;i++){
            if(dir==direction[i]){
                x+=num*dx[i];
                y+=num*dy[i];
                break;  
            }
        }
        return new Point(x,y);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x=0;
        int y=0;
        for (int i = 0; i < n; i++) {
            char direction = sc.next().charAt(0);
            int distance = sc.nextInt();
            Point result = move(x,y,direction,distance);
            x=result.x;
            y=result.y;
        }
        System.out.print(x+" "+y);
    }
}