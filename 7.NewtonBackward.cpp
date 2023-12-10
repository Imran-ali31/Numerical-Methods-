#include<bits/stdc++.h>
using namespace std;
int main(){
    double x[100],y[100][100];
    cout<<"Enter number of data \n";
    int n;   cin>>n;
    for(int i=0; i<n;i++){
        cout<<"x["<<i<<"]= "; cin>>x[i];
        cout<<"y["<<i<<"]= "; cin>>y[i][0];
    }
    double xx; cout<<"Enter  value of x "; cin>>xx;
    for(int i=1; i<n;i++){
        for(int j=0; j<n-i;j++)y[j][i]=y[j+1][i-1]-y[j][i-1];
    }
    cout<<"Newton Backward different's table \n";
    for(int i=0;i<n;i++){
        cout<<x[i]<<'\t';
        for(int j=0;j<n-i;j++){
            cout<<y[i][j]<<'\t';
        }
        cout<<endl;
    }
    double u= (xx-x[n-1])/(x[1]-x[0]),ans=y[n-1][0],p,q=1;
    p=u;
    cout<<ans<<endl;
    for(int i=n-2,j=1; i>=0;--i,j++){
            //cout<<ans<<endl;
        ans+=((u*y[i][j])/q);
        q=q*(j+1);
        u=(u*(p+j));
    }
     cout<<"Value of Y in point "<<xx<<"= "<<ans<<endl;
    return 0;

}

