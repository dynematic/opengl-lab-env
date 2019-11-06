#--------------------------------------------------------------------------
# lab-1 project
#--------------------------------------------------------------------------

FILE(GLOB lab_1_headers code/*.h)
FILE(GLOB lab_1_sources code/*.cc)

SET(files_lab_1 ${lab_1_headers} ${lab_1_sources})
SOURCE_GROUP("lab-1" FILES ${files_lab_1})

ADD_EXECUTABLE(lab_1 ${files_lab_1})
TARGET_LINK_LIBRARIES(lab_1 core render)
ADD_DEPENDENCIES(lab_1 core render)