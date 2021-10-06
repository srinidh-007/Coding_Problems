/*#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
// Generates and prints 'count' random 
// numbers in range [L, U]. 
void printRandoms(int L, int U, int count) 
{ 
    int i; 
    for (i = 0; i < count; i++) { 
        int num=(rand()%(U-L+1))+L; 
        printf("%d ",num); 
    } 
}  
// Driver code 
int main() 
{
    int L = 0, U = 49, count = 5; 
    // Use current time as  
    // seed for random generator 
    srand(time(0));
    printRandoms(L, U, count);
    return 0; 
}
*/
