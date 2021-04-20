#include <bits/stdc++.h>
using namespace  std;

int main()
{
    int size, n_request,position;
    cout << "Enter the size of Disk\n";
    cin >> size;
    
    cout << "Enter the number of request\n";
    cin >> n_request;
    
    vector <int> arr(n_request) , arr2;
    cout << "Enter the requests\n";
    
    for(int i =0 ; i< n_request; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Enter the head position:\n";
    cin >> position;
    
    
    arr.push_back(0);
    arr.push_back(size);
    arr.push_back(position);
    sort(arr.begin() ,arr.end());
    
    int j =0;
    for(j = 0;  j < arr.size() ; j++ )
    {
        if(position == arr[j])
        {
            break;
        }
    }
    
    int k = j;
    string direction ;
    cout << "Enter the direction : Right or Left \n";
    cin >> direction;
    
    if(direction == "Right")
    {
        for( j = k;  j < arr.size() ; j++)
        {
            arr2.push_back(arr[j]);
        }
        
        for(j = 0;  j < k; j++)
        {
            arr2.push_back(arr[j]);
        }
    }
    
    else if(direction == "Left")
    {
        for( j = k;  j >= 0 ; j--)
        {
            arr2.push_back(arr[j]);
        }
        
        for(j = arr.size() -1;  j >k; j--)
        {
            arr2.push_back(arr[j]);
        }
        
    }
    else {
        cout << "Choose right direction\n";
    }
    
    
    int temp_postion = arr2[0];
    cout << temp_postion ;
    int sum = 0;
    
    for(int i =1;  i< arr2.size() ; i++ )
    {
        cout << "->" << arr2[i] << " ";
        sum+= abs(arr2[i] - temp_postion);
        temp_postion = arr2[i];
        
    }
    
    cout << "\n";
    cout << "Total head movements "<< sum << "\n";
    return 0;
    
}