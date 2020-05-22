#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"This is my Jenkins triggered C++ Code"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}