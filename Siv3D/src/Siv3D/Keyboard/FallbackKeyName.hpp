﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2025 Ryo Suzuki
//	Copyright (c) 2016-2025 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# pragma once
# include <Siv3D/Common.hpp>
# include <Siv3D/StringView.hpp>
# include <Siv3D/Input/InputState.hpp>

namespace s3d::detail
{
	inline constexpr std::array<StringView, InputState::KeyCount> FallbackKeyNames =
	{ {
		{}, // 0x00
		{}, // 0x01
		{}, // 0x02
		U"Cancel", // 0x03
		{}, // 0x04
		{}, // 0x05
		{}, // 0x06
		{}, // 0x07
		U"Backspace", // 0x08
		U"Tab", // 0x09
		{}, // 0x0A
		{}, // 0x0B
		U"Clear", // 0x0C
		U"Enter", // 0x0D
		{}, // 0x0E
		{}, // 0x0F

		U"Shift", // 0x10
		U"Control", // 0x11
		U"Alt", // 0x12
		U"Pause", // 0x13
		{}, // 0x14
		{}, // 0x15
		{}, // 0x16
		{}, // 0x17
		{}, // 0x18
		{}, // 0x19
		{}, // 0x1A
		U"Escape", // 0x1B
		{}, // 0x1C
		{}, // 0x1D
		{}, // 0x1E
		{}, // 0x1F

		U"Space", // 0x20
		U"PageUp", // 0x21
		U"PageDown", // 0x22
		U"End", // 0x23
		U"Home", // 0x24
		U"Left", // 0x25
		U"Up", // 0x26
		U"Right", // 0x27
		U"Down", // 0x28
		{}, // 0x29
		{}, // 0x2A
		{}, // 0x2B
		U"PrintScreen", // 0x2C
		U"Insert", // 0x2D
		U"Delete", // 0x2E
		{}, // 0x2F

		U"0", // 0x30
		U"1", // 0x31
		U"2", // 0x32
		U"3", // 0x33
		U"4", // 0x34
		U"5", // 0x35
		U"6", // 0x36
		U"7", // 0x37
		U"8", // 0x38
		U"9", // 0x39
		{}, // 0x3A
		{}, // 0x3B
		{}, // 0x3C
		{}, // 0x3D
		{}, // 0x3E
		{}, // 0x3F

		{}, // 0x40
		U"A", // 0x41
		U"B", // 0x42
		U"C", // 0x43
		U"D", // 0x44
		U"E", // 0x45
		U"F", // 0x46
		U"G", // 0x47
		U"H", // 0x48
		U"I", // 0x49
		U"J", // 0x4A
		U"K", // 0x4B
		U"L", // 0x4C
		U"M", // 0x4D
		U"N", // 0x4E
		U"O", // 0x4F

		U"P", // 0x50
		U"Q", // 0x51
		U"R", // 0x52
		U"S", // 0x53
		U"T", // 0x54
		U"U", // 0x55
		U"V", // 0x56
		U"W", // 0x57
		U"X", // 0x58
		U"Y", // 0x59
		U"Z", // 0x5A
		{}, // 0x5B
		{}, // 0x5C
		{}, // 0x5D
		{}, // 0x5E
		{}, // 0x5F

		U"Num 0", // 0x60
		U"Num 1", // 0x61
		U"Num 2", // 0x62
		U"Num 3", // 0x63
		U"Num 4", // 0x64
		U"Num 5", // 0x65
		U"Num 6", // 0x66
		U"Num 7", // 0x67
		U"Num 8", // 0x68
		U"Num 9", // 0x69
		U"Num *", // 0x6A
		U"Num +", // 0x6B
		U"Num Enter", // 0x6C
		U"Num -", // 0x6D
		U"Num .", // 0x6E
		U"Num /", // 0x6F

		U"F1", // 0x70
		U"F2", // 0x71
		U"F3", // 0x72
		U"F4", // 0x73
		U"F5", // 0x74
		U"F6", // 0x75
		U"F7", // 0x76
		U"F8", // 0x77
		U"F9", // 0x78
		U"F10", // 0x79
		U"F11", // 0x7A
		U"F12", // 0x7B
		U"F13", // 0x7C
		U"F14", // 0x7D
		U"F15", // 0x7E
		U"F16", // 0x7F

		U"F17", // 0x80
		U"F18", // 0x81
		U"F19", // 0x82
		U"F20", // 0x83
		U"F21", // 0x84
		U"F22", // 0x85
		U"F23", // 0x86
		U"F24", // 0x87
		{}, // 0x88
		{}, // 0x89
		{}, // 0x8A
		{}, // 0x8B
		{}, // 0x8C
		{}, // 0x8D
		{}, // 0x8E
		{}, // 0x8F

		U"NumLock", // 0x90
		{}, // 0x91
		{}, // 0x92
		{}, // 0x93
		{}, // 0x94
		{}, // 0x95
		{}, // 0x96
		{}, // 0x97
		{}, // 0x98
		{}, // 0x99
		{}, // 0x9A
		{}, // 0x9B
		{}, // 0x9C
		{}, // 0x9D
		{}, // 0x9E
		{}, // 0x9F

		U"Left Shift", // 0xA0
		U"Right Shift", // 0xA1
		U"Left Control", // 0xA2
		U"Right Control", // 0xA3
		U"Left Alt", // 0xA4
		U"Right Alt", // 0xA5
		{}, // 0xA6
		{}, // 0xA7
		{}, // 0xA8
		{}, // 0xA9
		{}, // 0xAA
		{}, // 0xAB
		{}, // 0xAC
		{}, // 0xAD
		{}, // 0xAE
		{}, // 0xAF

		U"NextTrack", // 0xB0
		U"PreviousTrack", // 0xB1
		U"StopMedia", // 0xB2
		U"PlayPauseMedia", // 0xB3
		{}, // 0xB4
		{}, // 0xB5
		{}, // 0xB6
		{}, // 0xB7
		{}, // 0xB8
		{}, // 0xB9
		U";", // 0xBA
		U"=", // 0xBB
		U",", // 0xBC
		U"-", // 0xBD
		U".", // 0xBE
		U"/", // 0xBF

		U"`", // 0xC0
		{}, // 0xC1
		{}, // 0xC2
		{}, // 0xC3
		{}, // 0xC4
		{}, // 0xC5
		{}, // 0xC6
		{}, // 0xC7
		{}, // 0xC8
		{}, // 0xC9
		{}, // 0xCA
		{}, // 0xCB
		{}, // 0xCC
		{}, // 0xCD
		{}, // 0xCE
		{}, // 0xCF

		{}, // 0xD0
		{}, // 0xD1
		{}, // 0xD2
		{}, // 0xD3
		{}, // 0xD4
		{}, // 0xD5
		{}, // 0xD6
		{}, // 0xD7
		U"Command", // 0xD8
		U"Left Command", // 0xD9
		U"Right Command", // 0xDA
		U"[", // 0xDB
		U"\\", // 0xDC
		U"]", // 0xDD
		U"'", // 0xDE
		U"\\", // 0xDF

		{}, // 0xE0
		{}, // 0xE1
		{}, // 0xE2
		{}, // 0xE3
		{}, // 0xE4
		{}, // 0xE5
		{}, // 0xE6
		{}, // 0xE7
		{}, // 0xE8
		{}, // 0xE9
		{}, // 0xEA
		{}, // 0xEB
		{}, // 0xEC
		{}, // 0xED
		{}, // 0xEE
		{}, // 0xEF

		{}, // 0xF0
		{}, // 0xF1
		{}, // 0xF2
		{}, // 0xF3
		{}, // 0xF4
		{}, // 0xF5
		{}, // 0xF6
		{}, // 0xF7
		{}, // 0xF8
		{}, // 0xF9
		{}, // 0xFA
		{}, // 0xFB
		{}, // 0xFC
		{}, // 0xFD
		{}, // 0xFE
		{}, // 0xFF
	} };
}
