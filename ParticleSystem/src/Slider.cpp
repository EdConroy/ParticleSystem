/*

#include "Slider.h"
#include "ParticleSystemPCH.h"

Slider::Slider()
	:s_mTextureID(0)
	,position(glm::vec2(0))
{}

Slider::~Slider()
{
	if (s_mTextureID != 0)
	{
		glDeleteTextures(1, &s_mTextureID);
		s_mTextureID = 0;
	}
	position = glm::vec2(0);
}

void Slider::MoveSlider(float move_x)
{
	if (move_x > 400)
		move_x = 400;
	else if (move_x < 0)
		move_x = 0;

	if (position[0] != move_x)
		position[0] = move_x;
}

void Slider::ResetSlider()
{
	position = glm::vec2(0);
}

bool Slider::LoadSlider(const std::string& fileName)
{
	if (s_mTextureID != 0)
	{
		glDeleteTextures(1, &s_mTextureID);
	}
	s_mTextureID = SOIL_load_OGL_single_cubemap(fileName.c_str(), "North", 3, 1, NULL);

	return (s_mTextureID != 0);
}

*/