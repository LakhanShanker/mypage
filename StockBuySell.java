import java.util.*;
public class StockBuySell {
    static int FirstApproach(int ...a){
        int n = a.length;
        int max =Integer.MIN_VALUE;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[j]-a[i] > max)
                    max = a[j]-a[i];
            }
        }
        return max;
    }
    static int SecondApproach(int ...a){
        int n =a.length;
        int check[] = new int[n];
        int max = Integer.MIN_VALUE;
        for(int i=n-1;i>=0;i--){
            if(a[i] >  max)
                max = a[i];
            check[i] = max;
        }
        int m = Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            if(check[i] - a[i] > m)
                m = check[i] - a[i];
        }
        return m;
    }
    static int ThirdApproach(int ...a){
        int n = a.length;
        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        for(int i=0;i<n-1;i++){
            if(a[i] < min)
                min = a[i];
            if(a[i+1] - min > max)
                max = a[i+1] - min;
        }
        return max;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[] = new int[n];
        for(int i=0;i<n;i++)
            a[i] = sc.nextInt();
        System.out.println("Maximum profit would be");

        //System.out.println(FirstApproach(a));
        //System.out.println(SecondApproach(a));
        System.out.println(ThirdApproach(a));
    }
}
