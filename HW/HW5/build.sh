#Base command for compiling with fltk installed looks like this:
#fltk-config --compile *.cxx

cd truncstruct
./build.sh

cd ..
cd bullsncows
fltk-config --compile *.cpp
