import java.io.*;

class Balloon {
    public static void main(String args[]) throws IOException {
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            String balloonColors = buffer.readLine();
            int as = 0, bs = 0;
            for(int i = 0; i < balloonColors.length(); i ++) {
                if(balloonColors.charAt(i) == 'a') {as ++;}
                else{bs ++;}
            }
            if(as < bs) {System.out.println(as);}
            else {System.out.println(bs);}
        }
    }
}