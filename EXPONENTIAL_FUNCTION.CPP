#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main()
{
    int i, n;
    float x, sum=1, total=1;


    cout<<" Enter the value for x : ";
    cin>>x;

    cout<<" Enter the value for n : ";
    cin>>n;

    /* Loop to calculate the value of Exponential */
    for(i=1;i<=n;i++)
    {
        total=total*x/i;
        sum=sum+total;
    }

    cout<<" The Exponential Value of "<<x<<" is "<<setprecision(4)<<sum;
    return 0 ;
}
