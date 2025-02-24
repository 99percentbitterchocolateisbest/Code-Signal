/*
icture this: You're tracking visitors to two distinct events, each identified by a unique identifier. You've gathered logs of all their visits, and your mission is to determine if there's any overlap in attendees at each event. In simpler terms, we want to know if any attendee was present at both events. The logs are simply lists of integers representing unique user IDs. Your task is to return true if any overlap exists between the two sets of event attendees, or false if there isn't.
*/

#include <iostream>
#include <unordered_set>
#include <vector>

bool AudienceOverlap(const std::vector<int>& event1, const std::vector<int>& event2) {
    std::unordered_set<int> visitorSet(event1.begin(),event1.end());
    visitorSet.insert(event2.begin(),event2.end());
    // TODO: Implement this
    bool val;
    (visitorSet.size() == (event1.size() + event2.size()))? val = false : val = true;
    return val;
}

int main() {
    std::vector<int> event1 = {1, 2, 3, 4, 5};
    std::vector<int> event2 = {6, 7, 8, 9, 10};

    if (AudienceOverlap(event1, event2)) {
        std::cout << "Yes, there is an audience overlap between both events." << std::endl;
    } else {
        std::cout << "No, there is no audience overlap between both events." << std::endl;
    }

    return 0;
}