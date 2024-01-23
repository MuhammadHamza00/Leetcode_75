
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string new_str = "";
        const char* ptr1 = word1.c_str();
        const char* ptr2 = word2.c_str();
        while(*ptr1 != '\0' && *ptr2 !='\0' ){
            new_str += *ptr1;
            ++ptr1;
            new_str += *ptr2;
            ++ptr2;
        }
        if (word1.length() > word2.length()){
            while(*ptr1 != '\0' ){
                new_str += *ptr1;
            }
            return new_str;
        }else if(word1.length() < word2.length()){
            while(*ptr2 != '\0' ){
                new_str += *ptr2;
            }
            return new_str;
        }else{
            return new_str;
        }
    }
};