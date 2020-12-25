// https://vjudge.net/problem/UVA-12577/origin

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i=1;
    for(string str; cin>>str and str != "*"; i++)
        cout<<"Case "<<i<<": "<<(str=="Hajj"?"Hajj-e-Akbar":"Hajj-e-Asghar")<<'\n';
}
