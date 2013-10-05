/*
 * This file is part of EasyRPG Player.
 *
 * EasyRPG Player is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EasyRPG Player is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _EASYRPG_GRAPHIC_SCREEN_H_
#define _EASYRPG_GRAPHIC_SCREEN_H_

// Headers
#include <string>
#include "system.h"
#include "drawable.h"
#include "zobj.h"

namespace RPG {
	class SaveScreen;
}

class Screen : public Drawable {
public:
	Screen(RPG::SaveScreen& data);
	~Screen();

	void Draw(int z_order);
	void Update();

	unsigned long GetId() const;
	int GetZ() const;
	DrawableType GetType() const;

private:
	static const int z = 1000;
	static const DrawableType type = TypeScreen;

	RPG::SaveScreen& data;

	unsigned long ID;
	ZObj* zobj;
	bool visible;
};

#endif
