import java.util.*;

public class LinkedQuestion {
    static int check(int k) {
        HashSet<Integer> h = new HashSet<>();
        while (k != 0) {
            int d = k % 10;
            if (h.contains(d))
                return 0;
            else {
                h.add(d);
                k = k / 10;
            }
        }
        return 1;
    }
    static int call(int a[][]) {
        if(a[0][0] == 0) return -1;
        if(a[0][0] == 9) return 0;
        int dis = 1;
        Queue <Integer> q = new LinkedList<>();
        q.add(a[0][0]);
return dis;

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

            int n = sc.nextInt();
            int a[][] = new int[n][n];
            for (int i = 0; i < n; i++)
                for(int j=0;j<n;j++)
                a[i][j] = sc.nextInt();
            int x = call(a);

            }
        }