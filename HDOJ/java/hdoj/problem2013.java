import java.util.Scanner;

class Wtf {
    static public void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextInt()) {
            int d = scanner.nextInt();

            int r = 1;
            for (int i = 2; i <= d; i++) {
                r = (r + 1) * 2;
            }
            System.out.println(r);
        }

    }
}