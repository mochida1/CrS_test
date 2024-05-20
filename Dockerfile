FROM	debian:stable

RUN		apt update && apt upgrade -y

RUN		apt install -y \
		build-essential \
		libgtest-dev \
		cmake

RUN		cd /usr/src/gtest &&\
		cmake CMakeLists.txt &&\
		make &&\
		cd lib &&\
		cp *.a /usr/lib

RUN		mkdir /crediteSuisse

COPY . /crediteSuisse

WORKDIR /crediteSuisse

RUN ./run_native.sh

CMD ["/bin/bash"]