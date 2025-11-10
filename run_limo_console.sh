#!/bin/bash

# LIMO Console Simulation Script
# This script runs the LIMO simulation in console mode without GUI dependencies

echo "=== LIMO Console Simulation ==="
echo "Setting up ROS 2 environment..."

# Setup ROS environment
source /opt/ros/jazzy/setup.bash
source install/setup.bash

# Function to cleanup processes on exit
cleanup() {
    echo ""
    echo "Shutting down LIMO simulation..."
    kill 0  # Kill all processes in the process group
    exit 0
}

# Set trap to cleanup on script exit
trap cleanup SIGINT SIGTERM

echo "Starting robot state publisher..."
# Start robot state publisher in background
ros2 run robot_state_publisher robot_state_publisher --ros-args -p robot_description:="$(xacro src/agilex_open_class/limo/limo_description/urdf/limo_four_diff.xacro)" &
RSP_PID=$!

# Wait a moment for robot_state_publisher to initialize
sleep 3

echo "Starting joint state publisher..."
# Start joint state publisher with proper parameters
ros2 run joint_state_publisher joint_state_publisher --ros-args -p use_sim_time:=true &
JSP_PID=$!

echo ""
echo "=== LIMO Simulation Running ==="
echo "Robot state publisher PID: $RSP_PID"
echo "Joint state publisher PID: $JSP_PID"
echo ""
echo "Available ROS topics:"
sleep 1
ros2 topic list
echo ""
echo "To view robot description:"
echo "  ros2 topic echo /robot_description --once"
echo ""
echo "To view joint states:"
echo "  ros2 topic echo /joint_states"
echo ""
echo "To control the robot (if teleop is working):"
echo "  ros2 run teleop_twist_keyboard teleop_twist_keyboard"
echo ""
echo "Press Ctrl+C to stop..."

# Wait for processes
wait
