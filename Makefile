BUILD_DIR="build"
clean:
	rm -rf ${BUILD_DIR}

init:
	rm -rf ${BUILD_DIR}
	mkdir ${BUILD_DIR}
	cmake -DCMAKE_TOOLCHAIN_FILE=cmake/Arduino-Toolchain.cmake -B${BUILD_DIR} -H.

build:
	make -C ${BUILD_DIR} -j

.PHONY: clean init build
