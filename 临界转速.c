#include <stdlib.h>
 
double fun_x4 (double x) { return x*x*x*x;}
double fun_x3 (double x) { return x*x*x ;}
double fun_x2 (double x){ return x*x ;}
int main(){ 
double nc,d4,m2,l1,d2,l0;
printf("这是D式传动临界转速计算程序，请分别依次输入两支撑间轴的直径、叶轮重量、支撑点A至叶轮重心的距离、悬臂端轴的直径、两支撑间轴的跨距，数据以空格分隔，输入后按回车 \n");
scanf("%lf%lf%lf%lf%lf ",&d4,&m2,&l1,&d2,&l0);
nc=520775*fun_x2(d4)/(m2*9.8*fun_x3(l1)*( fun_x4(d4/d2)+l0/l1));
printf("临界转速", nc);
printf("nc=%lf ", nc);
}
