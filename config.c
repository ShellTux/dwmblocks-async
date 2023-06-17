#include "block.h"
#include "config.h"
#include "util.h"

Block blocks[] = {
    {       "sb-packages",    0,  2},
    {     "sb-brightness",   60,  3},
    {        "sb-battery",   60,  4},
    {         "sb-volume",    0,  5},
    {       "sb-internet",   15,  6},
    {           "sb-date",  900,  7},
    {          "sb-clock",    5,  8},
    {          "echo ';'",    0,  0},
    {         "sb-kernel",    0,  9},
    {            "sb-cpu",    3, 10},
    {            "sb-mem",   30, 11},
    {         "sb-disk /", 3600, 12},
    {     "sb-disk /home", 3600, 13},
    {  "sb-disk /storage", 3600, 14},
    {  "sb-disk-activity",    3, 15},
    {"sb-network-traffic",    1, 16},
    {        "sb-weather", 3600, 17},
    {           "sb-news", 1800, 18}
};

const unsigned short blockCount = LEN(blocks);
