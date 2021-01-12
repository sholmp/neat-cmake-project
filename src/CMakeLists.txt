add_library(shp_math shp_math.cpp)
message(STATUS ${PROJECT_SOURCE_DIR}/include)
target_include_directories(shp_math PUBLIC ${PROJECT_SOURCE_DIR}/include)

