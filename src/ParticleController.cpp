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
		float x = 4.0f *i ;
		float y = -4.0f *i ;
        float z = 4.0f *i ;
        float r = 4.0f;
        gl::color( Color8u(25+2*i, 25+10*i, 25+10*i));
		mParticles.push_back( Particle( Vec3f( x,y,z ) ,r, 1 ) );
	}
}

