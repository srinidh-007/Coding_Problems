import java.util.Scanner;

public class TowerOfHanoi {
    public static void main(String args[])
    {
        Scanner sn= new Scanner(System.in);
        System.out.print("Number of blocks:");
        int n=sn.nextInt();
        int a=1, b=2, c=3;
        hanoi(n, a, b, c);

    }
    public static void hanoi(int n,int a,int b,int c){
        if(n==0)
            return;

        hanoi(n-1, a, c, b);

        System.out.println(n + "("+ a +"=>" + b +")");

        hanoi(n-1, c, b, a);

    }
}
