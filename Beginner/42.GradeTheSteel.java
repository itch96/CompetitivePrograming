import java.io.*;
import java.util.*;

class GradeTheSteel {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while((t --) > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            double characteristics[] = new double[3];
            for(int i = 0; i < 3; i ++) {characteristics[i] = Double.parseDouble(st.nextToken());}
            findGrade(characteristics);
        }
    }
    public static void findGrade(double qualities[]) {
        int pass[] = {0, 0, 0};
        int grade = 0;
        if(qualities[0] > 50) {pass[0] = 1;}
        if(qualities[1] < 0.7) {pass[1] = 1;}
        if(qualities[2] > 5600) {pass[2] = 1;}

        if(matches(pass, 1, 1, 1)) {grade = 10;}
        else if(matches(pass, 1, 1, 0)) {grade = 9;}
        else if(matches(pass, 0, 1, 1)) {grade = 8;}
        else if(matches(pass, 1, 0, 1)) {grade = 7;}
        else if(matches(pass, 1, 0, 0) || matches(pass, 0, 1, 0) || matches(pass, 0, 0, 1)) {grade = 6;} 
        else {grade = 5;}

        System.out.println(grade);
    }
    public static boolean matches(int arr[], int a, int b, int c) {
        if(arr[0] == a && arr[1] == b && arr[2] == c) {return true;}else {return false;}
    }
}
