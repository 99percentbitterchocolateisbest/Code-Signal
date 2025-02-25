/* Imagine you're receiving cosmic signals from a distant galaxy, and the alien messages are separated by spaces instead of commas. Your mission is to tally how often each word appears in the transmission. Consider the signal "greetings stellar traveler stellar stellar". Your result should look like "greetings: 1, stellar: 3, traveler: 1". Prepare your C++ code to decode these interstellar messages and reveal the word frequencies!*/

#include <iostream>
#include <unordered_map>
#include <sstream>

int main() {
    std::string text = "Cosmo is an incredible technical companion with very strong skills in Algorithms and Data Structures and a great teacher for technical interviews.";
    
    // TODO: initialize the word count map
    std::string word;
    std::istringstream ss(text);
    std::unordered_map<std::string, int> x;
    // TODO: count words and update the map
    while (ss >> word) {
        x[word]++;
    }

    // TODO: print the word frequency
    for(auto& xd:x){
        std::cout<<xd.first<< ' ' << xd.second << '\n';
    }

    return 0;
}