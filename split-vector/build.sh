CXX="clang++ -std=c++2a -g -fmodules-ts"

# $CXX -o split main.cpp && \
$CXX -o splitm.pcm --precompile -x c++-module split.cpp &&
    $CXX -o splitm -fprebuilt-module-path=. main.cpp split.cpp &&

    # ./split
    ./splitm
