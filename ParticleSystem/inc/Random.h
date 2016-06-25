#pragma once;

// Generate a random number between [0..1)
inline float Random()
{
    return rand() / (float)RAND_MAX;
}

inline float RandRange( float fMin, float fMax )
{
    if ( fMin > fMax ) std::swap( fMin, fMax );
    return ( Random() * ( fMax - fMin ) ) + fMin;
}

inline glm::vec3 RandUnitVec()
{
    float x = ( Random() * 2.0f ) - 1.0f;
    float y = ( Random() * 2.0f ) - 1.0f;
    float z = ( Random() * 2.0f ) - 1.0f;

    return glm::normalize( glm::vec3(x,y,z) );
}

inline float fibonacci(float n)
{
	if (n <= 0) return 0.0f;
	else if (n == 1.0f) return 1.0f;
	return fibonacci (n - 1.0f) + fibonacci(n - 2.0f);
}