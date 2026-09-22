public class Solution {
    public bool IsAnagram(string s, string t) {
        if (s.Length != t.Length) {
            return false;
        }

        Dictionary<char, int> sCounts = new();

        foreach (char c in s) {
            sCounts[c] = sCounts.GetValueOrDefault(c, 0) + 1;
        }

        foreach (char c in t) {
            if (sCounts.TryGetValue(c, out int count)) {
                count = --sCounts[c];

                if (count <= 0) {
                    sCounts.Remove(c);
                }
            }
        }

        return sCounts.Count == 0;
    }
}
