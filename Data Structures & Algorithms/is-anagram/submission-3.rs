use std::iter::zip;

impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        if s.chars().count() != t.chars().count() {
            return false;
        }

        let mut s_map = HashMap::new();
        let mut t_map = HashMap::new();

        for (sc, tc) in zip(s.chars(), t.chars()) {
            *s_map.entry(sc).or_insert(0) += 1;
            *t_map.entry(tc).or_insert(0) += 1;
        };

        s_map == t_map
    }
}
