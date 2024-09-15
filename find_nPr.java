import java.util.Scanner;

class Main {
	public static long factorial(int n){
		long ans = 1;
		while(n > 0){
			ans = ans * n;
			n = n-1;
		}
		return ans;
	}
    public static void main(String[] args) {
        // Note: Don't change class name
        // your code goes here
		
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int r = in.nextInt();

		long nFact = factorial(n);
		long nrFact = factorial(n-r);
		// nPr = n!/ (n-r)!
		long nPr = nFact / nrFact;
		System.out.print(nPr);
		
    }
}
