#pragma once
#include "ParticleEmitter.h"

class ConeEmitter : public ParticleEmitter
{
public:
	ConeEmitter();

	virtual void EmitParticle(Particle& particle);
	virtual void DebugRender();
	
	glm::vec3 Apex;
	glm::vec3 Axis;

	float MinDirectrix;
	float MaxDirectrix;

	float MinHeight;
	float MaxHeight;

	float MinSpeed;
	float MaxSpeed;

	float MinLifetime;
	float MaxLifetime;

	double base = 1;
	double height = 1.5;
	int slices = 50;
	int stacks = 50;

private:
	void RenderCone(glm::vec4 color, float fRadius);

};