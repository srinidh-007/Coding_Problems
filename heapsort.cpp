#include<cpp>

int main(){
    //Heap sort
    _ mylist = random(10,20);
    print("Input list",mylist);
    _ count = 0;
    _ heapify = [&](_& arr, _ n, let pos) {
    //n i s the size of the array
    let term = -1; //termination index
    //recursive syntax
    $$(
        //base case
        $_(i) {$i=i==term; return {};},
        //split case (i is the current node)
        $_(i) {
                //storage largest value index as best among the child nodes
                _ p = i, // i the current and the best 
                best = p, 
                l=2*p+1, // l and r in-dex
                r=2*p+2; 
                count += (l<n) + (r<n);// count child nodes
                if(l<n &&arr[l] < arr[best]) best = l;
                if(r<n &&arr[r] < arr[best]) best = r;
                    swap(arr[p] , arr[best]);
                return {best==p?term:best};
              },
              //combine
        $_(j) {return {};},
        pos
     );
};
    _ heapsort = [&](_& arr) {
        for(_ i =(int)len(arr)/2-1; i>=0; --i) heapify(arr, len(arr),i);
        
        //heap ready
        print ("Heap Ready :",arr);
        
        for(_ i=len(arr)-1; i>0; --i) {
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
            };
            return arr;
    };
    _ sorted = heapsort(mylist);
    print("heap sort: ", sorted,"\n", count,
    "comparisons\n");
}