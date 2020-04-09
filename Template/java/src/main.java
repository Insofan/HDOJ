import util.Random;
public class main {
    public static void main(String [] args) {
        Random ran = new Random();
        for (int i : ran.getRandomArr()) {
            System.out.println(i);
        }
    }
}