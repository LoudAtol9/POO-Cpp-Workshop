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
ENV USER=erad USER_ID=1000 USER_GID=1000

RUN groupadd --gid "${USER_GID}" "${USER}" && \
    useradd \
      --uid ${USER_ID} \
      --gid ${USER_GID} \
      --create-home \
      --shell /bin/bash \
      ${USER} && \
      echo ${USER}:${USER} | chpasswd &&  \
      adduser ${USER} sudo

COPY user-mapping.sh /
RUN  chmod u+x user-mapping.sh

RUN apt-get install -y \
      gcc g++

ENTRYPOINT ["/user-mapping.sh"]