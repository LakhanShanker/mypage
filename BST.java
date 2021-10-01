import java.util.Scanner;

class Node{
    int data;
    Node left;
    Node right;
    public Node(int a){
        data = a;
        left=right=null;
    }
}
public class BST {
    Node root;
    static Node convert(Node root,int a){
            if(root.data > a){
                if(root.left == null)
                    root.left = new Node(a);
                else
                    convert(root.left,a);
            }
            else{
                if(root.right == null)
                    root.right = new Node(a);
                else
                    convert(root.right,a);
            }
            return root;
    }
    static void preOrder(Node root){
        if(root == null)
            return;
        System.out.println(root.data);
         preOrder(root.left);
        preOrder(root.right);
    }
    static void postOrder(Node root){
        if(root == null)
            return;
        postOrder(root.left);
        postOrder(root.right);
        System.out.println(root.data);
    }
    static void inOrder(Node root){
        if(root == null)
            return;
        inOrder(root.left);
        System.out.println(root.data);
        inOrder(root.right);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements");
        int n = sc.nextInt();
        BST tree = new BST();
        tree.root = new Node(sc.nextInt());
        for(int i=1;i<n;i++)
            tree.root = convert(tree.root,sc.nextInt());
        inOrder(tree.root);
    }
}
