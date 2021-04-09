// Copyright (c) 2021 Trunk.Tech. All rights reserved.
//

#include "rrt_algo.h"
namespace eric{
namespace rrt_algo{
    void squareMap()
    {
        for (int i{0}; i < 10; ++i)
        {
            for (int j{0}; j < 10; ++j)
            {
                PathPoint p{};
                p.x = i;
                p.y = j;
                Map.push_back(p);
            }
        }
    }
    void rrtMapGeneration()
    {
        squareMap();
//        PathPoint p{};
//        p.x = 1;
//        p.y = 2;
//        Map.push_back(p);// filling with points.or read from file
    }
    void initialization()
    {
        rrtMapGeneration();
        p_init.x = 0;
        p_init.y = 0;
        globalMap.push_back(p_init);// first point
        p_goal.x = 9;
        p_goal.y = 9;
        Map.erase(Map.begin());// remove init point
        Map.erase(Map.begin() + Map.size() - 1); // remove point goal
    }
    void rrtNear(PathPoint point)
    {
        /**
         * @brief: sampling from map
         * @param: point is current position,
         *         global_map is planned path
         * */
         int idx_map{0};
         double idx_dis = numeric_limits<double>::max();
         for (int i(0); i < globalMap.size(); ++i)
         {
             double _dis = EuclideanDistance(point, globalMap[i]);
             if (_dis < idx_dis)
             {
                 idx_dis = _dis;
                 idx_map = i;
             }
         }
        Path p_new{};
        p_new.x = globalMap[idx_map].x + step * (point.x - globalMap[idx_map].x);
        p_new.y = globalMap[idx_map].y + step * (point.y - globalMap[idx_map].y);
        p_new.before = idx_map;
        globalMap.push_back(p_new);
        Map.erase(Map.begin() + idx_map - 1);
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
        int rd = generateRandomNum(Map.size());
        PathPoint p{};
//        cout << Map[rd].x << endl;
        p.x = Map[rd].x;
        p.y = Map[rd].y;
        cout << "New Point.    x: " << p.x << ", y: " << p.y << endl;
        return p;
    }
    bool rrtFinishCondition(PathPoint p1)
    {
        if (p1 == p_goal.point)
        {// planning point is goal.
            return true;
        }else if (0)
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
        initialization();
        PathPoint p1 = getRandomPoint();
        rrtNear(p1);
        while (!rrtFinishCondition(p1))
        {
            // get next point
            p1 = getRandomPoint();
            rrtNear(p1);
        }
        cout << "Finish." << endl;
    }
}// rrt_algo
}// eric