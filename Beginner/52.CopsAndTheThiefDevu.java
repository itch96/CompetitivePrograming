import java.io.*;
import java.util.*;

class Devu {
    public static void main(String[] args) throws IOException{
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(buffer.readLine());
        while((T --) > 0) {
            StringTokenizer st = new StringTokenizer(buffer.readLine());
            int M = Integer.parseInt(st.nextToken());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(buffer.readLine());
            int copHouses[] = new int[M];
            for(int i = 0; i < M; i ++) {copHouses[i] = Integer.parseInt(st.nextToken());}

            houseToHide(M, x, y, copHouses);
        }
    }
    public static void houseToHide(int cops, int frequency, int time, int houses[]) {
        int housesDiscoverable = frequency * time;
        int record[] = new int[100];
        for(int i = 0; i < 100; i ++) {record[i] = 0;} //initially, set all houses as empty
        for(int i = 0; i < cops; i ++) {
            record[houses[i] - 1] = 1; // set the house of the cop to be occupied
            // now set all the houses the cop can search to be occupied
            int startingRange = 0, endRange = 0;
            if(houses[i] - housesDiscoverable < 1) {startingRange = 1;}
            else {startingRange = (houses[i] - housesDiscoverable);}
            endRange = houses[i];
            for(int j = startingRange - 1; j < endRange; j ++) {record[j] = 1;}
            startingRange = houses[i];
            if(houses[i] + housesDiscoverable > 99) {endRange = 100;}
            else {endRange = houses[i] + housesDiscoverable;}
            for(int j = startingRange - 1; j < endRange; j ++) {record[j] = 1;}
        }
        int count = 0;
        for(int i = 0; i < 100; i ++) {
            if(record[i] == 0) {count ++;}
        }
        System.out.println(count);
    }
}