## About

本作业是深蓝学院中视觉slam的作业，一共有8讲。此外参考高翔博士的视觉slam14讲。

## Conrent

* Class1: 对应视觉slam中ch1、ch2。完成了一个简单的cmake实践
* Class2: 对应视觉slam中ch3。学习使用Eigen库、以及坐标变换。
* Class3: 对应视觉slam中ch4。李群与李代数。学习使用李群、李代数的库sophus。在任务6、7中通过使用李代数计算误差，并用pangolin绘图
* Class4: 对应视觉slan中ch5相机模型、ch6非线性优化。ch5以及task2、3学习使用opencv，进行了畸变矫正、双目相机生成点云。ch6以及task5，学习ceres、g20优化库的使用，以及自己编写的gaussnewton（重点，特别是非线性优化库的使用）
* Class5: 对应视觉slam中ch7。特征点法视觉里程计。包括ORb提取、单目对极几何部分E恢复R、t，GN法实现BA，以及ICP实现轨迹对齐
* Class6: 对应视觉slam中ch8。直接法、光流法视觉里程计。实现了光流法和直接法。
* Class7: 对应视觉slam中ch10、ch11。后端优化的部分，ch10是g2o、ceres与BA，ch11是位姿图。task3是实现直接法的BA。task 10存在一点问题。ch11可以运行
* Class8: 对应视觉slam中ch12、ch13。ch12是回环检测与词带。ch13是关于建图部分。

## 涉及第三方库

* Sophus-13fb3288311485dc94e3226b69c9b59cd06ff94e
* Pangolin
* ceres-1.14.0
* 新版g2o

## Reference

1. [slambook](https://github.com/gaoxiang12/slambook)

2. [slambook2](https://github.com/gaoxiang12/slambook2)

