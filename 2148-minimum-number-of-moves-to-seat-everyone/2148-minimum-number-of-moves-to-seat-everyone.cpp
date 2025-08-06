class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(), students.end());
        int moves=0;
        for(int i=0; i<seats.size(); i++){
            int diff=0;
            diff=seats[i]-students[i];
            int abso= abs(diff);
            moves=moves+abso;
        }
        return moves;
    }
};