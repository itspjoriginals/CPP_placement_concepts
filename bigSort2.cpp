#include<iostream>
#include<fstream>
#include<math.h>
#include<algorithm>
#include<string>
#include<map>
#include<vector>
#include<queue>
#include<stack>
#include<sstream>
#include<set>

using namespace std;

#define forn(i,n) for(int i=0;i<(int)(n); i++)
#define forsn(i,s,n) for(int i=(s);i<(int)(n); i++)
#define esta(x,v) (find((v).begin(),(v).end(),(x)) !=  (v).end())
#define index(x,v) (find((v).begin(),(v).end(),(x)) - (v).begin())
#define debug(x) cout << #x << " = "  << x << endl
#define pb push_back
#define mp make_pair

typedef long long tint;
typedef unsigned long long utint;
typedef long double ldouble;

typedef vector<int> vint;

int toNumber (string s)
{
    int Number;
    if ( ! (istringstream(s) >> Number) ) Number = 0; // el string vacio lo manda al cero
    return Number;
}

string toString (int number)
{
    ostringstream ostr;
    ostr << number;
    return  ostr.str();
}

int main (){
    int n;
    cin>>n;
    vector< pair<int, string> > v;
    forn(i,n){
        string s;
        cin>>s;
        v.pb(mp((int)s.size(), s));
    }
    sort(v.begin(), v.end());
    forn(i, n){
        cout<<v[i].second<<endl;
    }
    
}