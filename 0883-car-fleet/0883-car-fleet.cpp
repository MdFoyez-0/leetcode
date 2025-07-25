class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

    int n = position.size();
    vector<pair<int , double>> carpos(n);
    
    for (int i = 0 ;i<n; i++){
 
        carpos[i] = make_pair(position[i] ,(double)(target - position[i]) / speed[i]);
    }
        sort(carpos.rbegin() , carpos.rend());
        stack<double>st;
        for(int i = 0 ; i<n ;i++){
            if (st.empty() || st.top() < carpos[i].second){
                st.push(carpos[i].second);
            }
        }
        return st.size();
    }
};
