FROM debian:12.9-slim

WORKDIR /workspace/

COPY cloud_build/ /workspace/cloud_build/

COPY CMakeLists.txt /workspace/

COPY src/ /workspace/src/

COPY tests/ /workspace/tests/

# This keeps a copy of build/wsi2dcm & libwsi2dcm.so as it is used by endToEndTest.sh
RUN bash /workspace/cloud_build/debianBuild.sh

RUN \
    cp build/wsi2dcm build/libwsi2dcm.so . && \
    rm -r build && \
    mkdir build && \
    cp ./wsi2dcm libwsi2dcm.so build/

CMD ["wsi2dcm"]
