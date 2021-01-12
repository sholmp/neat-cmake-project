add_executable(app main.cpp)

target_link_libraries(app PUBLIC shp_math)
#target_link_directories(app PRIVATE ${PROJECT_SOURCE_DIR}/include)
#target_link_libraries(app /home/sorenholmpetersen/local/playground/debug/src/libshp_math.a)
