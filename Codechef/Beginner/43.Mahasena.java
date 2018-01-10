import java.io.*;
import java.util.*;

class Mahasena {
    public static void main(String args[]) throws IOException {
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int n;
        n = Integer.parseInt(buffer.readLine());
        int a[] = new int[n];
        StringTokenizer tokens = new StringTokenizer(buffer.readLine());
        for(int i = 0; i < n; i ++) {a[i] = Integer.parseInt(tokens.nextToken());}

        ready(a);
    }
    public static void ready(int arr[]) {
        int even, odd;
        even = odd = 0;
        for(int i = 0; i < arr.length; i ++) {
            if(arr[i] % 2 == 0) {even ++;}
            else {odd ++;}
        }
        if(even > odd) {System.out.println("READY FOR BATTLE");}
        else {System.out.println("NOT READY");}
    }
}