# 编译器设置
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# 目标可执行文件名
TARGET = fizzbuzz_program
TEST_TARGET = test_fizzbuzz

# 源文件
MAIN_SOURCES = main.cpp fizzbuzz.cpp
TEST_SOURCES = test.cpp fizzbuzz.cpp

# 目标文件
MAIN_OBJECTS = $(MAIN_SOURCES:.cpp=.o)
TEST_OBJECTS = $(TEST_SOURCES:.cpp=.o)

# 默认目标
all: $(TARGET) $(TEST_TARGET)

# 主程序
$(TARGET): main.o fizzbuzz.o
	$(CXX) main.o fizzbuzz.o -o $(TARGET)

# 测试程序
$(TEST_TARGET): test.o fizzbuzz.o
	$(CXX) test.o fizzbuzz.o -o $(TEST_TARGET)

# 编译源文件生成目标文件
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 运行主程序
run: $(TARGET)
	./$(TARGET)

# 运行测试
test: $(TEST_TARGET)
	./$(TEST_TARGET)

# 清理生成的文件
clean:
	rm -f *.o $(TARGET) $(TEST_TARGET)

# 重新构建
rebuild: clean all

# 声明伪目标
.PHONY: all run test clean rebuild