class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>> cars;

        for(int i = 0; i < n; i++){
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.begin(), cars.end(), greater<pair<int,int>>());

        stack<double> fleets;

        for(int i = 0; i < cars.size(); i++){
            double time = (double)(target - cars[i].first) / cars[i].second;

            if(fleets.empty() || time > fleets.top()){
                fleets.push(time);
            }
        }

        return fleets.size();
    }
};