package util;

public class Random {

    public int[] getRandomArr()  {
        return this.getRandomArr(100, 100, true);
    }

    public int[] getRandomArr(int size, int max) {
        return this.getRandomArr(size, max, false);
    }

    public int[] getRandomArr(int size, int max, boolean negative) {
        return new int[]{1, 2 ,3};
    }
}