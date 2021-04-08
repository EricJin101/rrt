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
    void rrtStepForward(PathPoint *p_rand, double stepSize)
    {
        /** @brief:
         *  @param:
         * */
    }
    bool rrtFinishCondition(PathPoint *p_new, PathPoint *p_goal)
    {
        if (p_new == p_goal)
        {
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
    }
}