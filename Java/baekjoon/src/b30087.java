import java.util.Scanner;

public class b30087 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("");
        int x = sc.nextInt();
        for (int i = 0; i < x; i++) {
            System.out.print("");
            String s = sc.next();
            switch(s){
                case "Algorithm":
                    System.out.println("204");
                    break;
                case "DataAnalysis":
                    System.out.println("207");
                    break;
                case "ArtificialIntelligence":
                    System.out.println("302");
                    break;
                case "CyberSecurity":
                    System.out.println("B101");
                    break;
                case "Network":
                    System.out.println("303");
                    break;
                case "Startup":
                    System.out.println("501");
                    break;
                case "TestStrategy":
                    System.out.println("105");
                    break;
            }
        }
    }
}
