import java.util.Scanner;

public class Permutation {
    static void swap(char a,char  b){
        char t=a;
        a=b;
        b=t;
    }
    static  void check(String s,int n){
        if( n >= s.length()){
            System.out.println(s);
            return;
        }
        for(int i=n;i<s.length();i++){

            swap(s.charAt(i),s.charAt(n));
            check(s,n+1);
            swap(s.charAt(i),s.charAt(n));
        }

    }

    static void permute(String s){
        check(s,0);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s=sc.next();
        permute(s);
    }
}
