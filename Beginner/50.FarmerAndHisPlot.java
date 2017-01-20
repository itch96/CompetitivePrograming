import java.io.*;
import java.util.*;

class Plot {
    public static void main(String[] args) throws IOException{
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            StringTokenizer st = new StringTokenizer(buffer.readLine());
            int N = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(st.nextToken());
            findMinSquares(N, M);
        }
    }
    public static void findMinSquares(int length, int breadth) {
        // find minimum number of same dimensions squares that can be formed.
        // find gcd of length and breadth to get the side of the squares
        // then find the number of squares by dividing its area by the area of the plot.
        int side = gcd(length, breadth);
        int numberOfSquares = (length * breadth) / (side * side);
        System.out.println(numberOfSquares);
    }
    public static int gcd(int a, int b) {
        while(a != b) {
            if(a>b) a=a-b;
		    else b=b-a;
        }
        return a;
    }
}