#!/bin/bash

$CXX "$SRC_DIR/softserve-query.cpp" -o softserve-query
if [ $? -ne 0 ]; then
    exit 1
fi

mkdir -p "$PREFIX/bin"
cp softserve-query "$PREFIX/bin/"
if [ $? -ne 0 ]; then
    exit 1
fi
