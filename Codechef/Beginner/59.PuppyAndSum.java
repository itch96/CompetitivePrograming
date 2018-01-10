import java.io.*;
import java.util.StringTokenizer;

class Puppy {
    public static void main(String args[]) throws IOException{
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            StringTokenizer st = new StringTokenizer(buffer.readLine());
            int D = Integer.parseInt(st.nextToken());
            int N = Integer.parseInt(st.nextToken());

            System.out.println(findSum(D, N));
        }       
    }

    public static int findSum(int d, int n) {
        int sum = ((n * (n + 1)) / 2);
        if(d == 1) {return sum;}
        else {return findSum((d - 1), sum);}
    }
}