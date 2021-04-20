#include <bits/stdc++.h>
using namespace  std;

int main()
{
    int size, n_request,position;
    cout << "Enter the size of Disk\n";
    cin >> size;
    
    cout << "Enter the number of request\n";
    cin >> n_request;
    
    int arr[n_request];
    cout << "Enter the requests\n";
    
    for(int i =0 ; i< n_request; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Enter the head position:\n";
    cin >> position;
    
    int temp_postion = position;
    int sum = 0;
    
    for(int i =0;  i< n_request; i++ )
    {
        cout << "->" << arr[i] << " ";
        sum+= abs(arr[i] - temp_postion);
        temp_postion = arr[i];
        
    }
    
    cout << "\n";
    cout << "Total head movements "<< sum << "\n";
    return 0;
    
}