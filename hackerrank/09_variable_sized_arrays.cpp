#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* --- Solution code ---- */  
    int queries;    // for number of queries
    int query_row, query_data;
    int k;  // to hold data
    int rows, cols;   // for number of data rows and data index in each row
    std::vector<int> que_row, que_data;     // 1D vector to hold the data of the row
    
    cin >> rows;
    cin >> queries;

    vector<vector<int>> data(rows); // 2D vector to hold all the data of all the rows

    // for all the rows
    for(int row=0; row < rows; row++) {
        cin >> cols;

        // declare size of each row of the vector
        data[row] = vector<int>(cols);

        // for all the index in each row
        for(int col=0; col < cols; col++) {  
            cin >> k;
            data[row][col] = k;
       }
    } 

    // for all the queries
    for(int query=0; query < queries; query++) {
        cin >> query_row;
        cin >> query_data;

        que_row.push_back(query_row);
        que_data.push_back(query_data);  
    }
    
    // addressing thye queries
    for (int i =0; i < queries; i++){
        cout << data[que_row[i]][que_data[i]] << endl;
    }

    return 0;
}
