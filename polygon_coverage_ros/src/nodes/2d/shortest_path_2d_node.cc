#include <glog/logging.h>
#include <ros/ros.h>

#include "mav_coverage_planning_ros/nodes/2d/shortest_path_2d.h"

// Standard C++ entry point
int main(int argc, char** argv) {
  // Starting the logging
  google::InitGoogleLogging(argv[0]);
  // Announce this program to the ROS master
  ros::init(argc, argv, "shortest_path_2d_node");
  // Creating the node handles
  ros::NodeHandle nh;
  ros::NodeHandle nh_private("~");
  // Creating the coverage planner with ros interface
  mav_coverage_planning::ShortestPath2D shortest_path_2d(nh, nh_private);
  // Spinning (and processing service calls)
  ros::spin();
  // Exit tranquilly
  return 0;
}