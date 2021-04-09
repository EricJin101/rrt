// Copyright (c) 2021 Trunk.Tech. All rights reserved.
//

#include "rrt_algo.h"
namespace eric{
namespace rrt_algo{
    void rrtNear(PathPoint *point, Path *global_map)
    {
        /**
         * @brief: sampling from map
         * @param: point is current position,
         *         global_map is planned path
         * */
    }
    void rrtStepForward(PathPoint *p_rand, PathPoint *p_near, double stepSize)
    {
        /** @brief:
         *  @param:
         * */

    }
    PathPoint getRandomPoint()
    {

        PathPoint t{};
        return t;
    }
    bool rrtFinishCondition(PathPoint *p1, PathPoint *p2)
    {
        if (p1 == p2)
        {// planning point is goal.
            return true;
        }else if (1)
        {// list all potential point
            return true;
        }
        return false;
    }
    void rrtCollisionDetect()
    {
        /**
         * @brief:
         * */
    }
}// rrt_algo
}// eric