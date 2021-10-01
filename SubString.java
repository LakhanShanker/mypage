import java.util.*;
public class SubString{
    static void sub(String s,String op,int n){
        if(n == s.length()){
            System.out.println(op);
            return;
        }
        sub(s,op,n+1);
        op+=s.charAt(n);
        sub(s,op,n+1);


    }
static void check(String s){
        String op = "";
        sub(s,op,0);
}
    public static void main(String args[]){
            Scanner sc=new Scanner(System.in);
            String s=sc.next();
            check(s);
        }
}
