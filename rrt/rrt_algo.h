// Copyright (c) 2021 Trunk.Tech. All rights reserved.
//

#ifndef RRT_RRT_ALGO_H
#define RRT_RRT_ALGO_H
#include "iostream"
#include "vector"
#include <random>
using namespace std;
namespace eric{
namespace rrt_algo{
    struct PathPoint {
        double x;
        double y;
        double theta;
    };
    struct Path : PathPoint{
        vector<PathPoint> globalMap;
    };
    bool operator==(const PathPoint p1, const PathPoint p2)
    {
        return p1.x == p2.x && p1.y == p2.y;
    }
    int generateRandomNum(int range)
    {
        srand((unsigned)time(nullptr));
        unsigned int r = rand()%range;
        cout << r << endl;
        return r;
    }
    PathPoint p_init{}, p_goal{};
    Path Map{};
    class rrt_algo {
        // map
        // find near
        // new
    };
}// rrt_algo
}// eric



#endif //RRT_RRT_ALGO_H
