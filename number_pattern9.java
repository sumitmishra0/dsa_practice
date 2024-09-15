import java.util.Scanner;

// 1
// 12
// 123
// 1234
// 12345
// 1234
// 123
// 12
// 1

class Main {
    public static void main(String[] args) {
        // Note: Don't change class name
        // your code goes here

		Scanner in = new Scanner(System.in);
		int n = in.nextInt();

		for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			System.out.print(j + " ");
		}
		System.out.println();
	}
	for(int i = 1; i < n; i++){
		for(int j = 1; j <= n-i; j++){
			System.out.print(j + " ");
		}
		System.out.println();
	}
    }
}
