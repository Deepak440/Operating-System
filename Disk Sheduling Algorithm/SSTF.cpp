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
    
    
    arr2.push_back(position);
    
    int temp_number = n_request;
    
   
    for (int j = 0;  j < temp_number; j++)
    {
    
        int diff = size;
    
        int temp_postion = arr2[j];
    
        vector <int> :: iterator i, r;
        i = arr.begin();
        int res = 0;
    
        for( auto i = arr.begin();  i != arr.end(); i++ )
        {
            
            if(diff > abs(temp_postion - *i))
            {
                diff = abs(temp_postion - *i);
                res = *i;
                r = i;
            
            }
        
        }
        if(temp_postion > res){
        temp_postion =  temp_postion - diff;
        }
        else
        {
            temp_postion = temp_postion + diff;
        }
        arr.erase(r);
        arr2.push_back(temp_postion);
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