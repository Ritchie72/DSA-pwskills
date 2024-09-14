#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int num)
{
    if(num < 2) return false;  
    if(num == 2) return true;  

    for(int i = 2; i <= sqrt(num); i++) 
    {
        if(num % i == 0)  
        {
            return false;
        }
    }

    return true;  
}

int main()
{
    int n;
    cout << "Please enter the number of lines: ";
    cin >> n;

    int num = 2;  

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int primesPrinted = 0;
        while (primesPrinted < i)
        {
            if (isprime(num))  
            {
                cout << num << " "; 
                primesPrinted++;
            }
            num++;  
        }

        cout << endl; 
    }

    return 0;
}
