import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("");
        int x = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<Integer>();
        for(int i = 0; i < x; i++) {
            System.out.print("");
            arr.add(sc.nextInt());
        }
        arr.sort(null);
        System.out.println(arr);
    }
}
