import java.io.*;

class Brackets {
    public static void main(String args[]) throws IOException {
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            String sequence = buffer.readLine();
            int balance = 0, maxBalance = 0, length = sequence.length();
            for(int i = 0; i < length; i ++) {
                if(sequence.charAt(i) == '(') {balance ++;}
                if(sequence.charAt(i) == ')') {balance --;}
                maxBalance = (maxBalance > balance) ? maxBalance : balance;
            }
            for(int i = 0; i < maxBalance; i ++) {System.out.print('(');}
            for(int i = 0; i < maxBalance; i ++) {System.out.print(')');}
            System.out.println();
        }
    }
}