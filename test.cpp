#include <iostream>

int main(){
    std::string input="1 2 3 4";
    std::string word;
    int numPos=0;
    for(int i = 0; i < input.length(); i++){
        if(input[i]==(' ')){
            for(int j = numPos+1; j < i; j++){
                word.push_back(input[j]);
                std::cout<<word;


            }
            std::cout<<stoi(word);
            
            word.clear();
            numPos=i;
            
        }

        if(i==input.length()-1){
            for(int j = numPos+1; j < input.length(); j++){
                word.push_back(input[j]);

            }
            // numbers.push_back(std::stoi(word));
            word.clear();
            numPos=i;
        }
    }
}