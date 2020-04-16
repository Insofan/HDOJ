package problem2011;

import java.util.Scanner;
import java.text.DecimalFormat;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNextInt()) {
            int m = scanner.nextInt();
            int[] input = new int[100];

            for (int i = 0; i < m; i++) {
                input[i] = scanner.nextInt();
            }

            double[] res = new double[100];

            for (int i = 0; i < m; i++) {
                res[i] = helper(input[i]);
            }

            for (int i = 0; i < m; i++) {
                DecimalFormat f = new DecimalFormat("#0.00");
                System.out.println(f.format(res[i]));
            }
        }
    }

    private static double helper(int n) {
        int i = 1;
        double res = 0;
        while (i <= n) {
            if (i % 2 != 0) {
                res +=  1.0 / i;
            } else {
                res -= 1.0 / i;
            }
            i++;
        }
        return res;
    }
}