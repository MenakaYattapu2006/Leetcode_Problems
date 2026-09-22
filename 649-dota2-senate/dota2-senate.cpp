class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>r;
        queue<int>d;
        int n = senate.size();
        for(int i = 0; i < n; i++){
            if(senate[i] == 'R'){
                r.push(i);
            }
            else d.push(i);
        }
        while(!r.empty() && !d.empty()){
            if(r.front() < d.front()){
                int rfront = r.front();
                d.pop();
                r.push(rfront+n);
                r.pop();

            }
            else{
                int dfront = d.front();
                r.pop();
                d.push(dfront+n);
                d.pop();
            }
        }
        if(!r.empty()){
            return "Radiant";
        }
        else return "Dire";
    }
};