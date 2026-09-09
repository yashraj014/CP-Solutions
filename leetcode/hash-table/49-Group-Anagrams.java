class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String,List<String>>mpp = new HashMap<>();

        for(String s:strs){
            // String temp = s;
            // Collections.sort(temp);
            char[] chars = s.toCharArray();
            Arrays.sort(chars);

            String temp = new String(chars);

            // if(!mpp.containsKey(temp)){
            //     mpp.put(temp,new ArrayList<>());
            // }

            // mpp.get(temp).add(s);
            mpp.computeIfAbsent(temp, k -> new ArrayList<>()).add(s);
        }
        List<List<String>> ans = new ArrayList<>(mpp.values());
       
        return ans;
    }
}