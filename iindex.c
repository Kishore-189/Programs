#include <iostream>

using namespace std;

int main()
{
    
    int arr[1000000];
    int sum=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=i*arr[i];
    }
    for(int i=0;i<n;i++)
    {
        // cout<<arr[i]<<" ";
        
    }
    cout<<"\n"<<sum;

    return 0;
}
