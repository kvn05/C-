// how to define vector
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(3);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});

    vector<int> v(5, 100); // create vector of size 5 and contains the value 100

    vector<int> v(5); // create  vector of size 5 , all of the value is set to 0 initially

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << endl; // it is like point to memory address so we need to write *(it)

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)

        for (auto it = v.begin(); it != v.end(); it++)
            cout << *(it); // remember this - it points to the memory location

    for (auto it : v)
        cout << it; // it points to the value directly

    v.erase(v.begin() + 1)

        v.erase(v.begin() + 2, v.begin() + 4) // {1,2,3,4,5} => {1,2,5}

        v.insert(v.begin() + 1, 10); // {1,2,5,7} => {1,10,2,5,7}
    v.insert(v.begin() + 2, 3, 10)   // {1,2,5}   => {1,2,10,10,10,5}

        v.size();

    v.pop_back();

    v.swap()

    v.clear() // clear everything in the vector
}



