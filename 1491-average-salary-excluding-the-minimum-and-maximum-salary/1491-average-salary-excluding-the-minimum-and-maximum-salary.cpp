class Solution {
public:
    double average(vector<int>& salary) {
        double sum = accumulate(salary.begin(), salary.end(), 0);
        auto a = max_element(begin(salary), end(salary));
        auto b = min_element(begin(salary), end(salary));
        sum = sum - *a - *b;
        sum /= (salary.size() - 2);
        return sum;
    }
};