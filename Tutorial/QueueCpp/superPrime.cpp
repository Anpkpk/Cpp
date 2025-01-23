#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

std::vector<int> superPrimeNumber(int n)
{
    queue<int> q;
    vector<int> v;
    for (int i = 2; i <= n, i < 10; i++) {
        if (isPrime(i)){
            q.push(i);
        }
    }
    while (!q.empty()){
        for (int i = 1; i <= 9; i++){
            int k = q.front()*10 + i;
            if (k <= n && isPrime(k)){
                q.push(k);
            }
        }
        v.push_back(q.front());
        q.pop();
    }
    return v;
}

int main() {
    int n; cin >> n;
    vector<int> ans = superPrimeNumber(n);
    for (auto x : ans) {
        cout << x << " ";
    }
}