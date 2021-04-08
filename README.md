# RRT
Rapid-exploration Random Tree(快速搜索随机树)

## 构建快速随机树
### 输入
- 初始位置：x_init
- 地图环境：M
- 目标位置：x_goal

### 输出
- 从x_init -> x_goal的路径 T

### 过程
- T.init()
- 循环 i = 1 -> n：
  * x_rand <- Sample(M),在地图上随机采样；
  * x_near <- Near(x_rand, T), 从T中寻找距离x_rand最近的节点x_near
  * x_new  <- Steer(x_rand, x_near, StepSize), 沿着x_near 到 x_rand方向前进StepSize的距离得到x_new
  * E(i)    <- Edge(x_new, x_near)，寻找x_new与x_near之间的障碍物
  * if CollisionDetect(M, E(i))
    + T.addNode(x_new)  判断生成的x_new和x_near之间的连线会不会有碰撞
    + T.addEdge(E(i))
  * if x_new = x_goal
    + 成功退出
