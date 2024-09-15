import java.util.Scanner;

class Main {

	public static int sumOfDigits(int n){
		int sum = 0;
        while(n > 0){
			int lastDigit = n % 10;
			sum += lastDigit;
			n /= 10;
		}
		return sum;
	}
    public static void main(String[] args) {
        // Note: Don't change class name
        // your code goes here
		Scanner in = new Scanner(System.in);

		int n = in.nextInt();
		int sum = sumOfDigits(n);
		System.out.print(sum);
    }
}
