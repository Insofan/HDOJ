import java.util.Scanner;
import java.text.DecimalFormat;

public class problem2014 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextInt()) {
            int n = scanner.nextInt();
            int[] a = new int[100];

            double res = 0;
            int min = 1000;
            int max = -1;
            int sum = 0;
            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextInt();
                if (a[i] < min) {
                    min = a[i];
                }
                if (a[i] > max) {
                    max = a[i]; 
                }
                sum += a[i];
            }

            sum = sum - min - max;

            res = Double.valueOf(sum) / (n - 2);
            DecimalFormat f = new DecimalFormat("#0.00");

            System.out.println(f.format(res));
        }
    }

}