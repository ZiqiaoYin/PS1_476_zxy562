#include "ros/ros.h"
#include "geometry_msgs/Twist.h"


int main(int argc, char **argv)
{
    ros::init(argc, argv, "stdr_commander");
    ros::NodeHandle handle;
    ros::Publisher twist_commander=handle.advertise<geometry_msgs::Twist>("/robot0/cmd_vel",1);
    
    double sample_dt=0.01;
    double speed=1.0;
    double yaw_rate=0.5;
    double time_3_sec=3.0;
    double time_3_2_sec=3.5;
    double time_4_sec=4.0;
    
    geometry_msgs::Twist twist_cmd;

    twist_cmd.linear.x=0.0;
    twist_cmd.linear.y=0.0;
    twist_cmd.linear.z=0.0;
    twist_cmd.angular.x=0.0;
    twist_cmd.angular.y=0.0;
    twist_cmd.angular.z=0.0;

    ros::Rate loop_timer(1/sample_dt);
    double timer=0.0;

    for (int i=0; i<10; i++){
            twist_commander.publish(twist_cmd);
            loop_timer.sleep();  
    }
//
    twist_cmd.linear.x=speed;
    while(timer<time_3_sec){
        twist_commander.publish(twist_cmd);
        timer+=sample_dt;
        loop_timer.sleep();
    }

    twist_cmd.linear.x=0.0;
    twist_cmd.angular.z=yaw_rate;
    timer=0.0;
    while(timer<time_3_sec){
        twist_commander.publish(twist_cmd);
        timer+=sample_dt;
        loop_timer.sleep();
    }

// 1
        twist_cmd.linear.x=speed;
        twist_cmd.angular.z=0.0;
        timer=0.0;
    while(timer<time_3_sec){
        twist_commander.publish(twist_cmd);
        timer+=sample_dt;
        loop_timer.sleep();
    }

        twist_cmd.linear.x=0.0;
        twist_cmd.angular.z=-yaw_rate;
        timer=0.0;
    while(timer<time_3_sec){
        twist_commander.publish(twist_cmd);
        timer+=sample_dt;
        loop_timer.sleep();
    }
    
//2
        twist_cmd.linear.x=speed;
        twist_cmd.angular.z=0.0;
        timer=0.0;
    while(timer<time_3_2_sec){
        twist_commander.publish(twist_cmd);
        timer+=sample_dt;
        loop_timer.sleep();
    }

        twist_cmd.linear.x=0.0;
        twist_cmd.angular.z=yaw_rate;
        timer=0.0;
    while(timer<1.1*time_3_sec){
        twist_commander.publish(twist_cmd);
        timer+=sample_dt;
        loop_timer.sleep();
    }
//3
            twist_cmd.linear.x=speed;
        twist_cmd.angular.z=0.0;
        timer=0.0;
    while(timer<2.75*time_3_sec){
        twist_commander.publish(twist_cmd);
        timer+=sample_dt;
        loop_timer.sleep();
    }

            twist_cmd.linear.x=0.0;
        twist_cmd.angular.z=yaw_rate;
        timer=0.0;
    while(timer<time_3_sec){
        twist_commander.publish(twist_cmd);
        timer+=sample_dt;
        loop_timer.sleep();
    }
//4
        twist_cmd.linear.x=speed;
        twist_cmd.angular.z=0.0;
        timer=0.0;
    while(timer<1.3*time_3_sec){
        twist_commander.publish(twist_cmd);
        timer+=sample_dt;
        loop_timer.sleep();
    }

         twist_cmd.linear.x=0.0;
        twist_cmd.angular.z=-yaw_rate;
        timer=0.0;
    while(timer<time_3_sec){
        twist_commander.publish(twist_cmd);
        timer+=sample_dt;
        loop_timer.sleep();
    }
    //5
        twist_cmd.linear.x=speed;
        twist_cmd.angular.z=0.0;
        timer=0.0;
    while(timer<0.5*time_3_sec){
        twist_commander.publish(twist_cmd);
        timer+=sample_dt;
        loop_timer.sleep();
    }
        twist_cmd.linear.x=0.0;
        twist_cmd.angular.z=yaw_rate;
        timer=0.0;
    while(timer<time_3_sec){
        twist_commander.publish(twist_cmd);
        timer+=sample_dt;
        loop_timer.sleep();
    }
    //6

        twist_cmd.linear.x=speed;
        twist_cmd.angular.z=0.0;
        timer=0.0;
    while(timer<time_3_sec){
        twist_commander.publish(twist_cmd);
        timer+=sample_dt;
        loop_timer.sleep();
    }




       twist_cmd.linear.x=0.0;
       twist_cmd.angular.z=0.0;
       for(int i=0; i<10; i++){
           twist_commander.publish(twist_cmd);
           loop_timer.sleep();
       }
}
