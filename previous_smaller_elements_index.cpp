#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n],pgi[n];
    for(int i = 0 ; i <= n-1 ; i++){
        cin >> arr[i] ;
    }
    stack<int>st;
     pgi[0] = -1;
     st.push(0);
    for(int i = 1 ; i <= n-1 ; i++){
        while(st.size() > 0 && arr[st.top()] >= arr[i]){
            st.pop();
        }
        if(st.size() == 0){
            pgi[i] = -1;
        }
        else
            pgi[i] = st.top(); // 0
            
         st.push(i);
        
    }
    
    for(int i = 0 ; i < n ; i++){
        // pgi[i] = i - pgi[i];// 0 - (-1) = 1
        cout << pgi[i] << " ";


    } 
    
}