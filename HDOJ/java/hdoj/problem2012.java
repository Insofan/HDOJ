import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextInt()) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();

            if (x < -39 || y > 50) {
                break;
            }

            if (x == 0 && y == 0) {
                break;
            }

            
            boolean tmp = true;

            for (int i = x; i <= y; i++) {
                int s = sum(i);
                if (helper(s) == false) {
                    tmp = false;
                    break;
                }
            } 

            if (tmp == true) {
                System.out.println("OK");
            } else {
                System.out.println("Sorry");
            }
        }
    }

    private static int sum(int n) {
        return n * n + n + 41;
    }

    private static boolean helper(int n) {
        if (n == 0 || n == 1) {
            return false;
        }
        if (n == 2) {
            return true;
        }

        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}
