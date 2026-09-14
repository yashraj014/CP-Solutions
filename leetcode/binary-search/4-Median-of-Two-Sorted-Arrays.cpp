class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> ans(m + n);
        int i = 0, j = 0;
        int k = 0;
        int size = m + n;
        if ((m + n) % 2 == 0) {

            int idx1 = size / 2 - 1;
            int idx2 = size / 2;
            int el1, el2;
            while (i < m && j < n) {
                if (nums1[i] <= nums2[j]) {
                    if (k == idx1) {
                        el1 = nums1[i];

                    } else if (k == idx2) {
                        el2 = nums1[i];
                    }
                    i++;
                } else {
                    if (k == idx1) {
                        el1 = nums2[j];

                    } else if (k == idx2) {
                        el2 = nums2[j];
                    }
                    j++;
                }
                k++;
            }

            while (i < m) {
                if (k == idx1) {
                    el1 = nums1[i];

                } else if (k == idx2) {
                    el2 = nums1[i];
                }
                k++;
                i++;
            }
            while (j < n) {
                if (k == idx1) {
                    el1 = nums2[j];

                } else if (k == idx2) {
                    el2 = nums2[j];
                }
                k++;
                j++;
            }
            return double(el1 + el2) / 2;
        } else {
            int idx = size / 2;
            int el;
            bool flag=false;
            while (i < m && j < n) {
                if (nums1[i] <= nums2[j]) {
                    if (k == idx) {
                        el = nums1[i];
                        flag=true;
                        break;
                    }

                    i++;
                } else {
                    if (k == idx) {
                        el = nums2[j];
                        flag=true;
                        break;
                    }

                    j++;
                }
                k++;
            }
            while (!flag && i < m) {
                if (k == idx) {
                    el = nums1[i];
                    flag = true;
                    break;
                }
                k++;
                i++;
            }
            while (!flag && j < n) {
                if (k == idx) {
                    el = nums2[j];
                    flag= true;
                    break;
                }
                k++;
                j++;
            }
           
            return double(el);
        }
    
    return 0.000;
}
}
;