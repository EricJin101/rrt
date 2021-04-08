// Copyright (c) 2021 Trunk.Tech. All rights reserved.
//

#ifndef RRT_RRT_ALGO_H
#define RRT_RRT_ALGO_H
#include "iostream"
#include "vector"
namespace eric{
namespace rrt_algo{
    struct PathPoint {
        double x;
        double y;
        double theta;
    };
    struct Path : PathPoint{
        std::vector<PathPoint> globalMap;
    };
    bool operator==(const PathPoint p1, const PathPoint p2)
    {
        return p1.x == p2.x && p1.y == p2.y;
    }
    class rrt_algo {
        // map
        // find near
        // new
    };
}
}



#endif //RRT_RRT_ALGO_H
