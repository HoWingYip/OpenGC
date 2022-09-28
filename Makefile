CXX := g++

CPPFLAGS = -I./include

SRC_DIR := ./src
HEADER_DIR := ./include
BUILD_DIR := ./build
OBJ_DIR := $(BUILD_DIR)/obj

SRC_FILES := $(shell find ${SRC_DIR} -name *.cpp)
OBJ_FILES := $(SRC_FILES:${SRC_DIR}/%.cpp=${OBJ_DIR}/%.o)
HEADER_FILES := $(shell find ${HEADER_DIR} -name *.hpp) # includes impl files

MAIN := $(BUILD_DIR)/OpenGC

all: $(MAIN)
	@echo "Program compiled."

$(MAIN): $(OBJ_FILES)
	@echo "Linking object files"
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $(MAIN) $(OBJ_FILES)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADER_FILES)
	@echo "Compiling $< to $@"
	@mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJ_FILES)
