// coordin.h -- structure template and function prototypes
// structure templates
#ifndef COORDIN_H_ // 仅当以前没有使用预处理器编译指令#define定义名称COORDIN_H_时，才处理 #ifndef和#endif之间的语句
#define COORDIN_H_

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

// prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif