class CountSquares {
public:
    map<pair<int, int>, int> mp;

    CountSquares() {
    }

    void add(vector<int> point) {
        mp[{point[0], point[1]}]++;
    }

    int count(vector<int> point) {

        int x = point[0];
        int y = point[1];

        int ans = 0;

        for (auto p : mp) {

            int x2 = p.first.first;
            int y2 = p.first.second;

            // Same row or same column cannot be opposite corner
            if (x2 == x || y2 == y)
                continue;

            // For a square, horizontal distance = vertical distance
            if (abs(x2 - x) != abs(y2 - y))
                continue;

            // Other two corners
            int x3 = x;
            int y3 = y2;

            int x4 = x2;
            int y4 = y;

            // Multiply frequencies because duplicate points count separately
            ans += mp[{x2, y2}]
                 * mp[{x3, y3}]
                 * mp[{x4, y4}];
        }

        return ans;
    }
};