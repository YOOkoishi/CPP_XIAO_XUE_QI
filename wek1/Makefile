# 编译器设置
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# 目标可执行文件名
TARGET = fizzbuzz_program

# 源文件
SOURCES = main.cpp fizzbuzz.cpp

# 目标文件
OBJECTS = $(SOURCES:.cpp=.o)

# 默认目标
all: $(TARGET)

# 链接目标文件生成可执行文件
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

# 编译源文件生成目标文件
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 运行程序
run: $(TARGET)
	./$(TARGET)

# 清理生成的文件
clean:
	rm -f $(OBJECTS) $(TARGET)

# 重新构建
rebuild: clean all

# 声明伪目标
.PHONY: all run clean rebuild