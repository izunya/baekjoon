import java.util.Scanner;

public class b1085 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x,y,w,h;
        System.out.print("");
        x = sc.nextInt();
        y = sc.nextInt();
        w = sc.nextInt();
        h = sc.nextInt();
        int min = Math.min(Math.min(x,w-x),Math.min(y,h-y));
        System.out.println(min);
    }
}
