cmake_minimum_required(VERSION 2.8)
add_library(emojiGenLib STATIC
    emojigenlib.cpp
    emojigenlib.hpp
)
find_package(OpenCV REQUIRED)
if(OpenCV_FOUND)
  # インクルードパスを指定
  include_directories(${OpenCV_INCLUDE_DIRS} ${PYTHON_INCLUDE_DIRS})

  # リンクするライブラリ指定
  target_link_libraries(emojiGenLib ${OpenCV_LIBS} ${PYTHON_LIBRARIES})
endif(OpenCV_FOUND)
