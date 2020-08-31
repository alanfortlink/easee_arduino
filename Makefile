BUILD_DIR="build"
clean:
	rm -rf ${BUILD_DIR}

init:
	rm -rf ${BUILD_DIR}
	mkdir ${BUILD_DIR}
	cmake -DCMAKE_TOOLCHAIN_FILE=cmake/Arduino-Toolchain.cmake -B${BUILD_DIR} -H.

build:
	make -C ${BUILD_DIR} -j

upload:
	avrdude -cavrispmkII -patmega2560 -P/dev/cu.usbmodem143301 -Uflash:w:build/easee_exec.hex -D

.PHONY: clean init build
