#include <iostream>

using namespace std;

int main()
{
    
    int arr[1000000]; //arraysize
    int sum=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];   //Getting array as input
    }
    for(int i=0;i<n;i++)
    {
        sum+=i*arr[i]; //Multiplying array elements with its index and torr it in sum variable.
    }
    
    cout<<"\n"<<sum;

    return 0;

}
