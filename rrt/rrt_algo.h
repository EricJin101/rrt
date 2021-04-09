// Copyright (c) 2021 Trunk.Tech. All rights reserved.
//

#ifndef RRT_RRT_ALGO_H
#define RRT_RRT_ALGO_H
#include "iostream"
#include "vector"
#include <random>
#include <limits>
using namespace std;
namespace eric{
namespace rrt_algo{
    struct PathPoint {
        double x;
        double y;
        double theta;
    };
    struct Path : PathPoint{
        PathPoint point;
        int before;
    };
    bool operator==(const PathPoint p1, const PathPoint p2)
    {
        return p1.x == p2.x && p1.y == p2.y;
    }
    int generateRandomNum(int range)
    {
        std::uniform_int_distribution<int> d(0, range);
        std::random_device rd1; // uses RDRND or /dev/urandom
        std::cout << "map remains: " << range << "random number: " << d(rd1) << endl;
        return d(rd1);
    }
    double EuclideanDistance(PathPoint p1, PathPoint p2)
    {
        return sqrt((p1.x - p2.x) * (p1.x - p2.x) +
                       (p1.y - p2.y) * (p1.y - p2.y));
    }
    PathPoint p_init{}, p_goal{};
    vector<PathPoint> Map;
    vector<Path> globalMap;
    double step{0.2};// percentage
    class rrt_algo {
        // map
        // find near
        // new
    };
}// rrt_algo
}// eric



#endif //RRT_RRT_ALGO_H
