/*
Time C.
8ms Beats 94.78%
Space C.
44.98 MB Beats 98.02%
*/

import java.util.*;

class Solution {
    public boolean closeStrings(String word1, String word2) {
        if (word1.length() != word2.length())
            return false;
        
        if (word1.equals(word2))
            return true;

        // Checking the frequencies
        int[] freq1 = new int[26];
        int[] freq2 = new int[26]; 
        
        for (char c : word1.toCharArray()) {
            freq1[c - 'a']++;
        }
        
        for (char c : word2.toCharArray()) {
            freq2[c - 'a']++;
        }

        // Checking if the characters are contained within another
        for (int i = 0; i < 26; i++) {
            if ((freq1[i] == 0 && freq2[i] != 0) || (freq1[i] != 0 && freq2[i] == 0))
                return false;
        }
        
        Arrays.sort(freq1);
        Arrays.sort(freq2);
        
        return Arrays.equals(freq1, freq2);
    }
}

/* 
too slow
so I decided to use just basic Array both runtime and space optimization

Time C.
79ms Beats 18.31%
Space C.
45.42 MB Beats 57.48%


import java.util.*;

class Solution {
    public boolean closeStrings(String word1, String word2) {
        if (word1.length() != word2.length())
            return false;
        
        if (word1.equals(word2))
            return true;

        Map<Character, Integer> map1 = new HashMap<>();
        Map<Character, Integer> map2 = new HashMap<>();
        
        fillMap(word1, map1);
        fillMap(word2, map2);
        
        if (!map1.keySet().equals(map2.keySet()))
            return false;
        
        List<Integer> list1 = new ArrayList<>(map1.values());
        List<Integer> list2 = new ArrayList<>(map2.values());
        // Sort the list of values
        Collections.sort(list1);
        Collections.sort(list2);

        return list1.equals(list2);
    }

    private void fillMap(String word, Map<Character, Integer> map) {
        char[] strArray = word.toCharArray();
 
        for (char c : strArray) {
            if (map.containsKey(c))
                map.put(c, map.get(c) + 1);
            else
                map.put(c, 1);
        }
    }
}
*/