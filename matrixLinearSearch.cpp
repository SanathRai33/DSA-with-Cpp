#include <iostream>
using namespace std;

int linearSearch( int matrix[4][3], int rows, int cols, int target){

    for( int i=0; i<rows; i++){
        for( int j=0; j<cols; j++){
            if( target == matrix[i][j]){
                cout << "\nFound " << target << " at position: (" << i << ", " << j << ")" << endl;
                return true;
            }
        }
    }

    cout << "\n" << target << " not found in the matrix." << endl;
    return false;
}


int main() {
    
    int matrix[4][3] = { {1, 2, 3}, { 4, 5, 6}, { 7, 8, 9}, { 10, 11, 12} };
    int rows = 4;
    int cols = 3;
    int target = 9;
    
    linearSearch(matrix, rows, cols, target);
    
    return 0;
}