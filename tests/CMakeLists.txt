add_executable(view_cam view_cam.cpp)
target_link_libraries(view_cam PUBLIC CONAN_PKG::opencv)
