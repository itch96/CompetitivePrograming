import java.io.*;
import java.util.*;

class Cake {
    public static void main(String[] args) throws IOException{
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            String s = buffer.readLine();
            matchOccur(s);
        }
    }
    public static void matchOccur(String str) {
        int length = str.length();
        if(length % 2 == 1) {System.out.println("NO");}
        else {
            for(int i = 0; i < length; i ++) {
                int count = 0;
                for(int j = 0; j < length; j ++) {
                    if(str.charAt(i) == str.charAt(j)) {count ++;}
                }
                if(count == (length - count)) {System.out.println("YES"); break;}
                if(i == (length - 1)) {System.out.println("NO");}
            }
        }
    }
}