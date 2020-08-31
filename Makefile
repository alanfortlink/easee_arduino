BUILD_DIR="build"

init:
	$ rm -rf ${BUILD_DIR}
	mkdir ${BUILD_DIR}
	cd ${BUILD_DIR}
	cmake -DCMAKE_TOOLCHAIN_FILE=cmake/Arduino-Toolchain.cmake .

build:
	cd ${BUILD_DIR}
	make -j -C ${BUILD_DIR}
