//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2025 Ryo Suzuki
//	Copyright (c) 2016-2025 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# include <Siv3D/EngineOptions.hpp>
# include <Siv3D/Mesh/Null/CMesh_Null.hpp>
# include <Siv3D/Mesh/GL4/CMesh_GL4.hpp>
# include <Siv3D/Mesh/GLES3/CMesh_GLES3.hpp>

namespace s3d
{
	ISiv3DMesh* ISiv3DMesh::Create()
	{
		if (g_engineOptions.renderer == EngineOption::Renderer::Headless)
		{
			return new CMesh_Null;
		}
		else if (g_engineOptions.renderer == EngineOption::Renderer::WebGL2)
		{
			return new CMesh_GLES3;
		}
		else
		{
			return new CMesh_GL4;
		}
	}
}
