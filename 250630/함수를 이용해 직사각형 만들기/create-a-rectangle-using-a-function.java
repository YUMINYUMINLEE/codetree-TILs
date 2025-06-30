import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rowNum = sc.nextInt();
        int colNum =sc.nextInt();

        for(int i= 0 ;i<rowNum;i++){
            for(int j=0;j<colNum;j++){
           
                System.out.print("1");
                
            }

            System.out.println();
   
        }  
        
    }
}

// n 이4 m이 6 이면 1 6 번째 줄은 다 채워짐/ 2345줄은 사이가 비어있음

/*           if(i==0||i==rowNum-1){
                for(int j=0;j<colNum;j++){
                    System.out.print("1");
                }
            }
            else{
                for(int j=0;j<colNum;j++){
                    if(j==0||j==colNum-1){
                        System.out.print("1");
                    }
                    else{
                        System.out.print(" ");
                    }
                }
                
            }
            */