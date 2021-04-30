CC = g++

APP_NAME = chessviz
LIB_NAME = libchessviz

CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I src -I thirdparty 
LDFLAGS =
LDLIBS =

BIN_DIR = bin
OBJ_DIR = obj
SRC_DIR = src

APP_PATH = $(BIN_DIR)/$(APP_NAME)
LIB_PATH = $(OBJ_DIR)/$(SRC_DIR)/$(LIB_NAME)/$(LIB_NAME).a

SRC_EXT = cpp

APP_SOURCES = $(shell find $(SRC_DIR)/$(APP_NAME) -name '*.$(SRC_EXT)')
APP_OBJECTS = $(APP_SOURCES:$(SRC_DIR)/%.$(SRC_EXT)=$(OBJ_DIR)/$(SRC_DIR)/%.o)

LIB_SOURCES = $(shell find $(SRC_DIR)/$(LIB_NAME) -name '*.$(SRC_EXT)')
LIB_OBJECTS = $(LIB_SOURCES:$(SRC_DIR)/%.$(SRC_EXT)=$(OBJ_DIR)/$(SRC_DIR)/%.o)

DEPS = $(APP_OBJECTS:.o=.d) $(LIB_OBJECTS:.o=.d)

CHESSVIZ_OBJ = obj/src/chessviz/
CHESSVIZ_SRC = src/chessviz/
LIBCHESSVIZ_SRC = src/libchessviz/

CHESSVIZ_OBJ = obj/src/chessviz/
LIBCHESSVIZ_OBJ = obj/src/libchessviz/

CHESSVIZ_BIN = bin/

SRC = src/

TEST = test/

TEST_OBJ = obj/test/

TEST_THIRDPARTY = thirdparty/

.PHONY: all
all: $(APP_PATH)

-include $(DEPS)

$(APP_PATH): $(APP_OBJECTS) $(LIB_PATH)
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -o $@ $(LDFLAGS) $(LDLIBS)

$(LIB_PATH): $(LIB_OBJECTS)
	ar rcs $@ $^

$(OBJ_DIR)/%.o: %.cpp
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@



.PHONY: test

test: $(CHESSVIZ_BIN)test

$(CHESSVIZ_BIN)test: $(TEST_OBJ)main.o $(TEST_OBJ)testlibchessviz.a
	$(CXX) $(CPPFLAGS) -o $@ $^

$(TEST_OBJ)main.o: $(TEST)main.cpp
	$(CXX) -c $(CPPFLAGS) -o $@ $<

$(TEST_OBJ)testlibchessviz.a: $(TEST_OBJ)is_black_or_white.o $(TEST_OBJ)get_coordinate.o $(TEST_OBJ)move_rule_for_black_pawn.o $(TEST_OBJ)move_rule_for_white_pawn.o $(TEST_OBJ)move.o $(TEST_OBJ)game_loop.o $(TEST_OBJ)new_board.o $(TEST_OBJ)check_input.o $(TEST_OBJ)is_turn_right.o $(TEST_OBJ)console_input.o $(TEST_OBJ)show_board.o
	ar rcs $@ $^

$(TEST_OBJ)check_input.o: $(LIBCHESSVIZ_SRC)check_input.cpp
	$(CXX) -c $(CPPFLAGS) -o $@ $<

$(TEST_OBJ)is_black_or_white.o: $(LIBCHESSVIZ_SRC)is_black_or_white.cpp
	$(CXX) -c $(CPPFLAGS) -o $@ $<

$(TEST_OBJ)get_coordinate.o: $(LIBCHESSVIZ_SRC)get_coordinate.cpp
	$(CXX) -c $(CPPFLAGS) -o $@ $<
	
$(TEST_OBJ)move_rule_for_black_pawn.o: $(LIBCHESSVIZ_SRC)move_rule_for_black_pawn.cpp
	$(CXX) -c $(CPPFLAGS) -o $@ $<
	
$(TEST_OBJ)move_rule_for_white_pawn.o: $(LIBCHESSVIZ_SRC)move_rule_for_white_pawn.cpp
	$(CXX) -c $(CPPFLAGS) -o $@ $<
	
$(TEST_OBJ)move.o: $(LIBCHESSVIZ_SRC)move.cpp
	$(CXX) -c $(CPPFLAGS) -o $@ $<
	
$(TEST_OBJ)game_loop.o: $(LIBCHESSVIZ_SRC)game_loop.cpp
	$(CXX) -c $(CPPFLAGS) -o $@ $<
	
$(TEST_OBJ)new_board.o: $(LIBCHESSVIZ_SRC)new_board.cpp
	$(CXX) -c $(CPPFLAGS) -o $@ $<
	
$(TEST_OBJ)is_turn_right.o: $(LIBCHESSVIZ_SRC)is_turn_right.cpp
	$(CXX) -c $(CPPFLAGS) -o $@ $<
			
$(TEST_OBJ)console_input.o: $(LIBCHESSVIZ_SRC)console_input.cpp
	$(CXX) -c $(CPPFLAGS) -o $@ $<

$(TEST_OBJ)show_board.o: $(LIBCHESSVIZ_SRC)show_board.cpp
	$(CXX) -c $(CPPFLAGS) -o $@ $<

.PHONY: clean-test
clean-test:
	rm $(TEST_OBJ)*.o
	rm $(TEST_OBJ)*.a
	rm $(CHESSVIZ_BIN)*.exe
		
			
.PHONY: clean
clean:
	$(RM) $(APP_PATH) $(LIB_PATH)
	find $(OBJ_DIR) -name '*.o' -exec $(RM) '{}' \;
	find $(OBJ_DIR) -name '*.d' -exec $(RM) '{}' \;
	
-include ctest.d
