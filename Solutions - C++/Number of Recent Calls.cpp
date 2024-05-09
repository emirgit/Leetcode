/*
Time C.
101ms Beats 88.25%
Space C.
9.64 MB Beats 55.96%
*/

class RecentCounter {
private:
    queue<int> q;
    int curDiff;
public:
    RecentCounter() {
    }
    
    int ping(int t) {

        // calculate current signal diff
        curDiff = t - 3000;
        // if the queue empty or current signal diff greater than front it is future req comparing to current
        //  so pop it from queue
        while(!q.empty() && curDiff > q.front())
            q.pop();

        // push the new time
        q.push(t);
        // the size is the number of recent requests in the time frame.
        return q.size();
    }
};