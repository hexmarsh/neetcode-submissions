public class Solution {
    public int[] TopKFrequent(int[] nums, int k) {
        Dictionary<int, int> freqMap = new();

        foreach (int num in nums) {
            freqMap[num] = freqMap.GetValueOrDefault(num, 0) + 1;
        }

        List<int[]> arr = freqMap.Select(entry => new int[] { entry.Key, entry.Value }).ToList();

        // sort so that most frequent is first
        arr.Sort((a, b) => b[1].CompareTo(a[1]));

        int[] result = new int[k];
        for (int i = 0; i < k; i++) {
            result[i] = arr[i][0];
        }

        return result;
    }
}
