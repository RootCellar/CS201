#Base command for compiling with fltk installed looks like this:
#fltk-config --compile *.cxx

cd truncstruct
fltk-config --compile main.cpp

cd ..
cd bullsncows
fltk-config --compile *.cpp
