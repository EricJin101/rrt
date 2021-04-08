// Copyright (c) 2021 Trunk.Tech. All rights reserved.
//

#ifndef RRT_RRT_ALGO_H
#define RRT_RRT_ALGO_H
#include "vector"
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
        if (p1.x == p2.x && p1.y == p2.y ) return true;
    }
    class rrt_algo {
        // map
        // find near
        // new
    };
}
}



#endif //RRT_RRT_ALGO_H
