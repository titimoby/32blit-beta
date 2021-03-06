#include <map>
class System;

class Input {
	public:
		static std::map<int, int> keys;
		static std::map<int, int> buttons;

		static int find_key(int key);
		static int find_button(int button);

		Input(SDL_Window *window, System *system);

		void resize(int width, int height);

		// Input handlers return true if they handled the event
		bool handle_mouse(int button, bool state, int x, int y);
		bool handle_keyboard(int key, bool state);
		bool handle_controller_button(int button, bool state);
		bool handle_controller_motion(int axis, int value);

	private:
		System *target;

		void _virtual_analog(int, int);
		void _virtual_tilt(int, int);

		int win_width, win_height;
		bool left_ctrl = false;
};
