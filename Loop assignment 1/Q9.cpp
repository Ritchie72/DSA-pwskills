#include<iostream>
using namespace std;
bool isprime(int n)

{
    bool flag = true;
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;

}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i+j == n && isprime(i) && isprime(j))
            {
                cout<<i<<" "<<j<<endl;

            }
        }
    }
}