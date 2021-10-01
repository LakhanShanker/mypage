import java.util.*;
public class Graph {
    LinkedList<Integer> adj[];
    Graph(int v){
        adj = new LinkedList[v];
        for(int i=0;i<v;i++)
            adj[i] = new LinkedList<>();
    }
    public void addEdge(int s,int d){
        adj[s].add(d);
        adj[d].add(s);
    }
    public void print(int v){
        for(int i=0;i<v;i++)
            System.out.println(adj[i]);
    }
     public boolean dfs(int s,int d){
        boolean  check[] = new boolean[adj.length];
        Stack<Integer> st = new Stack<>();
        st.push(s);
        check[s]=true;
        while (!st.isEmpty()){
            int cur =st.pop();
            if(cur == d) return true;
            for(int i: adj[cur]){
                if(!check[i]){
                    st.push(i);
                    check[i] = true;
                }
            }
        }
        return false;
    }

    public int bfs(int s , int d){
        boolean mark[] = new boolean[adj.length];
        int par[] = new int[adj.length];

        Queue<Integer> q = new LinkedList<>();
        q.add(s);
        par[s] = -1;
        mark[s] = true;

        while(!q.isEmpty()){
            int cur = q.poll();
            if(cur == d) break;
            for(int i: adj[cur]){
                if(!mark[i]){
                    q.add(i);
                    par[i] = cur;
                    mark[i] = true;
                }
            }
        }
        int dd=0;
        int cur = d;
        while (par[cur] != -1){
            cur = par[cur];
            dd++;
        }
        return dd;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter vertices and edges of Graph");
        int v = sc.nextInt();
        int e = sc.nextInt();

        Graph g = new Graph(v);
        System.out.println("Enter edges");
        for(int i=0;i<e;i++){
            int s = sc.nextInt();
            int d = sc.nextInt();
            g.addEdge(s,d);
        }
        g.print(v);
        System.out.println("Enter places you want to calculate distance");
        int sr = sc.nextInt();
        int des = sc.nextInt();
        //System.out.println(g.bfs(sr,des));
        System.out.println("Lets see if possible : " + g.dfs(sr,des));
    }
}
