// Copyright (c) 2021 Trunk.Tech. All rights reserved.
//

#include "rrt_algo.h"
namespace eric{
namespace rrt_algo{
    void rrtMapGeneration()
    {
        PathPoint p{};
        p.x = 1;
        p.y = 2;
        Map.push_back(p);// filling with points.or read from file
    }
    void initilization()
    {
        rrtMapGeneration();
        p_init.x = 0;

        p_goal.x = 1;
    }
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
        // according to map size , generate random number
        int rd = generateRandomNum(11);
        PathPoint t{};
        return t;
    }
    bool rrtFinishCondition(PathPoint p1)
    {
        if (p1 == p_goal)
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
    void rrtCore()
    {
        initilization();
        PathPoint p1 = getRandomPoint();
        while (!rrtFinishCondition(p1))
        {
            // get next point
        }
    }
}// rrt_algo
}// eric