import java.util.Scanner;

public class b2441 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        StringBuilder star;
        for(int i = 0 ; i< t; i++){
            star = new StringBuilder();
            for(int j = t ; j > t-i; j--){
                star.append(" ");
            }
            for(int j = t ; j > i; j--){
                star.append("*");
            }
            System.out.println(star);
        }
    }
}
    