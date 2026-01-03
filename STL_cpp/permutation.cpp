#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3};

    // Print the original sequence
    cout << "Original: ";
    for(int x: v) cout << x << " ";
    cout << endl;

    // Next permutation (lexicographically next ordering)
    next_permutation(v.begin(), v.end());
    cout << "Next permutation: ";
    for(int x: v) cout << x << " ";   // Output: 1 3 2
    cout << endl;

    // Previous permutation (lexicographically previous ordering)
    prev_permutation(v.begin(), v.end());
    cout << "Previous permutation: ";
    for(int x: v) cout << x << " ";   // Output: 1 2 3 (back to original)
    cout << endl;

    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3};

    // Sort first to start from smallest permutation
    sort(v.begin(), v.end());

    cout << "All permutations:" << endl;
    do {
        for(int x: v) cout << x << " ";
        cout << endl;
    } while(next_permutation(v.begin(), v.end()));

    return 0;
}
Output:
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1

*/