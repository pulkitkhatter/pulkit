#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int start=0,end=n;
    while(1)
    {
        int mid=((start+end)/2);
        if(arr[mid]==key){
        cout<<mid;break;}
        else if(arr[mid]>key)
        end=mid-1;
        else
        start=mid+1;
    }
    return 0;
}