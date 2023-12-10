#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number of data : ";
    int n;  cin>>n;
    double x[n],y[n],sx=0,sy=0,sxy=0,sxx=0;
    cout<<"Enter all data : " ;
    for (int i=0;i<n;i++)cin>>x[i]>>y[i];
    for(int i=0;i<n;i++){
        sx+=x[i];
        sy+=y[i];
        sxy+=(x[i]*y[i]);
        sxx+=(x[i]*x[i]);
    }
    // straight line equation y=a+bx;
    double a=(sxy*sx - sy*sxx)/(sx*sx - n*sxx);
    double b=(sy-n*a)/sx;
    cout<<"Require solution is :" <<"y = "<<b<<'x'<<" + "<<a<<endl;
    return 0;
}
