import java.io.*;
import java.util.*;

class WildCard {
    public static void main(String args[]) throws IOException {
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(buffer.readLine());
        while((n --) > 0) {
            String a = buffer.readLine();
            String b = buffer.readLine();
            matchString(a, b);
        }
    }
    public static void matchString(String x, String y) {
        int flag = 1;
        if(x.length() != y.length()) {flag = 0;}
        for(int i = 0; i < x.length(); i ++) {
            if(x.charAt(i) == '?' || y.charAt(i) == '?') {;}
            else {
                if(x.charAt(i) != y.charAt(i)) {flag = 0; break;}
            }
        }
        if(flag == 0) {System.out.println("No");}else {System.out.println("Yes");}
    }
}