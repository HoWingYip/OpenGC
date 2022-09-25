CXX := g++

CPPFLAGS = -I./include

SRC_DIR := ./src
BUILD_DIR := ./build
OBJ_DIR := $(BUILD_DIR)/obj

SRC_FILES := $(shell find ${SRC_DIR} -name *.cpp)
OBJ_FILES := $(SRC_FILES:${SRC_DIR}/%.cpp=${OBJ_DIR}/%.o)

MAIN := $(BUILD_DIR)/OpenGC

all: $(MAIN)
	@echo "Program compiled."

$(MAIN): $(OBJ_FILES)
	@echo "Linking object files"
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -o $(MAIN) $(OBJ_FILES)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@echo "Compiling $< to $@"
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<
