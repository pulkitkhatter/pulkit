#include<iostream>
using namespace std;
int main()
{
    int a,key=3;
    cin>>a;
    int arr[a]={1,2,3,4};
    for(int i=0;i<a;i++)
    {
        if(arr[i]==key){
            cout<<i;
            break;
        }
    }
    return 0;
}