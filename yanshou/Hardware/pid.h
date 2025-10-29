#ifndef __PID_H
#define __PID_H

typedef struct
{
float kp;
float ki;
float kd;
float jifen;
float lasterror;
float jifenxianzhi;
float outxianzhi;
}piddef;
extern piddef speedpid;
extern piddef positionpid;


#endif
