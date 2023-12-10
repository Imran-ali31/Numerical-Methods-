#include<bits/stdc++.h>
using namespace std;
double f(double x){
   return log(x);
}
int main(){
    double ll , ul;
    int n;
    cout.precision(7);
    cout<<"Enter lower limit and upper limit = ";
    cin>>ll>>ul;
    cout<<"Enter the value of n: ";
    cin>>n;
    double x[n+1],y[n+1];
    double h= (ul-ll)/n;
    cout<<"Difference Table: \nx\t\ty"<<endl;
    cout<<"......................................\n";
    for(int i=0; i<=n;i++){
        if(i==0){
            x[i]=ll;
            y[i]=f(x[i]);
        }
        else {
                x[i]=x[i-1]+h;
                y[i]=f(x[i]);
        }
        cout<<'x'<<i<<'='<<x[i]<<'\t'<<'y'<<i<<'='<<y[i]<<endl;
    }
    double ans = (y[0]+y[n]);
    for(int i=1;i<n;i++){
        if(i&1){
            ans+=(4*y[i]);
        }
        else {
            ans+=(2*y[i]);
        }
    }
    ans*=h;
    ans/=3.0;
    cout<<"Result of simpson's 1/3 rule : "<<ans<<endl;
    return 0;
}
