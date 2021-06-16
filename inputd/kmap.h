static const uint8_t el_phys_map[256] = {
	0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
	0x19, 0x1a, 0x1b, 0x1c, 0xff, 0xff, 0xff, 0xff, 
	0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 
	0x29, 0x2a, 0x2b, 0x2c, 0xff, 0xff, 0xff, 0xff, 
	0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 
	0x39, 0x3a, 0x3b, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 
	0x49, 0x4a, 0x4b, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0x51, 0xff, 0xff, 0x54, 0xff, 0x56, 0xff, 
	0x58, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0x52, 0x53, 0xff, 0x55, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};

static const int used_keys[] = {
	KEY_ESC,
	KEY_1,
	KEY_LEFTSHIFT,
	KEY_BACKSLASH,
	KEY_F1,
	KEY_2,
	KEY_F2,
	KEY_3,
	KEY_DOLLAR,
	KEY_F3,
	KEY_4,
	KEY_EURO,
	KEY_F4,
	KEY_5,
	KEY_GRAVE,
	KEY_F5,
	KEY_6,
	KEY_F6,
	KEY_7,
	KEY_MINUS,
	KEY_F7,
	KEY_8,
	KEY_EQUAL,
	KEY_F8,
	KEY_9,
	KEY_F9,
	KEY_BACKSPACE,
	KEY_DELETE,
	KEY_TAB,
	KEY_Q,
	KEY_W,
	KEY_E,
	KEY_R,
	KEY_T,
	KEY_Y,
	KEY_U,
	KEY_I,
	KEY_O,
	KEY_P,
	KEY_ENTER,
	KEY_LEFTMETA,
	KEY_SYSRQ,
	KEY_A,
	KEY_S,
	KEY_D,
	KEY_F,
	KEY_G,
	KEY_H,
	KEY_J,
	KEY_K,
	KEY_L,
	KEY_SEMICOLON,
	KEY_INSERT,
	KEY_Z,
	KEY_X,
	KEY_C,
	KEY_V,
	KEY_B,
	KEY_N,
	KEY_M,
	KEY_COMMA,
	KEY_HOME,
	KEY_DOT,
	KEY_UP,
	KEY_SLASH,
	KEY_END,
	KEY_LEFTCTRL,
	KEY_FN,
	KEY_LEFTALT,
	KEY_SPACE,
	KEY_RIGHTALT,
	KEY_APOSTROPHE,
	KEY_LEFT,
	KEY_LEFTBRACE,
	KEY_DOWN,
	KEY_RIGHTBRACE,
	KEY_RIGHT,
};

static const char* key_names[] = {
	[KEY_ESC] = "ESC",
	[KEY_1] = "1",
	[KEY_LEFTSHIFT] = "LEFTSHIFT",
	[KEY_BACKSLASH] = "BACKSLASH",
	[KEY_F1] = "F1",
	[KEY_2] = "2",
	[KEY_F2] = "F2",
	[KEY_3] = "3",
	[KEY_DOLLAR] = "DOLLAR",
	[KEY_F3] = "F3",
	[KEY_4] = "4",
	[KEY_EURO] = "EURO",
	[KEY_F4] = "F4",
	[KEY_5] = "5",
	[KEY_GRAVE] = "GRAVE",
	[KEY_F5] = "F5",
	[KEY_6] = "6",
	[KEY_F6] = "F6",
	[KEY_7] = "7",
	[KEY_MINUS] = "MINUS",
	[KEY_F7] = "F7",
	[KEY_8] = "8",
	[KEY_EQUAL] = "EQUAL",
	[KEY_F8] = "F8",
	[KEY_9] = "9",
	[KEY_F9] = "F9",
	[KEY_BACKSPACE] = "BACKSPACE",
	[KEY_DELETE] = "DELETE",
	[KEY_TAB] = "TAB",
	[KEY_Q] = "Q",
	[KEY_W] = "W",
	[KEY_E] = "E",
	[KEY_R] = "R",
	[KEY_T] = "T",
	[KEY_Y] = "Y",
	[KEY_U] = "U",
	[KEY_I] = "I",
	[KEY_O] = "O",
	[KEY_P] = "P",
	[KEY_ENTER] = "ENTER",
	[KEY_LEFTMETA] = "LEFTMETA",
	[KEY_SYSRQ] = "SYSRQ",
	[KEY_A] = "A",
	[KEY_S] = "S",
	[KEY_D] = "D",
	[KEY_F] = "F",
	[KEY_G] = "G",
	[KEY_H] = "H",
	[KEY_J] = "J",
	[KEY_K] = "K",
	[KEY_L] = "L",
	[KEY_SEMICOLON] = "SEMICOLON",
	[KEY_INSERT] = "INSERT",
	[KEY_Z] = "Z",
	[KEY_X] = "X",
	[KEY_C] = "C",
	[KEY_V] = "V",
	[KEY_B] = "B",
	[KEY_N] = "N",
	[KEY_M] = "M",
	[KEY_COMMA] = "COMMA",
	[KEY_HOME] = "HOME",
	[KEY_DOT] = "DOT",
	[KEY_UP] = "UP",
	[KEY_SLASH] = "SLASH",
	[KEY_END] = "END",
	[KEY_LEFTCTRL] = "LEFTCTRL",
	[KEY_FN] = "FN",
	[KEY_LEFTALT] = "LEFTALT",
	[KEY_SPACE] = "SPACE",
	[KEY_RIGHTALT] = "RIGHTALT",
	[KEY_APOSTROPHE] = "APOSTROPHE",
	[KEY_LEFT] = "LEFT",
	[KEY_LEFTBRACE] = "LEFTBRACE",
	[KEY_DOWN] = "DOWN",
	[KEY_RIGHTBRACE] = "RIGHTBRACE",
	[KEY_RIGHT] = "RIGHT",
};

static const int keymap_base[256][2] = {
	[0x11] = { KEY_ESC },
	[0x12] = { KEY_1 },
	[0x13] = { KEY_2 },
	[0x14] = { KEY_3 },
	[0x15] = { KEY_4 },
	[0x16] = { KEY_5 },
	[0x17] = { KEY_6 },
	[0x18] = { KEY_7 },
	[0x19] = { KEY_8 },
	[0x1a] = { KEY_9 },
	[0x1c] = { KEY_BACKSPACE },
	[0x21] = { KEY_TAB },
	[0x22] = { KEY_Q },
	[0x23] = { KEY_W },
	[0x24] = { KEY_E },
	[0x25] = { KEY_R },
	[0x26] = { KEY_T },
	[0x27] = { KEY_Y },
	[0x28] = { KEY_U },
	[0x29] = { KEY_I },
	[0x2a] = { KEY_O },
	[0x2b] = { KEY_P },
	[0x2c] = { KEY_ENTER },
	[0x31] = { KEY_LEFTMETA },
	[0x32] = { KEY_A },
	[0x33] = { KEY_S },
	[0x34] = { KEY_D },
	[0x35] = { KEY_F },
	[0x36] = { KEY_G },
	[0x37] = { KEY_H },
	[0x38] = { KEY_J },
	[0x39] = { KEY_K },
	[0x3a] = { KEY_L },
	[0x3b] = { KEY_SEMICOLON },
	[0x41] = { KEY_LEFTSHIFT },
	[0x42] = { KEY_Z },
	[0x43] = { KEY_X },
	[0x44] = { KEY_C },
	[0x45] = { KEY_V },
	[0x46] = { KEY_B },
	[0x47] = { KEY_N },
	[0x48] = { KEY_M },
	[0x49] = { KEY_COMMA },
	[0x4a] = { KEY_DOT },
	[0x4b] = { KEY_SLASH },
	[0x51] = { KEY_LEFTCTRL },
	[0x52] = { KEY_FN },
	[0x53] = { KEY_LEFTALT },
	[0x54] = { KEY_SPACE },
	[0x55] = { KEY_RIGHTALT },
	[0x56] = { KEY_APOSTROPHE },
	[0x57] = { KEY_LEFTBRACE },
	[0x58] = { KEY_RIGHTBRACE },
};

static const int keymap_fn[256][2] = {
	[0x12] = { KEY_LEFTSHIFT, KEY_BACKSLASH },
	[0x13] = { KEY_BACKSLASH },
	[0x14] = { KEY_DOLLAR },
	[0x15] = { KEY_EURO },
	[0x16] = { KEY_LEFTSHIFT, KEY_GRAVE },
	[0x17] = { KEY_GRAVE },
	[0x18] = { KEY_MINUS },
	[0x19] = { KEY_EQUAL },
	[0x1a] = { KEY_LEFTSHIFT, KEY_MINUS },
	[0x1c] = { KEY_DELETE },
	[0x31] = { KEY_LEFTSHIFT, KEY_SYSRQ },
	[0x3b] = { KEY_INSERT },
	[0x49] = { KEY_HOME },
	[0x4a] = { KEY_UP },
	[0x4b] = { KEY_END },
	[0x56] = { KEY_LEFT },
	[0x57] = { KEY_DOWN },
	[0x58] = { KEY_RIGHT },
};

static const int keymap_pine[256][2] = {
	[0x12] = { KEY_F1 },
	[0x13] = { KEY_F2 },
	[0x14] = { KEY_F3 },
	[0x15] = { KEY_F4 },
	[0x16] = { KEY_F5 },
	[0x17] = { KEY_F6 },
	[0x18] = { KEY_F7 },
	[0x19] = { KEY_F8 },
	[0x1a] = { KEY_F9 },
};

