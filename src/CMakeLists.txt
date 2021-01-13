add_library(shp_math shp_math.cpp)
message(STATUS ${PROJECT_SOURCE_DIR}/include)
target_include_directories(shp_math PUBLIC ${PROJECT_SOURCE_DIR}/include)


add_library(tt_config_db TtConfigDb)
target_include_directories(tt_config_db PUBLIC ${PROJECT_SOURCE_DIR}/include)
