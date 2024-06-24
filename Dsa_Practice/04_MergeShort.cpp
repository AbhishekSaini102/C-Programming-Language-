// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(vector<int> &nums, int left, int mid, int right)
// {

//     int t1 = mid - left + 1;
//     int t2 = right - mid;

//     int arr1[t1];
//     int arr2[t1];

//     for (int i = 0; i < t1; i++)
//     {

//         arr1[i] = nums[left + i];
//     }

//     for (int j = 0; j < t2; j++)
//     {

//         arr2[j] = nums[mid + 1 + j];
//     }

//     int i = 0;
//     int j = 0;
//     int k = left;

//     while(i < t1 &&  j < t2){
//         if(arr1[i]<= arr2[j]){
//             nums[k]=arr1[i];
//             i++;
//             k++;
//         }
//         else{
//             nums[k]=arr2[j];
//             j++;
//             k++;
//         }
//     }
//     while (i < t1)
//     {
//         nums[k] = arr1[i];
//         i++;
//         k++;
//     }
//     while (j < t2)
//     {
//         nums[k] = arr2[j];
//         j++;
//         k++;
//     }
// }

// void mergeShort(vector<int> &nums, int left, int right)
// {

//     if (left < right)
//     {

//         int mid = left + ((right - left) / 2);
//         mergeShort(nums, left, mid);
//         mergeShort(nums, mid + 1, right);

//         merge(nums, left, mid, right);
//     }
// }

// int main()
// {

//     int n;
//     cin >> n;

//     vector<int> nums(n);
//     for (int i = 0; i < n; i++)
//     {

//         cin >> nums[i];
//     }

//     mergeShort(nums, 0, n - 1);

//     for (int i = 0; i < n; i++)
//     {

//         std::cout << nums[i] << " ";
//     }

//     return 0;
// }

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums1.size() > nums2.size())
        {
            return findMedianSortedArrays(nums2, nums1);
        }

        int x = nums1.size();
        int y = nums2.size();
        int low = 0;
        int high = x;

        while (low <= high)
        {
            int partitionX = (low + high) / 2;
            int partitionY = (x + y + 1) / 2 - partitionX;

            int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
            int minRightX = (partitionX == x) ? INT_MAX : nums1[partitionX];

            int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
            int minRightY = (partitionY == y) ? INT_MAX : nums2[partitionY];

            if (maxLeftX <= minRightY && maxLeftY <= minRightX)
            {
                if ((x + y) % 2 == 0)
                {
                    return (max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2.0;
                }
                else
                {
                    return max(maxLeftX, maxLeftY);
                }
            }
            else if (maxLeftX > minRightY)
            {
                high = partitionX - 1;
            }
            else
            {
                low = partitionX + 1;
            }
        }

        throw invalid_argument("Input arrays are not sorted");
    }
};
