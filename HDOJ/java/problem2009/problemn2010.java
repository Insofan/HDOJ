import java.util.Scanner;

class problem2010 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int m , n = 0;

        while (scanner.hasNextInt()) {
            m = scanner.nextInt();
            n = scanner.nextInt();
            int[] res = new int[1000];
            int c = 0;

            if (n < m) {
                continue;
            }

            for (int i = m; i <= n; i++) {
                if (helper(i) == true) {
                   res[c] = i; 
                   c++;
                }
            }

            if (c == 0) {
                System.out.println("no");
                continue;
            }

            for (int i = 0; i < c; i++) {
                System.out.print(res[i]);
                if (i < c - 1) {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }

    private static boolean helper(int n) {
        int o = n;
        int res = 0;

        while (n > 0) {
            int tmp = n % 10;
            res += (tmp * tmp * tmp);
            n /= 10;
        }

        return o == res;
    }
}