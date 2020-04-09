import java.util.Scanner;

public class Main{
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        
        while (scanner.hasNextDouble()) {
            int cnt = scanner.nextInt();
            if (cnt == 0) {
                break;
            }
            double[] arr = new double[100];
            for (int i = 0; i < cnt; i++) {
                arr[i] = scanner.nextDouble();
            }

            int neg = 0;
            int zero = 0;
            int pos = 0;

            for (int i = 0; i < cnt; i++) {
                if (arr[i] > 0) {
                    pos++;
                } else if (arr[i] < 0) {
                    neg++;
                } else if (arr[i] == 0) {
                    zero++;
                }
            }

            System.out.println(neg + " " + zero + " " + pos);

        }
    }
}