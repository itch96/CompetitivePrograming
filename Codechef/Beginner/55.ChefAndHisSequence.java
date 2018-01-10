import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

class Sequence {
    public static void main(String args[]) throws IOException {
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            int NS = Integer.parseInt(buffer.readLine());
            StringTokenizer st = new StringTokenizer(buffer.readLine());
            int S[] = new int[NS];
            for(int i = 0; i < NS; i ++) {S[i] = Integer.parseInt(st.nextToken());}
            int NF = Integer.parseInt(buffer.readLine());
            st = new StringTokenizer(buffer.readLine());
            int F[] = new int[NF];
            for(int i = 0; i < NF; i ++) {F[i] = Integer.parseInt(st.nextToken());}

            findSequence(S, F);
        }
    }
    public static void findSequence(int s[], int f[]) {
        int k = 0, count = 0;
        for(int i = 0; i < f.length; i ++) {
            for(int j = 0; j < s.length; j ++) {
                if(f[i] == s[j]) {
                    k = j + 1;
                    count ++;
                    break;
                }
            }
        }
        if(count == f.length) {System.out.println("Yes");}
        else {System.out.println("No");}
    }
}