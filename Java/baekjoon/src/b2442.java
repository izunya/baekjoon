import java.util.Scanner;

public class b2442 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        StringBuilder star;
        for (int i = 0; i < t; i++) {
            star = new StringBuilder();
            star.append(" ".repeat(t - i-1));
            star.append("*".repeat(Math.max(0, (i * 2)+1)));
            System.out.println(star);
        }
    }
}