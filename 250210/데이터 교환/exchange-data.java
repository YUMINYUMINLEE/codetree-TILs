public class Main {
    public static void main(String[] args) {
        int a = 5;
        int b = 6;
        int c = 7;

        int temp;

        //a=7,b=5,c=6
        temp=a;
        a=c;
        c=temp;
        //a=7,b=6,c=5,temp=5;
        c=b;
        b=temp;

        System.out.print(a+"\n"+b+"\n"+c);
    

    }
}