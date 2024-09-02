#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p = {1,2}; //pair declaration 
    cout<<p.first<<endl<<p.second<<endl;
    
    pair<int , pair<int , int>> l = {1,{2,3}}; //pair decalration inside pair
    cout<<l.first<<l.second.first<<endl<<l.second.second<<endl;
           
    pair<int, int> arr[] = {{1,2},{2,3},{3,4}};  //array of pairs
    cout<<arr[0].second<<endl<<"second value"<<arr[1].first<<endl;
    
    return 0;
}
