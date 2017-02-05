import java.io.*;
import java.util.*;

class DevuAndGrapes {
    public static void main(String args[]) throws IOException {
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            StringTokenizer st = new StringTokenizer(buffer.readLine());
            int N = Integer.parseInt(st.nextToken());
            long K = Long.parseLong(st.nextToken());
            st = new StringTokenizer(buffer.readLine());
            long grapes[] = new long[N];
            for(int i = 0; i < N; i ++) {grapes[i] = Long.parseLong(st.nextToken());}
            helpDevu(N, K, grapes);
        }
    }
    public static void helpDevu(int n, long k, long arr[]) {
        long moves = 0;
        for(int i = 0; i < n; i ++) {
            long remainder = arr[i] % k;
            // check if remainder is near 0 or near k
            if(arr[i] < k) {moves += (k - arr[i]);}
            else {
                if(remainder - 0 > k - remainder) {
                // remainder is near k
                    moves += (k - remainder);
                } else {
                    moves += (remainder - 0);
                }
            }
        }

        System.out.println(moves);
    }
}