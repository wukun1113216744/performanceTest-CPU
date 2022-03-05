# performanceTest-CPU
cpu的性能测试对比
注意在头文件中有两个宏：HAVE_AVX2与ALTIVEC。
一:   HAVE_AVX2基本用在对比AVX2指令集的代码，请在编译时加上-DHAVE_AVX2的选项，他会计算cpu的运行周期，有BEST_TIME与BEST_TIME_NOCHECK两个宏，他们的区别是对函数返回值进行判断对比，如果运行过
程中发现函数返回值与预想的返回值不同，则不进行对比，输出两个退出码。
二：  ALTIVEC与HAVE_AVX2使用相似，只是ALTIVEC使用的是程序运行时间进行对比


BEST_TIME：1.需要运行的函数    2.期望函数返回的值（不同则不对比）   3.希望程序运行多少次，会在其中计算最优值与平均值   4.可以任意传，最好是test的缓冲区空间   5.是否输出详细信息，1表示输出
平均值与最优值，0表示只输出平均值

BEST_TIME_NOCHECK：具体与BEST_TIME相同，少了BEST_TIME的第二个参数，因为他不需要对比
