#include "block.h"
#include "config.h"
#include "util.h"

Block blocks[] = {
    {       "sb-packages",    0,  1},
    {         "sb-volume",    0,  2},
    {       "sb-internet",   15,  3},
    {           "sb-date",  900,  4},
    {          "sb-clock",    5,  5},
    {          "echo ';'",    0,  0},
    {         "sb-kernel",    0,  6},
    {            "sb-cpu",    3,  7},
    {            "sb-mem",   30,  8},
    {         "sb-disk /", 3600,  9},
    {     "sb-disk /home", 3600, 10},
    {"sb-network-traffic",    1, 11},
    {        "sb-weather", 3600, 12},
    {           "sb-news", 1800, 13}
};

const unsigned short blockCount = LEN(blocks);
