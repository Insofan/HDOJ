// 小和问题
import java.util.Scanner;

public class smallSum {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int m = scanner.nextInt();
        int max = scanner.nextInt();
        int[] arr = genRan(m, max);

        print(arr);

        System.out.println(mergeSort(arr));
        scanner.close();
    }

    public static int mergeSort(int[] arr) {
        if (arr == null || arr.length == 0) {
            return 0;
        }
        return mergeSort(arr, 0, arr.length - 1);
    }

    public static int mergeSort(int[] arr, int l, int r) {
        if (l == r) {
            return 0;
        }

        int m = (l + r) >> 1;

        return mergeSort(arr, l, m) + mergeSort(arr, m + 1, r) + merge(arr, l, m, r);
    }

    public static int merge(int[] arr, int l, int m, int r) {
        int [] help = new int [r - l + 1];

        int p1 = l;
        int p2 = m + 1;
        int res = 0;

        int i = 0;

        while (p1 <= m && p2 <= r) {
            res += arr[p1] < arr[p2] ? (arr[p1] * (r - p2 + 1)) : 0;
            help[i++] = arr[p1] < arr[p2] ? arr[p1++] : arr[p2++];
        }

        while (p1 <= m) {
            help[i++] = arr[p1++];
        }

        while (p2 <= r) {
            help[i++] = arr[p2++];
        }

        for (i = 0; i < help.length; i++) {
            arr[l + i] = help[i];
        }
        return res;
    }

    public static int[] genRan(int len, int max) {
        int[] res = new int[len];

        for (int i = 0; i < len; i++) {
            res[i] = (int) (Math.random() * max);
        }

        return res;
    }

    public static void print(int[] arr) {
        for (int n : arr) {
            System.out.print(n + " ");
        }
        System.out.println();
    }

}
