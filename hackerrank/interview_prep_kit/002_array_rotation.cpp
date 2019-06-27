/*
 Function Description:
    Complete the function rotLeft in the editor below. It should return the resulting array of integers.

    rotLeft has the following parameter(s):
        - An array of integers .
        - An integer , the number of rotations.
*/

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/* -------------------------------------------- Solution code starts --------------------------------------------- */
vector<int> rotLeft(vector<int> a, int d) {
    vector<int> tempVect;
    
    // for all the number of rotation
    for(int i=0; i < d; i++) {
        int num = a[0];                  // save first element of the input
        a.erase(a.begin());
        tempVect = a;                   // copy modified vector input
        tempVect.push_back(num);        // add first index input to last as left rotation is intended
        a = tempVect;                   // update original vector with the modification
        tempVect.clear();               // clear temporary vector for next iteration and also not to cause memory overflow
    }
    return a;                           // return updated vector 
}
/* ------------------------------------------ Solution code ends -------------------------------------------------- */


// -------> Main driver code starts
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nd_temp;
    getline(cin, nd_temp);

    vector<string> nd = split_string(nd_temp);

    int n = stoi(nd[0]);

    int d = stoi(nd[1]);

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    vector<int> result = rotLeft(a, d);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
