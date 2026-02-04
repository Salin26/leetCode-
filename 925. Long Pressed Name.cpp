class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        
       int s1 = name.size();
       int s2 = typed.size();

       int n = 0;
       int t = 0;
       char prev = typed[0];
       bool flag = true;

       if(name[0] != typed[0]) return false;
       if(s2 < s1) return false;

       while(t < s2){

        if(n < s1 && name[n] == typed[t]){
            prev = typed[t];
            n++;
            t++;
        }else if(prev == typed[t]){
            
            t++;
        }else{
           return false;
           
        }

       }

         return n == s1;

    }
};
