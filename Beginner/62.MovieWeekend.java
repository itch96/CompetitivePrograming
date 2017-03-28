import java.io.*;
import java.util.StringTokenizer;

class Movie {
    public static void main(String args[]) throws IOException {
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            int n = Integer.parseInt(buffer.readLine());
            StringTokenizer length = new StringTokenizer(buffer.readLine());
            StringTokenizer rating = new StringTokenizer(buffer.readLine());
            int l[] = new int[n], r[] = new int[n];
            for(int i = 0; i < n; i ++) {l[i] = Integer.parseInt(length.nextToken());}
            for(int i = 0; i < n; i ++) {r[i] = Integer.parseInt(rating.nextToken());}
            
            int maxProd = 0, maxRating = 0, product = 0, index = 0;
            for(int i = 0; i < n; i ++) {
                product = l[i] * r[i];
                if(product > maxProd) {
                    index = i;
                    maxProd = product;
                }
                if(maxProd == product && r[i] > r[index]) {index = i;}
            }

            System.out.println(index + 1);
        }
    }
}