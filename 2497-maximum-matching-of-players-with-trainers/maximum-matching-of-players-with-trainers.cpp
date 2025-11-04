class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int sizeOfPlayersArray=players.size();
        int sizeOfTrainersArray=trainers.size();
        int playersPointer=0,trainerPointer=0;
        while(playersPointer<sizeOfPlayersArray && trainerPointer<sizeOfTrainersArray)
        {
            if(players[playersPointer]<=trainers[trainerPointer])
            {
                playersPointer++;
            }
            trainerPointer++;
           
           
        }
        return playersPointer;
    }
};