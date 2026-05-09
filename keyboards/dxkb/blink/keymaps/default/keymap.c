#include QMK_KEYBOARD_H

enum dxkb_layers {
  _BASE,
  _RIGHT,
  _LEFT,
  _QMK
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_split_4x6_3(
	MT(KC_NO,KC_GRV),	MT(KC_NO,KC_1),		MT(KC_NO,KC_2),		MT(KC_NO,KC_3),		MT(KC_NO,KC_4),		MT(KC_NO,KC_5),				MT(KC_NO,KC_6),		MT(KC_NO,KC_7),		MT(KC_NO,KC_8),		MT(KC_NO,KC_9),		MT(KC_NO,KC_0),		MT(KC_NO,KC_MINS),
	KC_TAB,				MT(KC_NO,KC_Q),		MT(KC_NO,KC_W),		MT(KC_NO,KC_E),		MT(KC_NO,KC_R),		MT(KC_NO,KC_T),				MT(KC_NO,KC_Y),		MT(KC_NO,KC_U),		MT(KC_NO,KC_I),		MT(KC_NO,KC_O),		MT(KC_NO,KC_P),		MT(KC_NO,KC_LBRC),
	KC_LSFT,			MT(KC_NO,KC_A),		MT(KC_NO,KC_S),		LT(_RIGHT,KC_D),	MT(KC_NO,KC_F),		MT(KC_NO,KC_G),				MT(KC_NO,KC_H),		MT(KC_NO,KC_J),		LT(_LEFT,KC_K),		LT(_QMK,KC_L),		MT(KC_NO,KC_SCLN),	MT(KC_NO,KC_QUOT),
	KC_LCTL,			MT(KC_NO,KC_Z),		MT(KC_NO,KC_X),		MT(KC_NO,KC_C),		MT(KC_NO,KC_V),		MT(KC_NO,KC_B),				MT(KC_NO,KC_N),		MT(KC_NO,KC_M),		MT(KC_NO,KC_COMM),	MT(KC_NO,KC_DOT),	MT(KC_NO,KC_SLSH),	MT(KC_NO,KC_EQL),
																KC_LEFT_ALT,		KC_LEFT_GUI,		KC_SPACE,					KC_ENTER,			KC_BACKSPACE,		KC_RIGHT_ALT
  ),
  [_RIGHT] = LAYOUT_split_4x6_3(
	_______,			_______,			_______,			_______,			_______,			_______,					_______,			_______,			_______,			_______,			_______,			_______,
	_______,			_______,			_______,			_______,			_______,			_______,					KC_HOME,			KC_PAGE_DOWN,		KC_PAGE_UP,			KC_END,				_______,			KC_RBRC,
	_______,			_______,			_______,			_______,			_______,			_______,					KC_LEFT,			KC_DOWN,			KC_UP,				KC_RIGHT,			_______,			_______,
	_______,			_______,			_______,			_______,			_______,			_______,					_______,			_______,			_______,			_______,			KC_BSLS,			_______,
																_______,			_______,			_______,					KC_PRINT_SCREEN,	KC_DEL,				_______
  ),
  [_LEFT] = LAYOUT_split_4x6_3(
	KC_ESC, 			_______,			_______,			_______,			_______,			_______,					_______,			_______,			_______,			_______,			_______,			_______,
	_______,			KC_F9,				KC_F10,				KC_F11,				KC_F12,				_______,					_______,			_______,			_______,			_______,			_______,			_______,
	_______,			KC_F5,				KC_F6,				KC_F7,				KC_F8,				_______,					_______,			_______,			_______,			_______,			_______,			_______,
	_______,			KC_F1,				KC_F2,				KC_F3,				KC_F4,				_______,					_______,			_______,			_______,			_______,			_______,			_______,
																_______,			_______,			_______,					_______,			_______,			_______
  ),
  [_QMK] = LAYOUT_split_4x6_3(
	_______,			_______,			_______,			_______,			_______,			_______,					_______,			_______,			_______,			_______,			_______,			_______,
	_______,			_______,			_______,			_______,			_______,			_______,					_______,			_______,			_______,			_______,			_______,			_______,
	_______,			_______,			QK_REBOOT,			_______,			_______,			_______,					_______,			_______,			_______,			_______,			_______,			_______,
	_______,			_______,			_______,			_______,			_______,			QK_BOOTLOADER,				_______,			_______,			_______,			_______,			_______,			_______,
																_______,			_______,			_______,					_______,			_______,			_______
  ),
};

