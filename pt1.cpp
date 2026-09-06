#include<iostream>
using namespace std;
int main()
{
    int n ,i;

    if(n<2)
    {
cout <<"not prime";

    }
    else{
        for(int i=2; i<n;i=i+1)
        {
            if (n%i==0)
            {cout<<"not prime";}
        }
        cout<<"prime";
    } 
    cout << "Prime number program";
}