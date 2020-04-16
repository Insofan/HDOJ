import java.util.Scanner;

public class problem2015 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextInt()) {
            int n = scanner.nextInt();
            int m = scanner.nextInt();

            int l = n % m == 0 ? n / m : (n / m) + 1;
            int[] r = new int[l];

            int index = 0;

            int x = 2;
            for (int i = 0; i < n;) {
                int s = 0;
                int c = 0;

                while (c < m && i < n) {
                    s += x;
                    x += 2;
                    i++;
                    c++;
                }
                r[index++] = s / c;
            }

            for (int i = 0; i < l; i++) {
                System.out.print(r[i]);
                if (i < l - 1) {
                    System.out.print(" ");
                }
                if (i == l - 1) {
                    System.out.println();
                }
            }
        }
    }
}
