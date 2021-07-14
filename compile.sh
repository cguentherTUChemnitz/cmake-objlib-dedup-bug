#!/bin/bash -x

cmake -S"." -B"build" -GXcode
cmake --build "build" --config Release --target ObjLibDedupBug -- -quiet
