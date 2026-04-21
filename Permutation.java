import java.util.Scanner;

public class PermutationRepetition {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of items (n): ");
        int n = sc.nextInt();

        System.out.print("Enter number of positions (r): ");
        int r = sc.nextInt();

        int result = (int) Math.pow(n, r);

        System.out.println("Permutation with repetition = " + result);
    }
}
