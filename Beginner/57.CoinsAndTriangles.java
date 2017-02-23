import java.io.*;
import java.util.*;

class CoinsAndTriangles {
    public static void main(String args[]) throws Exception{
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            long N = Long.parseLong(buffer.readLine());
            findHeight(N);
        }
    }
    public static void findHeight(long n) {
        int height;
        height = (int) (Math.sqrt(1 + (8 * n)) - 1) / 2;
        System.out.println(height);      
    }
}