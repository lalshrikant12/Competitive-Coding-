class Solution {
    public boolean isPalindrome(int x) {
        String s=String.valueOf(x);;
        char ch[]=s.toCharArray();
        int n=ch.length;
        
        for(int i=0;i<n/2;i++)
        {
            if(ch[i]!=ch[n-i-1])
                return false;
        }
        return true;
                    
    }
}
