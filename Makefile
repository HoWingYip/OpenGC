CXX := g++

CPP_FLAGS = -I./include

SRC_DIR := ./src
OBJ_DIR := ./obj

SRC_FILES := $(shell find ${SRC_DIR} -name *.cpp)
OBJ_FILES := $(SRC_FILES:${SRC_DIR}/%.cpp=${OBJ_DIR}/%.o)

MAIN := opengc

all: $(MAIN)
	@echo "Program compiled."

$(MAIN): $(OBJ_FILES)
	@echo "Linking object files"
	$(CXX) $(CXX_FLAGS) $(CPP_FLAGS) -o $(MAIN) $(OBJ_FILES)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@echo "Compiling $< to $@"
	@mkdir -p $(dir $@)
	$(CXX) $(CXX_FLAGS) $(CPP_FLAGS) -c -o $@ $<
