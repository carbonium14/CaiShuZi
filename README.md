# CaiShuZi
给出上下限，系统随机生成一个数字，玩家可以猜这个数字，如果大了就提示大，如果小了就提示小，直到正确为止。
项目来自牛客 https://www.nowcoder.com/project/index/73 。
根据原项目的改进：
1、增加了输入判定，保证上限大于下限，不符合就重新输入直到合法为止，增强健壮性。
2、可以重复游玩，并且保证每次重复游玩都会重置要猜的数。
3、判断是不是二分查找，如果不是会提示玩家二分是最优解。
