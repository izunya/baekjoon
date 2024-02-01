import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("");
        int x = sc.nextInt();
        for (int i = 0; i < x; i++) {
            System.out.print("");
            int y = sc.nextInt();
            if(i==x-1) {
                System.out.printf("Case #%d: World Finals%n", i + 1);
            }else{
                System.out.printf("Case #%d: Round %d%n", i + 1,i+1);
            }
        }
    }
}
