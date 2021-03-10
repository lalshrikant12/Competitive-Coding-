public class Solution {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public String largestNumber(final List<Integer> A) {
        
          
        int n=A.size();
        String[] s= new String[n];
        for(int i=0;i<n;i++)
            
        {
            s[i]=String.valueOf(A.get(i));
        }
        Arrays.sort(s,(a,b)->(b+a).compareTo(a+b)); // compare to sorts in lexicographical order
        StringBuilder sb = new StringBuilder();
        for(String str:s)
            sb.append(str);
        
        String result= sb.toString();
        return result.startsWith("0") ? "0" : result; // if result starts with 0 return 0
        
        
    }
}
