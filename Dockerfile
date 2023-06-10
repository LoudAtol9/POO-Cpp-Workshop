FROM ubuntu:22.04

RUN apt-get update
RUN apt-get upgrade -y
RUN apt-get install -y \
      sudo \
      bash-completion \
      apt-utils \
      build-essential \
      make \
      git
ENV USER=grupo7 USER_ID=1000 USER_GID=1000

RUN groupadd --gid "${USER_GID}" "${USER}" && \
    useradd \
      --uid ${USER_ID} \
      --gid ${USER_GID} \
      --create-home \
      --shell /bin/bash \
      ${USER} && \
      echo ${USER}:${USER} | chpasswd &&  \
      adduser ${USER} sudo

ADD /source /source
ADD /build /build

RUN apt-get install -y \
      gcc g++

WORKDIR /build

RUN make

CMD ["./main.exe"]