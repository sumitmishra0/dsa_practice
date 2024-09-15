import java.util.Scanner;
class Main {
	public static int findMax(int firstNumber, int secondNumber){
		int max = 0;
		if(firstNumber >= secondNumber){
			max = firstNumber;
		} else {
			max = secondNumber;
		}
		return max;
	}

	public static int findMin(int firstNumber, int secondNumber){
		int min = 0;
		if(firstNumber <= secondNumber){
			min = firstNumber;
		} else {
			min = secondNumber;
		}
		return min;
	}
    public static void main(String[] args) {
        // Note: Don't change class name
        // your code goes here

		Scanner in = new Scanner(System.in);
		int a = in.nextInt();
		int b = in.nextInt();
		System.out.println("minimum : " + findMin(a,b));
		System.out.println("maximum : " + findMax(a,b));
    }
}
