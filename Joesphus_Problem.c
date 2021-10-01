#include<stdio.h>
int josephus(int n, int k)
{
    //This is Index
    if(n==1)
        return 0;
        
    int x=josephus(n-1,k);
    int y=(x+k)%n;
    return y;
}

// Driver Program to test above function
int main()
{
    int T;
    //Testcases
    printf("No of Test Cases: ");
    scanf("%d",&T); 
    int count=1;
    while (T--)
    {
        printf("\nTest case : %d", count);
        int N;
        //taking input N
        printf("\nEnter no of Persons: ");
        scanf("%d",&N);
        int K;
        //taking input K
        printf("NOTE: K indicates that K-1 persons are skipped and Kth person is killed in circle. ");
        printf("\nEnter K value: ");
        scanf("%d",&K);
        printf("The chosen place is %d\n", 1+josephus(N, K));
        count++;
    }
    return 0;
}