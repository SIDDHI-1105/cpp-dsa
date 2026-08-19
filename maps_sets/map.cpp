#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {

    // Basic map
    map<int, int> mp;

    mp[1] = 30;
    mp[2] = 40;
    mp[3] = 50;
    mp[4] = 60;
    mp[5] = 70;
    mp[6] = 80;

    for (auto it : mp) {
        cout << "Key: " << it.first
             << " Value: " << it.second << endl;
    }

    // Check if key exists
    if (mp.count(2)) {
        cout << "Key 2 found" << endl;
    }

    // Erase
    mp.erase(3);

    // Size
    cout << "Size: " << mp.size() << endl;


    // Frequency counting
    vector<int> nums = {1, 2, 2, 3, 1, 2, 4, 3, 1};

    map<int, int> maap;

    for (auto it : nums) {
        maap[it]++;
    }

    cout << "\nFrequencies:\n";

    for (auto it : maap) {
        cout << it.first << " → " << it.second << endl;
    }


    // int -> string map
    map<int, string> mpp;

    mpp[1] = "sid";
    mpp[2] = "esh";
    mpp[3] = "dumphy";
    mpp[4] = "alex";

    cout << "\nName: " << mpp[1] << endl;

    return 0;
}
//unorderd map is he same but just the items are not sorted
// insert → O(1)
// find   → O(1)
// erase  → O(1)

