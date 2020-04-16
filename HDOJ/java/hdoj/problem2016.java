import java.util.Scanner;
public class problem2016 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNextInt()) {
            int n = scanner.nextInt();
            if (n == 0) {
                break;
            }

            int[] nums = new int[n];
            int i = 0;
            while (i < n) {
                nums[i++] = scanner.nextInt();
            }

            int m = 10000000;
            int s = 0;

            for (int j = 0; j < n; j++) {
                if (nums[j] < m) {
                    m = nums[j];
                    s = j;
                }
            }

            swap(nums, 0, s);

            for (int j = 0; j < n; j++) {
                System.out.print(nums[j]);
                if (j < n - 1) {
                    System.out.print(" ");
                }

                if (j == n - 1) {
                    System.out.println();
                }
            }
        }
    }

    public static void swap(int[] l, int f, int s) {
        int t = l[f];
        l[f] = l[s];
        l[s] = t;
    }

}