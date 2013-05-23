Requires IPC v3.9.x or higher:

http://www.cs.cmu.edu/~IPC/

You will need to set up the ROS paths appropriately. 

You will also need to set the MEX variable in your environment:

export MEX=/path/to/matlab/bin/mex

This will vary based on your system, install path, etc.

### Installing IPC

* My discovred dependencies for IPC 3.9.1:
bison: one or more of (bison, bisonc++, libbison-dev)
flex
liballegro
common-lisp-controller
cl-quicklisp


* Follow the instructions at http://bolt-haptics.seas.upenn.edu/index.php/Software/Matlab-ROS-IPC-Bridge

Run the following twice:

       	CFLAGS_EXT="-fPIC" make
        
In the following lines, replace the # signs with the appropriate numbers:

        sudo cp lib/Linux-#.#/libipc.a /usr/local/lib/ 
        
        sudo cp bin/Linux-#.#/central /usr/local/bin/ 
        
        sudo cp bin/Linux-#.#/xdrgen /usr/local/bin/ 
        
        sudo cp include/ipc.h /usr/local/include/

### Installing ipc-bridge

*To compile the Mex files, you need to place symlinks in /usr/local/bin/ to matlab, mbuild, mcc, mex, mexext which can be found in the bin directory of your MATLAB path

