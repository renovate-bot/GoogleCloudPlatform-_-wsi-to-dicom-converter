FROM debian:12.9-slim

COPY . /workspace

WORKDIR /workspace

RUN bash cloud_build/debianBuild.sh
