FROM agners/archlinuxarm
RUN mkdir /cpp_exercises
WORKDIR /cpp_exercises
ADD . /cpp_exercises

RUN pacman -Sy 
RUN yes | pacman -S gcc