import java.io.*;
import java.util.*;

class Fruits {
    public static void main(String[] args) throws IOException{
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            StringTokenizer st = new StringTokenizer(buffer.readLine());
            int N = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(st.nextToken());
            int K = Integer.parseInt(st.nextToken());

            findDiff(N, M, K);
        }
    }
    public static void findDiff(int n, int m, int k) {
        int count = 0; 
        while(k >= 1 && n != m) {
            while(n < m && k > 0) {n ++; k --;}
            while(m < n && k > 0) {m ++; k --;}
        }
        int difference = (n >= m) ? (n - m) : (m - n);
        System.out.println(difference);
    }
}