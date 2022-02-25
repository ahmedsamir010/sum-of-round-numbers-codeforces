#include <iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<algorithm>
#include<deque>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<deque>
using namespace std;
void reverseQueue(queue<int>& Queue)
{
    stack<int> Stack;
    while (!Queue.empty()) {
        Stack.push(Queue.front());
        Queue.pop();
    }
    while (!Stack.empty()) {
        Queue.push(Stack.top());
        Stack.pop();
    }
}
#define ll long long
#define ld long double
#define pi 3.141592653589793238
#define ahmed  ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define endl "\n"
int main()
{
    ahmed ll t = 0, n; 
    cin >> t;
    while (t--) {
        ll temp = 0;
        ll s = 0; vector<int>v;
        cin >> n; s = 0, temp = 0;
        if (n % 10 != 0) {
            v.push_back(n % 10);
        }temp = n % 10;
        n -= temp;
        if (n % 100 != 0) {
            v.push_back(n % 100);
        }
        temp = n % 100;
        n -= temp;
        if (n % 1000 != 0) {
            v.push_back(n % 1000);
        }temp = n % 1000;
        n -= temp;
        if (n % 10000 != 0) {
            v.push_back(n % 10000);
        }
        if (n >=10000 and n%10000==0) {
            v.push_back(n);
        }
        cout << v.size() << endl;
        for (int i = 0; i < v.size();i++)cout << v[i] << ' ';
        cout << endl;
    }
}