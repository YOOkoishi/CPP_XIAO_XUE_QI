#include <iostream>
#include <cassert>
#include "fizzbuzz.h"

void test_fizzbuzz() {
    std::cout << "运行 FizzBuzz 测试..." << std::endl;
    
    // 测试用例 1: 普通数字
    assert(fizzBuzz(1) == "1");
    assert(fizzBuzz(2) == "2");
    assert(fizzBuzz(4) == "4");
    std::cout << "✓ 1 2 4 普通数字测试通过" << std::endl;
    
    // 测试用例 2: 能被3整除的数字
    assert(fizzBuzz(3) == "Fizz");
    assert(fizzBuzz(6) == "Fizz");
    assert(fizzBuzz(9) == "Fizz");
    std::cout << "✓ 3 6 9 Fizz 测试通过" << std::endl;
    
    // 测试用例 3: 能被5整除的数字
    assert(fizzBuzz(5) == "Buzz");
    assert(fizzBuzz(10) == "Buzz");
    assert(fizzBuzz(20) == "Buzz");
    std::cout << "✓ 5 10 20 Buzz 测试通过" << std::endl;
    
    // 测试用例 4: 能被15整除的数字 (FizzBuzz)
    assert(fizzBuzz(15) == "FizzBuzz");
    assert(fizzBuzz(30) == "FizzBuzz");
    assert(fizzBuzz(45) == "FizzBuzz");
    std::cout << "✓ 15 30 45 FizzBuzz 测试通过" << std::endl;
    
    // 测试用例 5: 边界测试
    assert(fizzBuzz(0) == "FizzBuzz");  // 0能被3和5整除
    std::cout << "✓ 0 边界测试通过" << std::endl;
    
    std::cout << "所有测试通过! ✓" << std::endl;
}

int main() {
    test_fizzbuzz();
    return 0;
}