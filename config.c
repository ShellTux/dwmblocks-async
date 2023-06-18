#include "block.h"
#include "config.h"
#include "util.h"

Block blocks[] = {
    {       "sb-packages",    0,  1},
    {     "sb-brightness",   60,  2},
    {        "sb-battery",   60,  3},
    {         "sb-volume",    0,  4},
    {       "sb-internet",   15,  5},
    {           "sb-date",  900,  6},
    {          "sb-clock",    5,  7},
    {          "echo ';'",    0,  0},
    {         "sb-kernel",    0,  8},
    {            "sb-cpu",    3,  9},
    {            "sb-mem",   30, 10},
    {         "sb-disk /", 3600, 11},
    {"sb-network-traffic",    1, 12},
    {        "sb-weather", 3600, 13},
    {           "sb-news", 1800, 14}
};

const unsigned short blockCount = LEN(blocks);
