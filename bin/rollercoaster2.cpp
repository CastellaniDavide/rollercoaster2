/*
 * NOTE: it is recommended to use this even if you don't
 * understand the following code.
 */

#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

// input data
int N;
vector<int> H;

int main() {
//  uncomment the following lines if you want to read/write from files
//  ifstream cin("input.txt");
//  ofstream cout("output.txt");

    cin >> N;
    H.resize(N);
    for (int i=0; i<N; i++)
        cin >> H[i];

    cout << (int) (N / 2) + 1 << endl; // print the result
    return 0;
}
