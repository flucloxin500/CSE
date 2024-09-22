/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream outFile("Random.txt");
    if(!outFile)
    {
        cout<<"File haven't created";
        return -1;
    }

    for ( int i = 1 ; i <= 100 ; i++)
    {
        int Rando = rand();
        outFile<<Rando<<endl;
    }
    outFile.close();
    ifstream inFile("Random.txt");
    if (!inFile)
    {
        cout<<"Error while openning the file";
        return -1;
    }
    int X;

    cout<<"Random values are "<<endl;
    for ( int i = 1 ; i <= 100 ; i++)
    {
        inFile>>X;
        cout<<X<<endl;
    }
    inFile.close();
}