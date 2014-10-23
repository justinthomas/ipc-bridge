Requires IPC v3.9.x or higher:

http://www.cs.cmu.edu/~IPC/

You will need to set up the ROS paths appropriately. 

You will also need to set the MEX variable in your environment:

export MEX=/path/to/matlab/bin/mex

This will vary based on your system, install path, etc.

### Installing IPC

* My discovered dependencies for IPC 3.9.1:
bison: one or more of (bison, bisonc++, libbison-dev)
flex
liballegro
common-lisp-controller
cl-quicklisp

NOTE (as of 10/23/14): There's a bug in bison and libbison-dev 3 that causes IPC to not compile. Instead, download bison/libbison-dev 2.7.1 ( http://askubuntu.com/questions/444982/install-bison-2-7-in-ubuntu-14-04 )


* Follow the instructions at http://bolt-haptics.seas.upenn.edu/index.php/Software/Matlab-ROS-IPC-Bridge

Run the following twice:

       	CFLAGS_EXT="-fPIC" make
        
In the following lines, replace the # signs with the appropriate numbers:

        sudo cp lib/Linux-#.#/libipc.a /usr/local/lib/ 
        
        sudo cp bin/Linux-#.#/central /usr/local/bin/ 
        
        sudo cp bin/Linux-#.#/xdrgen /usr/local/bin/ 
        
        sudo cp include/ipc.h /usr/local/include/

### Installing ipc-bridge



1. Exporting Mex File Path 
#substitute your Matlab path inside the export
echo "export MEX=/usr/local/MATLAB/2014a/bin/mex" >> ~/.bashrc
source ~/.bashrc

2. 
*To compile the Mex files, you need to place symlinks in /usr/local/bin/ to matlab, mbuild, mcc, mex, mexext which can be found in the bin directory of your MATLAB path

sudo cp /usr/local/MATLAB/2014a/bin/matlab /usr/local/bin
sudo cp /usr/local/MATLAB/2014a/bin/mbuild /usr/local/bin
...
etc.

3. Installing IPC Bridge - 
rosmake ipc_bridge_ros

roscd ipc_rosgraph_msgs && make
roscd ipc_std_msgs && make
roscd ipc_geometry_msgs && make
roscd ipc_nav_msgs && make
roscd ipc_sensor_msgs && make 


