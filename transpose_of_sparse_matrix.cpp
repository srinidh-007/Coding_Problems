// Transpose of a sparse matrix

#include<iostream>
#include<string>
using namespace std;

int main() {
    int row,column,size;

    // input for number of rows and columns and number of non zero elements
    cout<<"Enter the number of rows in the matrix: ";
    cin>>row;
    cout<<"Enter the number of columns in the matrix: ";
    cin>>column;
    cout<<"Enter the number of non zero elements in the matrix: ";
    cin>>size;

    // inputing the matrix in sparse form (triplet form)
    if(size <= (row*column)){
    int sparseMatrix[size][3];
    for(int i=0 ; i<size ; i++){
        cout<<"Enter the row index , column index and value of element "<<i+1<<endl;
        cin>>sparseMatrix[i][0];
        cin>>sparseMatrix[i][1];
        cin>>sparseMatrix[i][2];
    }

    // Displaying your matrix
    cout<<"Your sparse matrix is :\n";
    for(int i=0 ; i<size ; i++){
        cout<<sparseMatrix[i][0]<<" "<<sparseMatrix[i][1]<<" "<<sparseMatrix[i][2]<<endl;
    }

    // Finding the transpose
    int transpose[size][3];
    int k=0;
    for(int i=0 ; i<column ; i++){
        for(int j=0 ; j<size ; j++){
            if(sparseMatrix[j][1] == i){
                transpose[k][0] = sparseMatrix[j][1];
                transpose[k][1] = sparseMatrix[j][0];
                transpose[k][2] = sparseMatrix[j][2];
                k++;
            }
        }
    }

    // Displaying the transpose of the sparse matrix
    cout<<"\n\nTranspose of sparse matrix is :\n";
    for(int i=0 ; i<size ; i++){
        cout<<transpose[i][0]<<" "<<transpose[i][1]<<" "<<transpose[i][2]<<endl;
    }
    }
    else{
        cout<<"Error\n";
    }
    
    return 0;
}