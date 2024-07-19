/*
Time C.
10ms Beats 85.05%
Space C.
45.34 MB Beats 58.52%
*/

class Solution {
    public String predictPartyVictory(String senate) {
        String res;
        Queue<Integer> qD = new LinkedList<>();
        Queue<Integer> qR = new LinkedList<>();
        int size = senate.length();
        for(int i = 0; i < size; i++){
            if(senate.charAt(i) == 'R')
                qR.add(i);
            else
                qD.add(i);
        }

        while(!qR.isEmpty() && !qD.isEmpty()){
            int indexR = qR.remove();
            int indexD = qD.remove();
            if(indexD > indexR)
                qR.add(indexR + size);
            else
                qD.add(indexD + size);
        }

        if(qR.isEmpty())
            res = "Dire";
        else
            res = "Radiant";
        

        return res;
    }
}