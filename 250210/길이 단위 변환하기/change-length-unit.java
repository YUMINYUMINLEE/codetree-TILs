public class Main {
    public static void main(String[] args) {
        //1fit=30.48cm,1mi=160934cm
        double oneFit=30.48;
        double oneMi=160934;

        double a = 9.2;
        double b = 1.3; 

        System.out.printf("%.1fft = %.1fcm\n",a,a*oneFit);
        System.out.printf("%.1fmi = %.1fcm",b,b*oneMi);
    
    }
}