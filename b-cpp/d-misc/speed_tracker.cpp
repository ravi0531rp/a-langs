// Find the max distance travelled in a set window interval given a set of co-ordinates
#include <bits/stdc++.h>
using namespace std;

class Coordinates
{
    public:
    int i;
    int j;

    Coordinates(int i, int j) {
        this->i = i;
        this->j = j;
    }
};

class Solution
{
    public:
   
    float getdistance(Coordinates coordinate1, Coordinates coordinate2) {
        return sqrt(pow(coordinate2.j - coordinate1.j, 2) + pow(coordinate2.i - coordinate1.i, 2));
    }
   
float getMaxDistance(vector<float>distanceList, int window)
{
   float maxDistance = 0;
   float currentDistance = 0;
   int n = distanceList.size();
   
   if(n<window) return -1;
   
   for(int i=0; i<window; i++) {
    currentDistance+= distanceList[i];
    maxDistance = max(maxDistance, currentDistance);
   }
   
   for(int i=window; i<n; i++) {
       currentDistance = currentDistance - distanceList[i-window] + distanceList[i];
       maxDistance = max(maxDistance, currentDistance);

   }
   
   return maxDistance;
   
}


};

int main()
{
    vector<Coordinates> coordinatesList;
    coordinatesList.push_back(Coordinates(1,2));
    coordinatesList.push_back(Coordinates(8,9));
    coordinatesList.push_back(Coordinates(2,3));
    coordinatesList.push_back(Coordinates(11,15));
    coordinatesList.push_back(Coordinates(17,2));
    coordinatesList.push_back(Coordinates(18,7));
    coordinatesList.push_back(Coordinates(2,2));

    int window = 4;
    Solution solution;

    vector<float>distanceList;
    for(int i=1; i<coordinatesList.size(); i++) {
        distanceList.push_back(solution.getdistance(coordinatesList[i-1], coordinatesList[i]));
    }
    cout << solution.getMaxDistance(distanceList, window);
    return 0;
}