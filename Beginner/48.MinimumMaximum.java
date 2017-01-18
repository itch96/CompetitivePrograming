import java.io.*;
import java.util.*;

class MinMax {
    public static void main(String[] args) throws IOException{
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            int N = Integer.parseInt(buffer.readLine());
            StringTokenizer st = new StringTokenizer(buffer.readLine());
            long A[] = new long[N];
            for(int i = 0; i < N; i ++) {A[i] = Long.parseLong(st.nextToken());}
            transform(A, N);
        }
    }
    public static void transform(long arr[], int size) {
        long cost = 0;
        int minIndex = 0;
        minIndex = findMinIndex(arr);
        cost = arr[minIndex] * (arr.length - 1);
        System.out.println(cost);
    }
    public static int findMinIndex(long array[]) {
        long m = array[0];
        int mI = 0;
        for(int i = 0; i < array.length; i ++) {
            if(array[i] < m) {m = array[i]; mI = i;}
        }
        return mI;
    }
}