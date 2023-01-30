class Solution {
    public int findPeakElement(int[] arr) {
        int l = 0, h = arr.length-1;
        if(arr.length == 1){
            return 0;
        }
        while(l <= h) {
            int mid = l + (h - l) / 2;
            
            if(mid == 0 && arr[mid] > arr[mid+1]) return mid;
            else if(mid == arr.length - 1 && arr[mid] > arr[mid-1]) return mid;
            else {
                if(arr[mid] > arr[mid + 1]) h = mid - 1;
                else l = mid + 1;
            }
        }return l;
    }
}