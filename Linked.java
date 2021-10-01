public class Linked {
    static class Node {
        int x;
        Node next;

        Node(int a) {
            x = a;
            next=null;
        }
    }
    Node head;
    static public Linked add(Linked list,int x){
        Node ptr = new Node(x);
        ptr.next = null;
        if(list.head==null)
           list.head = ptr;
        else {
            Node temp = list.head;
            while(temp.next != null)
                temp = temp.next;
            temp.next = ptr;
        }
        return list;
    }
    public static void show(Linked root){
        while(root.head!=null) {
            System.out.println(root.head.x);
            root.head = root.head.next;
        }
    }

    public static void main(String[] args) {
        Linked x = new Linked();
        x = add(x,4);
        x = add(x,1);
        x = add(x,7);
        x = add(x,3);
        x = add(x,8);
        show(x);
    }
}
