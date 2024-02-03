class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.size() <= 1) return chars.size();

        string compressed;
        int count = 0;
        char prev = chars[0];
        for (int i=0;i<chars.size();i++){
            if(count == 0){
                count++;
                prev = chars[i];
            }
            else if(chars[i] == prev){
                count++;
                prev = chars[i];
                if(i+1 == chars.size()){
                    compressed += prev;
                    compressed += to_string(count);
                }
            }
            else{
                if(count == 1){
                    compressed += prev;
                    prev = chars[i];
                    count = 1;
                }
                else{
                compressed += prev;
                compressed += to_string(count);
                prev = chars[i];
                count = 1;
                }
                if(i+1 == chars.size()){
                    compressed += prev;
                    
                }
            }
        }
    for(int i =0; i<compressed.size();i++){
        chars[i] = compressed[i];
    }
    return compressed.size();
    }
};