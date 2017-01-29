import java.io.*;
import java.util.StringTokenizer;

class Joke {
    public static void main(String[] args) throws IOException{
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            int N = Integer.parseInt(buffer.readLine());
            int coordinates[][] = new int[N][2];
            for(int i = 0; i < N; i ++) {
                StringTokenizer st = new StringTokenizer(buffer.readLine());
                coordinates[i][0] = Integer.parseInt(st.nextToken());
                coordinates[i][1] = Integer.parseInt(st.nextToken());
            }
            int answer = 1;
            for(int i = 2; i <= N; i ++) {answer ^= i;}
            System.out.println(answer);
        }
    }
}