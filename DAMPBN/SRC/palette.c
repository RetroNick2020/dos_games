/* Copyright 2021 Shaun Brandt
   
   Permission is hereby granted, free of charge, to any person obtaining a 
   copy of this software and associated documentation files (the "Software"),
   to deal in the Software without restriction, including without limitation
   the rights to use, copy, modify, merge, publish, distribute, sublicense,
   and/or sell copies of the Software, and to permit persons to whom the
   Software is furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included
   in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
   DEALINGS IN THE SOFTWARE.
 */
#include <allegro.h>

PALETTE game_pal = {
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {19, 18, 19}, {17, 9, 13}, {12, 13, 27}, {33, 19, 12},
  {13, 25, 9}, {29, 28, 24}, {52, 17, 18}, {22, 31, 51},
  {52, 31, 11}, {27, 42, 11}, {33, 37, 40}, {52, 42, 38},
  {27, 48, 50}, {54, 53, 23}, {5, 3, 7}, {55, 59, 53},
  {0, 0, 0}, {63, 63, 63}, {63, 63, 0}, {63, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}
};

PALETTE title_pal = {
	{3, 4, 4}, {3, 5, 6}, {3, 5, 8}, {5, 7, 9},
	{5, 7, 9}, {6, 8, 11}, {6, 8, 12}, {8, 9, 12},
	{7, 9, 12}, {6, 10, 13}, {8, 10, 11}, {8, 10, 14},
	{7, 10, 14}, {8, 10, 13}, {10, 11, 15}, {9, 11, 14},
	{9, 12, 15}, {8, 12, 14}, {7, 12, 16}, {9, 13, 17},
	{9, 13, 16}, {10, 13, 14}, {10, 13, 17}, {11, 13, 16},
	{11, 13, 17}, {10, 13, 19}, {11, 14, 18}, {9, 14, 18},
	{10, 15, 19}, {10, 15, 20}, {12, 15, 19}, {11, 15, 20},
	{12, 15, 17}, {13, 14, 19}, {12, 16, 20}, {11, 16, 21},
	{13, 16, 19}, {13, 16, 20}, {13, 17, 22}, {13, 17, 21},
	{12, 17, 22}, {13, 18, 23}, {14, 18, 22}, {14, 18, 21},
	{15, 18, 24}, {13, 19, 25}, {14, 19, 24}, {14, 20, 25},
	{15, 20, 24}, {16, 20, 25}, {14, 20, 27}, {16, 20, 27},
	{15, 21, 26},	{17, 21, 28}, {16, 22, 28}, {16, 22, 27},
	{18, 23, 27}, {17, 23, 30}, {18, 23, 28}, {19, 25, 32},
	{19, 25, 30}, {18, 25, 33}, {21, 26, 32}, {20, 27, 35},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {19, 18, 19}, {17, 9, 13}, {12, 13, 27}, {33, 19, 12},
  {13, 25, 9}, {29, 28, 24}, {52, 17, 18}, {22, 31, 51},
  {52, 31, 11}, {27, 42, 11}, {33, 37, 40}, {52, 42, 38},
  {27, 48, 50}, {54, 53, 23}, {5, 3, 7}, {55, 59, 53},
  {0, 0, 0}, {63, 63, 63}, {63, 63, 0}, {63, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
  {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0} 
};

PALETTE logo_pal = {
  {0, 0, 0}, {0, 1, 0}, {1, 2, 1}, {2, 3, 2},
	{3, 3, 2}, {3, 4, 3}, {4, 5, 4}, {5, 5, 5},
	{5, 6, 5}, {6, 7, 6}, {7, 8, 7}, {8, 8, 8},
	{8, 9, 8}, {9, 9, 9}, {9, 10, 9}, {10, 11, 10},
	{11, 11, 11}, {12, 12, 11}, {12, 13, 12}, {13, 14, 13},
	{14, 14, 14}, {15, 15, 15}, {16, 16, 15}, {17, 17, 17},
	{17, 18, 17}, {18, 18, 18}, {19, 20, 19},	{43, 13, 13},
	{20, 20, 20}, {52, 11, 11},	{54, 11, 12}, {52, 12, 13},
	{21, 21, 20}, {55, 12, 11}, {54, 13, 12}, {21, 22, 21},
	{58, 12, 12}, {52, 14, 15}, {56, 13, 13}, {22, 23, 22},
	{57, 13, 14}, {55, 14, 13}, {23, 23, 22}, {57, 13, 13},
	{55, 14, 14}, {59, 13, 13}, {59, 13, 14}, {53, 15, 15},
	{23, 24, 23}, {57, 14, 14}, {56, 15, 15},	{54, 15, 16},
	{62, 13, 14}, {57, 14, 16}, {60, 14, 14}, {51, 17, 16},
	{24, 24, 24}, {24, 15, 16}, {56, 15, 16}, {49, 17, 17},
	{62, 14, 15}, {56, 16, 15}, {25, 25, 25}, {61, 15, 14},
	{55, 17, 18}, {53, 17, 17}, {55, 17, 17}, {63, 15, 15},
	{50, 19, 19}, {26, 26, 26}, {54, 18, 18}, {63, 16, 16},
	{53, 19, 19}, {27, 27, 26}, {55, 19, 20}, {54, 20, 20},
	{27, 28, 27}, {53, 21, 21}, {50, 22, 21}, {51, 21, 21},
	{55, 21, 21}, {52, 22, 22}, {28, 29, 28}, {54, 22, 22}, 
  {49, 23, 23}, {29, 29, 29}, {53, 23, 22}, {51, 23, 23},
	{56, 22, 23}, {53, 23, 23}, {55, 23, 23}, {30, 30, 29},
	{52, 24, 24}, {54, 24, 23}, {54, 24, 24}, {44, 26, 27},
	{30, 31, 30}, {50, 26, 26}, {53, 25, 24}, {56, 31, 31},
	{53, 25, 26}, {52, 26, 26}, {49, 27, 26}, {51, 27, 26}, 
  {56, 25, 26}, {32, 32, 32}, {53, 27, 27}, {52, 27, 27},
	{32, 33, 32}, {52, 28, 28}, {50, 29, 29}, {33, 34, 33},
  {51, 28, 28}, {50, 29, 28}, {34, 34, 33}, {53, 29, 29},
	{52, 29, 29}, {34, 35, 34}, {52, 30, 29}, {56, 29, 29},
	{55, 30, 29}, {50, 31, 30}, {35, 35, 35}, {54, 30, 30},
	{52, 31, 31}, {48, 32, 32}, {35, 36, 35}, {50, 32, 33},
	{36, 37, 36}, {53, 32, 32}, {52, 32, 32}, {37, 37, 36},
	{48, 34, 34}, {51, 33, 34}, {37, 38, 37}, {52, 34, 33},
	{53, 33, 33}, {52, 34, 35}, {38, 39, 38}, {51, 35, 35},
	{53, 35, 35}, {39, 39, 38}, {55, 35, 34}, {51, 36, 37},
	{52, 36, 36}, {51, 37, 36}, {39, 40, 39}, {50, 37, 37},
	{40, 41, 40}, {53, 37, 37}, {41, 41, 40}, {52, 38, 37},
	{51, 38, 38}, {41, 41, 41}, {50, 39, 38}, {52, 38, 39},
	{55, 37, 38}, {42, 42, 41}, {55, 39, 38}, {52, 40, 40},
	{42, 43, 42}, {51, 40, 40}, {54, 40, 39},	{54, 40, 40},
	{53, 40, 40}, {43, 44, 43}, {52, 41, 42}, {44, 44, 43},
	{53, 42, 41}, {54, 41, 41}, {51, 43, 43}, {45, 45, 44},
	{54, 43, 44}, {54, 43, 42}, {45, 46, 45}, {52, 44, 44},
	{45, 46, 45}, {46, 46, 46},	{54, 44, 45}, {53, 45, 45},
	{46, 47, 46}, {54, 45, 45}, {47, 47, 47}, {53, 46, 45},
	{47, 48, 47}, {55, 46, 46}, {48, 48, 47}, {54, 47, 46},
	{49, 49, 48}, {55, 47, 47}, {55, 46, 49}, {48, 48, 47},
	{54, 47, 46}, {49, 49, 48}, {55, 47, 47}, {56, 47, 47},
	{49, 50, 49}, {55, 48, 48}, {54, 49, 48}, {50, 51, 50},
	{56, 49, 49}, {51, 51, 51}, {55, 50, 51}, {56, 50, 49}, 
  {51, 52, 51}, {52, 51, 50}, {52, 53, 52}, {56, 51, 52},
	{52, 53, 52}, {55, 52, 52}, {57, 52, 53}, {58, 52, 51},
	{53, 54, 53}, {56, 53, 53}, {58, 53, 53}, {53, 54, 53},
	{58, 53, 54}, {57, 54, 54}, {54, 55, 54}, {55, 55, 54},
	{59, 54, 54}, {58, 54, 55}, {55, 56, 55}, {58, 55, 55},
	{56, 56, 55}, {59, 56, 56}, {56, 57, 56}, {57, 57, 57},
	{60, 57, 57}, {57, 58, 57}, {60, 57, 57}, {58, 58, 58},
	{61, 58, 58}, {58, 59, 58}, {60, 59, 58}, {59, 59, 58},
	{59, 60, 59}, {61, 60, 59}, {60, 60, 59}, {60, 61, 60}, 
  {62, 61, 60}, {61, 61, 60}, {61, 62, 61}, {63, 61, 61},
	{61, 62, 61}, {63, 62, 62}, {62, 62, 62}, {63, 62, 62}, 
  {62, 63, 62}, {62, 63, 62}, {63, 63, 62}, {63, 63, 63},
	{63, 63, 63}, {63, 63, 63}, {63, 63, 63}, {63, 63, 63}
  };