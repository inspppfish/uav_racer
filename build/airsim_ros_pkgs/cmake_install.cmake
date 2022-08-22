# Install script for directory: /home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/airsim_ros_pkgs/msg" TYPE FILE FILES
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/msg/GimbalAngleEulerCmd.msg"
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/msg/GimbalAngleQuatCmd.msg"
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/msg/GPSYaw.msg"
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/msg/VelCmd.msg"
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/msg/VelCmdGroup.msg"
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/msg/CarControls.msg"
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/msg/CarState.msg"
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/msg/Altimeter.msg"
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/msg/Environment.msg"
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/msg/PoseCmd.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/airsim_ros_pkgs/srv" TYPE FILE FILES
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/srv/SetGPSPosition.srv"
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/srv/Takeoff.srv"
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/srv/TakeoffGroup.srv"
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/srv/Land.srv"
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/srv/LandGroup.srv"
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/srv/Reset.srv"
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/srv/SetLocalPosition.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/airsim_ros_pkgs/cmake" TYPE FILE FILES "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/build/airsim_ros_pkgs/catkin_generated/installspace/airsim_ros_pkgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/devel/include/airsim_ros_pkgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/devel/share/roseus/ros/airsim_ros_pkgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/devel/share/common-lisp/ros/airsim_ros_pkgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/devel/share/gennodejs/ros/airsim_ros_pkgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/devel/lib/python3/dist-packages/airsim_ros_pkgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/devel/lib/python3/dist-packages/airsim_ros_pkgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/build/airsim_ros_pkgs/catkin_generated/installspace/airsim_ros_pkgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/airsim_ros_pkgs/cmake" TYPE FILE FILES "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/build/airsim_ros_pkgs/catkin_generated/installspace/airsim_ros_pkgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/airsim_ros_pkgs/cmake" TYPE FILE FILES
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/build/airsim_ros_pkgs/catkin_generated/installspace/airsim_ros_pkgsConfig.cmake"
    "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/build/airsim_ros_pkgs/catkin_generated/installspace/airsim_ros_pkgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/airsim_ros_pkgs" TYPE FILE FILES "/home/airvoltex/mysource/IntelligentUAVChampionship/myUAV/src/airsim_ros_pkgs/package.xml")
endif()

