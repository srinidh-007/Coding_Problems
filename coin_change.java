/*
Coin change problem is the last algorithm we are going to discuss in this section of dynamic programming. 
In the coin change problem, we are basically provided with coins with different denominations like 1$, 5$ and 10$. 
Now, we have to make an amount by using these coins such that a minimum number of coins are used.
*/

class Coin {
  static final int INF = 100000;

  public static int min(int x,int y) {
    if(x < y)
      return x;
    return y;
  }

  //k is number of denominations of the coin or length of d
  public static int coinChange(int d[], int n, int k) {
    int[] M = new int[n+1];
    M[0] = 0;

    for(int j=1; j<=n; j++) {
      int minimum = INF;

      for(int i=1; i<=k; i++) {
        if(j >= d[i]) {
          minimum = min(minimum, 1+M[j-d[i]]);
        }
      }
      M[j] = minimum;
    }
    return M[n];
  }

  public static void main(String[] args) {
    // array starting from 1, element at index 0 is fake
  int d[] = {0, 1, 2, 3};
  System.out.println(coinChange(d, 5, 3)); //to make 5. Number of denominations = 3
  }
}
