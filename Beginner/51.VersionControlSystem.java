import java.io.*;
import java.util.*;

class VCS {
    public static void main(String[] args) throws Exception{
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            StringTokenizer st = new StringTokenizer(buffer.readLine());
            int N = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(st.nextToken());
            int K = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(buffer.readLine());
            int A[] = new int[M];
            for(int i = 0; i < M; i ++) {A[i] = Integer.parseInt(st.nextToken());}
            st = new StringTokenizer(buffer.readLine());
            int B[] = new int[K];
            for(int i = 0; i < K; i ++) {B[i] = Integer.parseInt(st.nextToken());}

            createSet(N, A, B);
        }
    }
    public static void createSet(int totalFiles, int ignored[], int tracked[]) throws Exception{
        Set<Integer> A = new HashSet<Integer>();
        Set<Integer> B = new HashSet<Integer>();
        Set<Integer> U = new HashSet<Integer>();
        try{
            for(int i = 0; i < ignored.length; i ++) {A.add(ignored[i]);}
            for(int i = 0; i < tracked.length; i ++) {B.add(tracked[i]);}
            for(int i = 1; i <= totalFiles; i ++) {U.add(i);}
        } catch(Exception e) {System.out.println(e);}

        trackedIgnored(A, B);
        untrackedUnignored(U, A, B);
    }
    public static void trackedIgnored(Set<Integer> IGNORED, Set<Integer> TRACKED) {
        // make a copy of IGNORED for the intersection operation
        Set<Integer> mySet = new HashSet<Integer>();
        mySet.addAll(IGNORED);
        mySet.retainAll(TRACKED);
        // now mySet contains the intersection of IGNORED and TRACKED
        // iterate through mySet and print the elements seperated by spaces.
        Iterator i = mySet.iterator();
        int count = 0;
        while(i.hasNext()) {count ++; i.next();}
        System.out.print(count + " ");
    }
    public static void untrackedUnignored(Set<Integer> UNIVERSAL, Set<Integer> IGNORED, Set<Integer> TRACKED) {
        // union the IGNORED and TRACKED and then find the intersection of it with the UNIVERSAL
        Set<Integer> mySet = new HashSet<Integer>();
        mySet.addAll(IGNORED);
        mySet.addAll(TRACKED);
        UNIVERSAL.removeAll(mySet);
        // iterate through mySet and print the elements seperated by spaces.
        Iterator i = UNIVERSAL.iterator();
        int count = 0;
        while(i.hasNext()) {count ++; i.next();}
        System.out.println(count);
    }
}