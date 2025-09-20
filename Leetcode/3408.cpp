#include <bits/stdc++.h>
using namespace std;

class TaskManager {
public:
    unordered_map<int, pair<int,int>> tasks; // taskId -> {userId, priority}
    
    // Max-heap: {priority, taskId}
    priority_queue<tuple<int,int,int>> pq; // {priority, taskId, userId}

    TaskManager(vector<vector<int>>& initTasks) {
        for (auto &t : initTasks) {
            int userId = t[0], taskId = t[1], priority = t[2];
            tasks[taskId] = {userId, priority};
            pq.push({priority, taskId, userId});
        }
    }
    
    void add(int userId, int taskId, int priority) {
        tasks[taskId] = {userId, priority};
        pq.push({priority, taskId, userId});
    }
    
    void edit(int taskId, int newPriority) {
        tasks[taskId].second = newPriority;
        int userId = tasks[taskId].first;
        pq.push({newPriority, taskId, userId});
    }
    
    void rmv(int taskId) {
        tasks.erase(taskId);
    }
    
    int execTop() {
        if (tasks.empty()) return -1;

        while (!pq.empty()) {
            auto [priority, taskId, userId] = pq.top(); pq.pop();
            if (tasks.count(taskId) && tasks[taskId].second == priority) {
                tasks.erase(taskId);
                return userId;
            }
        }

        return -1;
    }
};
