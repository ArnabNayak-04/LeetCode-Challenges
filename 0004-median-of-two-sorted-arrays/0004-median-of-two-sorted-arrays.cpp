class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        vector<int> marge;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] <= nums2[j]){
                marge.push_back(nums1[i]);
                i++;
            }
            else {
                marge.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            marge.push_back(nums1[i]);
            i++;
        }

        while(j<nums2.size()){
            marge.push_back(nums2[j]);
            j++;
        }

        int n = marge.size();

        if(n%2==1){
            return marge[n/2];
        }
        else {
            return (marge[n/2 - 1] + marge [n/2]) / 2.0;
        }
    }
};