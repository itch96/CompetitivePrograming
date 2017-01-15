import java.io.*;

class ChefAndTwoStrings {
    public static void main(String[] args) throws IOException{
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            String a = buffer.readLine();
            String b = buffer.readLine();

            findDiff(a, b);
        }
    }
    public static void findDiff(String x, String y) {
        int differentCharcters = 0, questionMarks = 0;
        int max = 0, min = 0;
        for(int i = 0; i < x.length(); i ++) {
            if(x.charAt(i) != y.charAt(i)) {
                if(x.charAt(i) != '?' && y.charAt(i) != '?') {differentCharcters ++;}
                else {questionMarks ++;}
            }
            else {
                if(x.charAt(i) == '?') {questionMarks ++;}
            }
        }
        min = differentCharcters;
        max = differentCharcters + questionMarks;
        System.out.println(min + " " + max);
    }
}