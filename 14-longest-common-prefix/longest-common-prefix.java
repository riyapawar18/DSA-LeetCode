import java.util.Arrays;

class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) return "";
        
        // Sort the array lexicographically (alphabetically)
        Arrays.sort(strs);
        
        // Get the first and last strings after sorting
        String first = strs[0];
        String last = strs[strs.length - 1];
        
        int i = 0;
        // Compare characters until they mismatch or we hit the end of 'first'
        while (i < first.length() && i < last.length()) {
            if (first.charAt(i) == last.charAt(i)) {
                i++;
            } else {
                break;
            }
        }
        
        // Return the matching substring chunk
        return first.substring(0, i);
    }
}
