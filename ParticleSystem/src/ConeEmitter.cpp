#include "ParticleSystemPCH.h"
#include "Random.h"
#include "ConeEmitter.h"

ConeEmitter::ConeEmitter()
	: Apex(glm::vec3(0,0,0))
	, Axis(glm::normalize(Apex))
	, MinDirectrix(0)
	, MaxDirectrix(1)
	, MinHeight(-1)
	, MaxHeight(1)
	, MinSpeed(10)
	, MaxSpeed(20)
	, MinLifetime(3)
	, MaxLifetime(5)
{}

void ConeEmitter::EmitParticle(Particle& particle)
{
	float directrix = glm::radians(RandRange(MinDirectrix, MaxDirectrix));
	float height = glm::radians(RandRange(MinHeight, MaxHeight));

	float speed = RandRange(MinSpeed, MaxSpeed);
	float lifetime = RandRange(MinLifetime, MaxLifetime);

	/*
	float X = 0;
	float Y = 0;
	float Z = 0;

	glm::vec3 vector(X, Y, Z);

	*/
	
	particle.m_Position = (Axis * directrix) + Apex;
	particle.m_Velocity = Axis * speed;

	particle.m_fLifeTime = lifetime;
	particle.m_fAge = 0;
}

void ConeEmitter::RenderCone(glm::vec4 color, float fRadius)
{
	
	glEnd();
}

void ConeEmitter::DebugRender()
{

}
