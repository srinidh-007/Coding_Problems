
import java.util.Scanner;

public class D_Pattern {
 
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a single character to build pattern with: ");
        String base = sc.nextLine();
        sc.close();

        // i is for rows
        for(int i=1; i<10; i++)       
        {   
            // j is for column
            for(int j=1; j<=10; j++)
            {
                if(i<=5)
                {
                    if(j==1 || j == 2* i)   
                /*  when i < 5 stars will be at 1's and even position in subsequent rows from 2 to 10 */   
                    {                             
                        System.out.print(base);
                    }
                    else 
                    {
                        System.out.print(" ");
                    }
                }
                if(i>5)
                {
                    if(j==1||j==2*(10-i))
                    // when i > 5 * will be at 1's and even positon in subsequent rows from 8 to 2
                    {
                        System.out.print(base);
                        
                    }
                    else 
                    {
                        System.out.print(" ");
                    }
                }
            }
            
            System.out.println();
        }
    }
}

