Read me for Percept
=============================

Contents
=============================
	1.	About
	2.	Build & Run
		2.1	Mac OS X
	3.	Dependencies

1.	About
=============================


2.	Build & Run
=============================
	
2.1	Mac OS X
-----------------------------

Install all the Dependencies: 
	1)	Apple Xcode Developer Tools 
	2)	OpenCV: using Macports
	3)	Cmake

Then, put in the paths in Terminal

2.1.1	Using Cmake
-----------------------------

Open the root dir of the downloaded code in the Terminal. Then,

mkdir build
cd build
cmake ..
make

2.1.2	Other method
-----------------------------
export PKG_CONFIG_PATH=/opt/local/lib/pkgconfig
export LD_LIBRARY_PATH=/opt/local/lib

and compile code like this:

g++ -bind_at_load `pkg-config --cflags opencv` main.c -o File `pkg-config --libs opencv`
and then run the code like this:

./main.c


3.	Dependencies
=============================

1)	Developer Tools 
2)	OpenCV

EOF
