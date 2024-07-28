#include<bits/stdc++.h>
using namespace std;

int main()
{
    void explainStack() // LIFO
    {
        stack<int> st;

        // here is basically 3 operation we can perform
        push(value) // to insert the value in the top of stack
            pop()   // to delete the value from the top of stack
            top()   // just for the purpose of print

            st.push(1); // {1}
        st.push(2);     // {2,1}
        st.push(3);     // {3,2,1}
        st.emplace(4);  // {4,3,2,1}

        cout << st.top(); // print - 4   ** st[2] is invalid **

        st.pop() // {3,2,1}

            st.size()
    }
}


// complexity is like bigO(1) for all the operations
