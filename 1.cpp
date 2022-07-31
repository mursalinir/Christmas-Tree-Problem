#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a[100000];
    int n, var;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    int* maximum = max_element(a, a+n);
    sort(a, a + n, greater<>());
    var = a[1];
    for(int i = 0; i<n; i++)
    {
        if(a[i]!=var)
        {
            a[i] = *maximum;
        }
    }
    sort(a, a + n, greater<>());
    for (int i = 0; i < n; i++)
        cout << a[i] << endl;
}
