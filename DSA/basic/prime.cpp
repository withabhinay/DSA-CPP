#include<iostream>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int i = 2;

    while (i<n)
    {
        if (n % i == 0)
        {
            cout << " is Not a Prime" << endl;
        }
        i++;
    }
}