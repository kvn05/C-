#include<bits/stdc++.h>
using namespace std;

int main{
    void explainPQ
    { // priority queues are generally work like tree structure

        priority_queue<int> pq;

        pq.push(5);     // {5}
        pq.push(2);     // {5,2}
        pq.push(8);     // {8,5,2}
        pq.emplace(10); // {10,8,5,2}

        cout << pq.top(); // print 10

        pq.pop(); // remove 10  ----   {8,5,2}

        cout << pq.top(); // print 8

        // Minimum heap
        priority_queue<int, vector<int>, greater<int>> pq;

        pq.push(5);     // {5}
        pq.push(2);     // {2,5}
        pq.push(8);     // {2,5,8}
        pq.emplace(10); // {2,5,8,10}

        cout << pq.top(); // print 2
    }
}

// push --- log(n)
// pop --- log(n)  // in case of heapify down
// top --- o(1) 
