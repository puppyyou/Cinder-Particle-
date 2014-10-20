#include "cinder/app/AppBasic.h"
#include "cinder/Rand.h"
#include "cinder/Vector.h"
#include "ParticleController.h"

using namespace ci;
using std::list;

ParticleController::ParticleController()
{
}

void ParticleController::update()
{
//	for( list<Particle>::iterator p = mParticles.begin(); p != mParticles.end(); ++p ){
//		p->update();
//	}
}

void ParticleController::draw()
{
    
	for( list<Particle>::iterator p = mParticles.begin(); p != mParticles.end(); ++p ){
		p->draw();
	}
}

void ParticleController::addParticles( int amt )
{
	for( int i=0; i<amt; i++ )
	{
		float x = 4.0f + 20.0f*i ;
		float y = 0;//4.0f *i ;
        float z = 0;//4.0f *i ;
        float r = 4.0f;
        Vec3i c =  Vec3i(102+2*i, 25+30*i, 25+10*i);
        mParticles.push_back( Particle( Vec3f( x,y,z ) ,r, 1 ,c) );
	}
}

