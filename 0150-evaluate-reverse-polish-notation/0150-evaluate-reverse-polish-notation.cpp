class Solution {
public:
    int evalRPN(vector<string>& tokens) {
     
        stack<int>st;

        for (string list : tokens){
            if (list == "+" || list == "-" || list == "*" || list == "/"){
                int nums2 = st.top();st.pop();
                int nums1 = st.top() ; st.pop();

                if(list == "+" ) st.push(nums1 + nums2 );
                else if( list == "-") st.push(nums1 - nums2);
                else if (list == "*") st.push(nums1 * nums2);
                else if (list == "/")st.push(nums1 / nums2);

            }

            else st.push(stoi(list));
        }
        return st.top();



    }
};