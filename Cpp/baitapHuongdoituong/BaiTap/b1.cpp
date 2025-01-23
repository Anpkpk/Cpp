#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll gcd(ll a, ll b){
    if (b == 0) return a;
    else return gcd(b, a % b);
}

class phanSo{
    private:
        ll tuSo;
        ll mauSo;
    public:
        phanSo(ll tuSo, ll mauSo);
        friend  istream& operator >> (istream&, phanSo&);
        friend  ostream& operator << (ostream&, phanSo&);
        void rutGon();
};

phanSo::phanSo(ll tuSo, ll mauSo){
    this->tuSo = tuSo;
    this->mauSo = mauSo;
}

istream& operator >> (istream& in, phanSo& a){
    in >> a.tuSo >> a.mauSo;
    return in;
}

ostream& operator << (ostream& out, phanSo& a){
    out << a.tuSo << "/" << a.mauSo << endl;
    return out;
}

void phanSo::rutGon(){
    ll g = gcd(this->tuSo, this->mauSo);
    this->tuSo /= g;
    this->mauSo /= g;
}

int main(){
    phanSo p(1, 1);
    cin >> p;
    p.rutGon();
    cout << p;
    return 0;
}