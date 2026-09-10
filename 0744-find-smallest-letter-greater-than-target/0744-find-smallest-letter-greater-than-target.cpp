class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int start=0,end=n-1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(letters[mid]<=target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }

        if(start == n){
            return letters[0];
        }
        else{
            return letters[start];
        }

    }
};