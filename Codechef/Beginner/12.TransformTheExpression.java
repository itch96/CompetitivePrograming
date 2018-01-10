// Reverse Polish Notation.

import java.io.*;
import java.util.*;

class RPN {
	public static void main(String[] args) throws IOException {
		accept();
	}

	public static void accept() throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		// System.out.print("\nTest Cases: ");
		int t = Integer.parseInt(br.readLine());

		for(int i = 0; i < t; i ++) {
			//System.out.println("Expression: ");
			String expression = br.readLine();
			getRPN(expression);
		}
	}

	public static void getRPN(String str) {
		// find the rpn of str
		ArrayList<Character> stack = new ArrayList<Character>();
		ArrayList<Character> polish = new ArrayList<Character>();
		ArrayList<Character> operators = new ArrayList<Character>();

		for(int i = 0; i < str.length(); i ++) {stack.add(str.charAt(i));}

		for(int i = 0; i < stack.size(); i ++) {
			if(isOperator(stack.get(i))) {operators.add(stack.get(i));}
			else if(stack.get(i) != '(') {
				if(stack.get(i) == ')') {polish.add(operators.remove(operators.size() - 1));}
				else {polish.add(stack.get(i));}
			}
		}

		for(int i = 0; i < polish.size(); i ++) {System.out.print(polish.get(i));}
		System.out.println();
	}

	public static boolean isOperator(char c) {
		if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {return true;}
		else return false;
	}
}