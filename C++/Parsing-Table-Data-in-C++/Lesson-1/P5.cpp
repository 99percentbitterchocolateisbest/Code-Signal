/*Now, let's move on to reading moon surface temperature measurements from the moon_temp.txt file, where each column corresponds to different times of the day, and each row represents a separate day.

Your task is to:

    Open and read data from the file moon_temp.txt.
    Populate a 2D vector with the temperature data.
    Calculate the average temperature for each day (each row).
    Print the average temperature for each day.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

int main() {
    std::ifstream file("moon_temp.txt");
    std::vector<std::vector<int>> temperatures;
    
    if (!file.is_open()) {
        std::cerr << "ERROR" << std::endl;
        return 1;
    }
    
    std::string line;
    while (std::getline(file, line)) {
        std::vector<int> day_temps;
        std::stringstream ss(line);
        int temp;
        
        while (ss >> temp) {
            day_temps.push_back(temp);
        }
        
        if (!day_temps.empty()) {
            temperatures.push_back(day_temps);
        }
    }
    
    file.close();
    
    for (size_t i = 0; i < temperatures.size(); i++) {
        const auto& day = temperatures[i];
        int sum = 0;
        for (const auto& temp : day) {
            sum += temp;
        }
        double average = static_cast<double>(sum) / day.size();
        std::cout << "Day " << (i + 1) << " average temperature: " << average << std::endl;
    }
    
    return 0;
}