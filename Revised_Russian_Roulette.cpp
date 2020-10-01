/*

https://www.hackerrank.com/contests/w36/challenges/revised-russian-roulette

In the original version of Russian Roulette, there are active and inactive zones a contestant has to pass through to win, and also a trap door.

You are playing a revised version of the game, where, you have to unlock all doors in a given setting, in a given fashion, to enter the playig area.

    Initially, any door is either locked or unlocked.
    If a door is locked and you unlock it, then
        if the next consecutive door is locked, it will automatically get unlocked.
        if the next consecutive door is already unlocked, nothing will happen.
        there will be no effect on any following door. 

For example, if there are 10 doors as shown below, where 0 denotes an unlocked door, and 1 denotes a locked door, a minimum of 3 operations, will be required to unlock all doors. 
*/

#include <bits/stdc++.h>

using namespace std;

vector <int> revisedRussianRoulette(vector <int> doors) {
    // Complete this function
    vector<int> a(2);
    for(int i=0;i<doors.size();i++)
    {
        if(doors[i])
            a[1]++;      
    }
       for(int i=0;i<doors.size();i++)
    {
        if(doors[i])
        {
            if(i<(doors.size()-1))
            doors[i+1]=0;
            a[0]++;
        }
     }      
      
    return a;
}

int main() {
    int n;
    cin >> n;
    vector<int> doors(n);
    for(int doors_i = 0; doors_i < n; doors_i++){
       cin >> doors[doors_i];
    }
    vector <int> result = revisedRussianRoulette(doors);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
