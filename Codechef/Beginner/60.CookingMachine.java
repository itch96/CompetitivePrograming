import java.io.*;
import java.util.StringTokenizer;

class Cook {
    public static void main(String args[]) throws IOException {
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            StringTokenizer st = new StringTokenizer(buffer.readLine());
            long A = Long.parseLong(st.nextToken());
            long B = Long.parseLong(st.nextToken());

            findTime(A, B);
        }
    }
    public static void findTime(long a, long b) {
        int count = 0;
        while(a != b) {
            if(a > b) {a /= 2;}
            else {b /= 2;}
            count ++;
        }
        System.out.println(count);
    }
}