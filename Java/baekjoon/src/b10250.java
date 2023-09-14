import java.util.Scanner;

public class b10250 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int h = sc.nextInt();
            int trash = sc.nextInt();
            int n = sc.nextInt();
            ;
            if (n % h == 0) {
                System.out.println((h * 100) + (n / h));
            } else {
                System.out.println(((n % h) * 100) + ((n / h) + 1));
            }
        }
    }
}