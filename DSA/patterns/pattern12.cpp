#include<iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int i = 0;
    while (i<n)
    {
        int j = 0;
        while(j<n)
        {
            char ch = 'A'+ i + j;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;

    }
}