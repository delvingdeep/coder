#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

    /* ------------------------ Solution code starts --------------------------- */
    Difference(vector<int> ele) : elements(ele) {}
    void computeDifference() {
        int diff = 0;
        for(int i = 0; i < elements.size()-1; i++) {
            for(int j = 1; j < elements.size(); j++) {
                diff = abs(elements[i] - elements[j]);
                
                if( diff > maximumDifference) { maximumDifference = diff; };
            }
        }
    }
    /* ------------------------- End of Solution code ----------------------- */
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}