import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int N = in.nextInt();
        int res = 0;

        for (int i = 1; i <= N; i++) {
            int temp = i;
            int x = i;
            while (x > 0) {
                temp = temp + (x % 10);
                x /= 10;
            }
            if (temp == N) {
                res = i;
                break;
            }
        }
        System.out.println(res);
    }
}
