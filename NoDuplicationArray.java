package noduplicationarray;

public class NoDuplicationArray {
    private long[] a;
    private int n; // number of elements

    public NoDuplicationArray(int max) {
        this.a = new long[max]; // initialing an array 
        this.n = 0;             // initial number of elements
    }

    public boolean find(long key) {       // finding if a particular number present in the array
        for (int i = 0; i < this.n; i++) 
        {
            if (this.a[i] == key) {
                return true;
            }
        }
        return false;
    }

    public void insert(long value) { // inserting elements to the array
        if (this.n == a.length) {
            System.out.println("This array is already filled");
            return;
        } else {
            if (find(value)) {
                System.out.println("Value is already in the array,insertion terminated");
            } else {
                a[this.n] = value;
                this.n++;
            }
        }
    }
    
    public boolean delete(long value){
    for(int i=0;i<this.n;i++){
    if(a[i]==value){
        for(int j=i;j<this.n-1;j++){
       this.a[j]= this.a[j+1];
        }
        this.n--;
        System.out.println("Element is deleted");
        return true;
    }
    }
     System.out.println("Deletion terminated because value is not found");
        return false;
    }
    
    public void display(){
        System.out.println("Elements of array");
        for(int i=0;i<this.n;i++){
            System.out.print(this.a[i]+" ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        NoDuplicationArray x = new NoDuplicationArray(6);
        x.insert(9);
        x.insert(7);
        x.insert(3);
        x.insert(9);
        x.display();
        x.delete(8);
        x.display();
    
    }
    
}
