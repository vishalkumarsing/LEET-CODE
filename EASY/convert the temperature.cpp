class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double k=celsius+273.15;
        double j=celsius*1.80+32.00;

        vector<double>v;
        v.push_back(k);
        v.push_back(j);
        return v;
        
    }
};
