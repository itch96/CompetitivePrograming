import java.io.*;
import java.util.Arrays;

class Game {
    public static void main(String args[]) throws IOException {
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        String s = buffer.readLine();
        char carr[] = s.toCharArray();
        // find "CHEF" and replace it with "XXXX"
        int flag = 1, count = 0;
        while(flag == 1) {
            // make flag=0 when unable to find either 'C' | 'H' | 'E' | 'F'
            if(charsPresent(carr)) {
                count ++;
            }
            else {flag = 0;}
        }
        System.out.println(count);
    }
    public static boolean charsPresent(char str[]) {
        int l = str.length;
        int index = 0;
        char flag[] = {'0', '0', '0', '0'};
        char perfect[] = {'1', '1', '1', '1'};
        for(int i = index; i < l; i ++) {
            if(str[i] == 'C') {
                index = i; 
                str[i] = 'X';
                flag[0] = '1'; 
                break;
            }
        }
        for(int i = index; i < l; i ++) {
            if(str[i] == 'H') {
                index = i; 
                str[i] = 'X';
                flag[1] = '1'; 
                break;
            }
        }
        for(int i = index; i < l; i ++) {
            if(str[i] == 'E') {
                index = i; 
                str[i] = 'X';
                flag[2] = '1'; 
                break;
            }
        }
        for(int i = index; i < l; i ++) {
            if(str[i] == 'F') {
                index = i; 
                str[i] = 'X';
                flag[3] = '1'; 
                break;
            }
        }
        return (Arrays.equals(flag, perfect));
    }
}