#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return log(x);
}
int main()
{
    cout.precision(7);
    cout.setf(ios::fixed);
    cout<<"Enter lower bound & upper bound :";
    double lb,ub;   cin>>lb>>ub;
    cout<<"Enter number of interval (n): ";
    int n;   cin>>n;
    double x[n+1],y[n+1],h;
    h=(ub-lb)/n;

    for(int i=0; i<=n;i++){
        if(i==0){
            x[i]=lb;
            y[i]=f(x[i]);
        }
        else {
            x[i]=x[i-1]+h;
            y[i]=f(x[i]);
        }
    }
    double ans = y[0]+y[n];

    for(int i=1;i<n;i++){
        if(i%3==0){
            ans +=(2*y[i]);
        }
        else ans+=(3*y[i]);
    }
    ans*=(3*h/8);
    cout<<"Result : " <<ans <<endl;
    return 0;

}
