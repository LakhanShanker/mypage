public class Sorting {
    public static void sort(int a[],int low,int mid,int high){
        int ar[] = new int[high-low+1];
        int i=low,j=mid+1;
        int k=0;
        while(i<=mid && j<=high) {
            if (a[i] > a[j]) {
                ar[k] = a[j];
                j++;k++;
            } else {
                ar[k] = a[i];
                i++;k++;
            }
        }
        while(i<=mid){
            ar[k]=a[i];
            i++;k++;
        }
        while(j<=high){
            ar[k]=a[j];
            j++;k++;
        }
        for(i=low;i<=high;i++)
            a[i]=ar[i-low];
    }
    public static void mergeSort(int a[],int i,int j){
        if(j>i){
            int mid=(i+j)/2;
            mergeSort(a,i,mid);
            mergeSort(a,mid+1,j);
            sort(a,i,mid,j);
        }
    }

    public static void main(String[] args) {
        int a[] = {34,6,8,9,5,2,45,6,77,88,89,9};
        for(int i:a)
            System.out.println(i+" ");
        mergeSort(a,0,a.length-1);
        System.out.println();
        for(int i:a)
            System.out.println(i+" ");
    }
}
