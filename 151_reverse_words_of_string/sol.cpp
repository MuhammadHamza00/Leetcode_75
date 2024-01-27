class Solution {
public:
    string reverseWords(string s) {
        string out = "";
        if(s.empty()){
            return "";
        }
        else if(s == " "){
            return "";
        }else{
            int start = 0;
            int end = s.length()-1;

            if(s[0] == ' ' || s[end] == ' '){

      
            // trim the string
            for(int i=0;i<s.length();i++){
                if(s[i] != ' '){
                    start = i;
                    break;
                }
            }
             for(int i=s.length()-1;i>=0;i--){
                if(s[i] != ' '){
                    end = i;
                    break;
                }
            }
            }
                bool is_first = true;
                bool is_space = true;
                string container = "";

                for(int i = end;i >= start; i--){
                    if(s[i] == ' ' && is_space){
                        if(is_first){
                            out = out + container;
                            is_first = false;
                        }
                        else{
                            out = out + ' ' + container;
                        }
                        container = "";
                        is_space = false;
                    }
                    if(s[i] != ' '){
                        container = s[i] + container;
                        is_space = true;
                    }
                }
                if(out == ""){
                    out = container;
                }else{
                    out = out + ' ' + container;
                }
                

            }
            return out;
        }

};
