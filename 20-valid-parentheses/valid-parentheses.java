import java.util.Stack;

class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();
        
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            
            // If it's an opening bracket, push it to the stack
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } 
            // If it's a closing bracket, check for matching opening bracket
            else {
                if (stack.isEmpty()) return false;
                
                char top = stack.pop();
                if (c == ')' && top != '(') return false;
                if (c == '}' && top != '{') return false;
                if (c == ']' && top != '[') return false;
            }
        }
        
        // If the stack is empty, all brackets were matched correctly
        return stack.isEmpty();
    }
}
