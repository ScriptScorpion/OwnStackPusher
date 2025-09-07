# The holy MakeFile
CC := g++
CC_FLAGS := -std=c++17 
TARGET := exe
SOURCE_FILES := definition/implement.cpp

USER_FILES := test.cpp # enter any files you want to get

ALL_FILES := $(SOURCE_FILES) $(USER_FILES)
OBJS := $(ALL_FILES:.cpp=.o)

%.o : %.cpp
	$(CC) $(CC_FLAGS) -c $< -o $@

$TARGET: $(OBJS)
	$(CC) $(CC_FLAGS) $(OBJS) -o $(TARGET)
	@rm -f $(OBJS)
	
