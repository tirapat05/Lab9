#include<iostream>
using namespace std;

//Write the function printO() here


void printO(int N,int M)
{
    if(N <= 0 || M <= 0)
    {
    cout <<"Invalid input";
    }
    else
    {
        for(int i = 1 ; i<= N ; i++)
        {
            for(int j = 1 ; j <= M; j++)
            {
            cout<<"O";
            }
        cout << "\n" ;
        }
    }
}