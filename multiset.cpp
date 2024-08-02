#include<bits/stdc++.h>
using namespace std;

// same as set
// it can stores duplicates elements also

int main()
{
    void explianMultiSet()
    {
        multiset<int> ms;

        ms.insert(1); // {1}
        ms.insert(1); // {1,1}
        ms.insert(1); // {1,1,1}

        ms.erase(1); // it delete the all 1's

        int cnt = ms.count(1);

        ms.erase(ms.find(1)); // only single one delete

        ms.erase(ms.find(1), ms.find(1) + 2);
    }
}
