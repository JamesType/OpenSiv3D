﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2021 Ryo Suzuki
//	Copyright (c) 2016-2021 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# include <Siv3D/IPv4Address.hpp>

namespace s3d
{
	IPv4Address::IPv4Address(const StringView ipv4)
	{
		const std::string s = Unicode::NarrowAscii(ipv4);

		std::istringstream is{ s };

		char unused;
		uint32 b1 = 0, b2 = 0, b3 = 0, b4 = 0;
		is >> b1 >> unused >> b2 >> unused >> b3 >> unused >> b4;
		m_data[0] = static_cast<uint8>(b1);
		m_data[1] = static_cast<uint8>(b2);
		m_data[2] = static_cast<uint8>(b3);
		m_data[3] = static_cast<uint8>(b4);
	}

	String IPv4Address::str() const
	{
		return Format(m_data[0], U'.', m_data[1], U'.', m_data[2], U'.', m_data[3]);
	}
}
