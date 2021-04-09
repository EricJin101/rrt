// Copyright (c) 2021 Trunk.Tech. All rights reserved.
//
#include "rrt/rrt_algo.cc"
int main()
{
    eric::rrt_algo::PathPoint p1{}, p2{};
    p1.x = 1;
    p1.y = 2;
    p2.x = 1;
    p2.y = 2;
    std::cout << (p1 == p2) << std::endl;
//    eric::rrt_algo::getRandomPoint();
//    eric::rrt_algo::generateRandomNum(10);
    eric::rrt_algo::rrtCore();
}