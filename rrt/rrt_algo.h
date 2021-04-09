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
        std::uniform_int_distribution<int> d(0, range);
        std::random_device rd1; // uses RDRND or /dev/urandom
        std::cout << d(rd1) << ' ';
        return d(rd1);
    }
    PathPoint p_init{}, p_goal{};
    vector<PathPoint> Map;
    vector<PathPoint> globalMap;
    class rrt_algo {
        // map
        // find near
        // new
    };
}// rrt_algo
}// eric



#endif //RRT_RRT_ALGO_H
