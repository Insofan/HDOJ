import java.text.DecimalFormat;
import java.util.Scanner;

public class problem2009 {
    public static void main(String[] args) {
        double n = 0;
        int m = 0;

        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextDouble()) {
            double res = 0;
            n = scanner.nextDouble();
            if (scanner.hasNextInt()) {
                m = scanner.nextInt();
            }
            if (m <= 0) {
                break;
            }

            for (int i = 0; i < m; i++) {
                res += n;
                n = Math.sqrt(n);
            }

            DecimalFormat format = new DecimalFormat("#0.00");

            System.out.println(format.format(res));;
        }
    }
}
