#include<bits/stdc++.h>

using namespace std;
class Solution {
  public:
    vector < int > previousGreaterElements(vector < int > & nums) { //function
      int n = nums.size(); //size of nums
      vector < int > nge(n,-1); //create a vector (next greater element)
      stack < int > st; // create a stcak
      for(int i = 0 ; i <= n ;i++){ //lat to fast for loop
        while(st.size() > 0 && st.top() <= nums[i]){
            st.pop();
        }
        if(st.size() == 0){
            nge[i] = -1;
        }
        else
            nge[i] = st.top();

        st.push(nums[i]);
        
            } 
            return nge;  
        }   
    };
    int main() {
  Solution obj;
  vector < int > v {3,1,2,5,4,6,2,3};
  vector < int > res = obj.previousGreaterElements(v);
  cout << "The previous greater elements are" << endl;
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }
}