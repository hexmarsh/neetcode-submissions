public class Solution {
    public List<List<string>> GroupAnagrams(string[] strs) {
        var res = new Dictionary<string, List<string>>();
        foreach (var s in strs) {
            int[] counts = new int[26];

            foreach (char c in s) {
                counts[c - 'a']++;
            }

            var key = string.Join(",", counts);

            if (!res.ContainsKey(key)) {
                res[key] = new List<string>();
            }
            res[key].Add(s);
        }

        return res.Values.ToList();
    }
}
