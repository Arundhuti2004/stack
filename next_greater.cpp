#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n],nge[n];
    for(int i = 0 ; i <= n-1 ; i++){
        cin >> arr[i] ;
    }
    stack<int>st;
    nge[n-1] = -1;
    st.push(arr[n-1]);
    for(int i = n-2 ; i>= 0 ;i--){
        while(st.size() > 0 && st.top() <= arr[i]){
            st.pop();
        }
        if(st.size() == 0){
            nge[i] = -1;
        }
        else
            nge[i] = st.top();

        st.push(arr[i]);
        
    }
    for(int i = 0 ; i < n ; i++){
        cout << nge[i] << " ";
    }
    
    return 0;
}