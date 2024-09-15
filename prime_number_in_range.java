import java.util.Scanner;

class Main {
	public static boolean isPrime(int n){
		for(int i = 2; i < n; i++){
			if(n % i == 0){
				return false;
			}
		}
		return true;
	}

	public static void printPrimeNumber(int startRange, int endRange){
		for(int i = startRange; i <= endRange; i++){
			if(isPrime(i)) {
				System.out.print(i + " ");
			}
		}
	}

    public static void main(String[] args) {
        // Note: Don't change class name
        // your code goes here

		Scanner in = new Scanner(System.in);
		int a = in.nextInt();
		int b = in.nextInt();

		printPrimeNumber(a,b);
    }
}
