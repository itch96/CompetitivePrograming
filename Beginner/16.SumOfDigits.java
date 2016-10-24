import java.io.*;
class SumOfDigits {
	public static void main(String args[]) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//		System.out.print("Enter the Test Cases: ");
		int T = Integer.parseInt(br.readLine());
		for(int i = 0; i < T; i ++) {
//			System.out.print("\nEnter the number: ");
			String N = br.readLine();
			SumOfDigits sod = new SumOfDigits();
//			System.out.println("\nThe sum of Digits are: " + sod.sumOfDigits(N));
			System.out.println(sod.sumOfDigits(N));
		}
	}

	public int sumOfDigits(String s) {
		int sum = 0;
		for(int i = 0; i < s.length(); i ++) {
			sum += Integer.parseInt(s.substring(i, i + 1));
		}
		return sum;
	}
}