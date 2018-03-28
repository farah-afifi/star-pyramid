#include <iostream>
#include <cmath>
using namespace std;

int main()
{   int height;
    cin>>height;
    int x=1;
    for(int i=1;i<=height;i++){
        for(int j=0;j<height-i;j++){
            cout<<' ';
        }

        for (int j=0;j<x;j++){
            cout<<'*';
        }
        x+=2;
        cout<<endl;
   }
    return 0;
}
