#include<bits/stdc++.h>
using namespace std;
int main{

    void explainQueue{
    queue<int> q;
    q.push(1);    // {1}
    q.push(2);    // {1,2}
    q.emplace(4); // {1,2,4}

    q.back() += 5; // {1,2,9}

    cout << q.back(); // print 9

    cout << q.front(); // print 1

    q.pop() // {2,9}

    cout<< q.front(); // print 2
    }



// it follows the FIFO operation generally 
}

