//==========================================================================================
//   Daminiband
//
//   Copyright (c) 2021 Shaun Brandt / Holy Meatgoat Software
//
//   Permission is hereby granted, free of charge, to any person obtaining a copy
//   of this software and associated documentation files (the "Software"), to deal
//   in the Software without restriction, including without limitation the rights
//   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//   copies of the Software, and to permit persons to whom the Software is
//   furnished to do so, subject to the following conditions:
//
//   The above copyright notice and this permission notice shall be included in all
//   copies or substantial portions of the Software.
//
//   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//   SOFTWARE.
//==========================================================================================
#include <stdlib.h>
#include <time.h>
#include <alloc.h>
#include "dungeon.h"
#include <graphics.h>
#include <conio.h>

// The dungeon.
Dungeon g_dungeon;

//------------------------------------------------------------------------------
// draw_dungeon
//
// Debug function.  Draws (very slowly) a representation of the dungeon.
//------------------------------------------------------------------------------
void draw_dungeon(Dungeon dungeon)
{
	for (int j = 0; j < DUNGEON_HEIGHT; j++) {
		for (int i=0; i < DUNGEON_WIDTH; i++) {
			if (dungeon[j*DUNGEON_WIDTH + i].carved == 0) {
				bar(i*6, j*6, i*6+6, j*6+6);
			}
		}
	}
}

int main(void) 
{
	int maxDepth = 4;
	TreeNode *root = NULL;
	Partition *p = NULL;

	g_dungeon = (Dungeon)malloc(DUNGEON_WIDTH * DUNGEON_HEIGHT * sizeof(DungeonSquare));

	srand(time(NULL));

	p = (Partition *)malloc(sizeof(Partition));

	p->x = 0;
	p->y = 0;
	p->w = 64;
	p->h = 64;

	root = create_split_node(p, maxDepth);
	create_rooms(root);

	initialize_dungeon(g_dungeon);

	populate_dungeon(root, g_dungeon);
	connect_rooms(root, g_dungeon);

	// We're done with the BSP tree now, so delete it.
	destroy_tree(root);
	root = NULL;

	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "");
	
	draw_dungeon(g_dungeon);
	
	getch();
	closegraph();

	free(g_dungeon);

	return 0;
}
