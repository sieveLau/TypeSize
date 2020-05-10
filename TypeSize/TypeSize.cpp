// TypeSize.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    uint8_t int8 = -1;
    uint16_t int16 = -1;
    uint32_t int32 = -1;
    uint64_t int64 = -1;
    uint_fast16_t fastint16 = -1;
    printf("uint8_t: %u\n", int8);
    printf("uint16_t: %u\n", int16);
    printf("uint32_t: %u\n", int32);
    printf("uint64_t: %llu\n", int64);
    printf("uint_fast16_t: %u\n", fastint16);
}
