#include<bits/stdc++.h>
using namespace std;

// map stores unique keys in sorted order
// map contains two stuff like key and its value
// map is a container in C++ STL which is used to store key-value pairs.

int main()
{
    void explainMap()
    {
        map<int, int> mp;

        map<int, pair<int, int>> mp1;

        map<pair<int, int>, int> mp2;

        mp[1] = 2;
        mp.emplace({3, 1});
        mp.insert({2, 4});

        mp2[{2, 3}] = 10;

        for (auto it : mp)
        {
            cout << it.first << " " << it.second << endl;
        }

        cout << mp[1];
        cout << mp[5];

        auto it = mp.find(3);
        cout << *(it).second;

        auto it = mp.find(5);
    }
}
