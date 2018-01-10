import java.io.*;
import java.util.*;

class Subarrays {
    public static void main(String args[]) throws IOException {
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            int N = Integer.parseInt(buffer.readLine());
            StringTokenizer st = new StringTokenizer(buffer.readLine());
            int array[] = new int[N];
            int i = 0;
            for(i = 0; i < N; i ++) {
                array[i] = Integer.parseInt(st.nextToken());
            }
            findSolution(array);
        }
    }
    public static void findSolution(int arr[]) {
        int count = 0;
        for(int i = 0; i < arr.length; i ++) {
            int sum = 0, product = 1;
            for(int j = i; j >= 0; j --) {
                sum += arr[j];
                product *= arr[j];
                if(sum == product) {count ++;}
            }
        }
        System.out.println(count);
    }
}