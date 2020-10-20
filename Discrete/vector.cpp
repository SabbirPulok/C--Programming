#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char ** argv){
    int input;
    vector<int> intVector;
    while (cin >> input)
        intVector.push_back(input);
    //print vector contents
    //copy(intVector.begin(), intVector.end(), ostream_iterator<char>(cout, " ")); cout << "\n";

    return 0;
}
