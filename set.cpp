#include<bits/stdc++.h>
using namespace std;

/// everything is *sorted* and all the elements are *unique*
// important function is find , count , erase and insert

// every operation will happen in logarithmic time complexity

int main()
{
    void explainSet()
    {

        set<int> st;
        st.insert(1);  // {1}
        st.emplace(2); // {1,2}
        st.emplace(2); // {1,2,3}
        st.emplace(4); // {1,2,4}
        st.emplace(5); // {1,2,4,5}

        // begin() , end() , rbegin(), size()
        // emtpy() and swap() are same as those of above
        // {1,2,3,4,5} if it exist than it stores that position
        auto it = st.find(3);

        auto it = st.find(6); // since 6 is not present so it points to the next of 5

        st.erase(5); // erase takes logarithmic time

        int cnt = st.count(3); // if 3 is present then cnt = 1
                               // if it not present then cnt = 0

        auto it = st.find(3);
        st.erase(it); // it takes constant time   O(1)

        auto it1 = st.find(2);
        auto it2 = st.find(4);
        st.erase(it1, it2); // after erase {1,4,5}

        // lower_bound and upper_bound() function works in the same way
        // as in vector but it takes logarithmic time
    }
}
