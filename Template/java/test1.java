import java.util.*;

public class test1 {

    public static void main(String[] args) {
       int[] arr = {4, 3, 2, 1}; 

       System.out.println(getMax(arr, 0, arr.length - 1));
    }

    private static int getMax(int[] arr, int l, int r) {
        if (l == r) {
            return arr[l];
        }

        int mid = (l + r) / 2;

        int ml = getMax(arr, l, mid);
        int mr = getMax(arr, mid + 1, r);

        return Math.max(ml, mr);
    }
}