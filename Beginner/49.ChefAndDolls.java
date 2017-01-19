import java.io.*;
import java.util.Arrays;

class Dolls {
    public static void main(String[] args) throws IOException{
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            int N = Integer.parseInt(buffer.readLine());
            int A[] = new int[N];
            for(int i = 0; i < N; i ++) {A[i] = Integer.parseInt(buffer.readLine());}
            findMissingDoll(A);
        }
    }
    public static void findMissingDoll(int arr[]) {
        int alone[] = new int[arr.length];
        int k = 0;
        Arrays.sort(arr);
        for(int i = 0; i < (arr.length); i ++) {
            if(i == (arr.length - 1)) {alone[k ++] = arr[i];}
            else if(arr[i] == arr[i + 1]) {i ++;}
            else {alone[k ++] = arr[i];}
        }
        for(int i = 0; i < k; i ++) {System.out.println(alone[i]);}
    }
}