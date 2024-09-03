#include <bits/stdc++.h>
using namespace std;
int main()
{
   

    vector <int> p(5,100);
    
    
    int i=2;
    int target = 30;
    int num;
    while(i<target)
    {
             
             if(i % 2 == 0)
             {
                p.push_back(i); 
             }
            i++;
             
        
    }
    
    
    
    for(auto i : p)
    cout<<i<<endl;
    
    p.erase(p.begin() + 4, p.begin() + 7);
    
        for(auto i : p)
    cout<<"value after erasing "<<i<<endl;
    
    
    
    //insertion in  vector : 
    
    vector <int> v2(5,100);
    
    for(auto i : v2)
    cout<<"values in the vector :"<<i<<endl;
    
    
    v2.insert(v2.begin(),20);
    for(auto i : v2)
    cout<<"value after insertion at begin :"<<i<<endl;
    
    v2.insert(v2.begin()+3,90);
    
    for(auto i : v2)
    cout<<"value after insertion at begin + 3:"<<i<<endl;
    
    v2.insert(v2.begin()+5,2,89);
    
    for(auto i : v2)
    cout<<"value after insertion at begin + 5 of two elemetns:"<<i<<endl;
    
    return 0;
}
