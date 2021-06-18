FROM ubuntu:20.04

# Open port 6003
EXPOSE 6003

# update
RUN apt-get update -y

# install socat
RUN apt-get install socat wget -y

# Set WorkDir
RUN mkdir /app
WORKDIR /app

# Copy binary to workdir
COPY flag.txt /app/flag.txt
COPY main /app/main

RUN chown root:root main flag.txt
RUN chmod 755 main flag.txt

# Securing Environment
RUN chmod 700 /usr/bin/* /bin/* /tmp /dev/shm
RUN chmod 755 /bin/dash /bin/sh /bin/cat /usr/bin/id /bin/ls

# Run Program
CMD socat TCP-LISTEN:6003,reuseaddr,fork EXEC:./main