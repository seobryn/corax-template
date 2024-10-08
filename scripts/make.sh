cd ../build
cmake .. \
    -DCMAKE_BUILD_TYPE=RelWithDebInfo \
    -DCMAKE_INSTALL_PREFIX=../release \
    -DCROW_INCLUDE_DIR="../libs/Crow/include/"