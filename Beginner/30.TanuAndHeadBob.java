import java.io.*;

class TanuBob {
    public static void main(String[] args) throws IOException {
        int t, n;
        String s;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        t = Integer.parseInt(br.readLine());
        for(int i = 0; i < t; i ++) {
            n = Integer.parseInt(br.readLine());
            s = br.readLine();
            for(int j = 0; j < n; j ++) {
                if(s.charAt(j) == 'I') {System.out.println("INDIAN"); break;}
                else if(s.charAt(j) == 'Y') {System.out.println("NOT INDIAN"); break;}
                else if(j == (n - 1)) {System.out.println("NOT SURE"); break;}
            }
        }
    }
}