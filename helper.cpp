#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<string> vec) {
    for (string word : vec) {
        cout << word << endl;
    }
}