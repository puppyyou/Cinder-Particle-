#include "Particle.h"
#include "cinder/Rand.h"
#include "cinder/gl/gl.h"
#include "cinder/app/AppBasic.h"

using namespace ci;

Particle::Particle()
{
}

Particle::Particle( Vec3f ,float r, int typeofshape)
{
	mDir	= Vec3f(1,1,1);//Rand::randVec3f();
	mVel	= float( 5.0f );//Rand::randFloat( 5.0f );
	mRadius	= r;
    mtypeofshape= typeofshape;
    //mLoc   = Vec3f(1,1,1);
}

void Particle::update()
{
	mLoc= mDir * mVel;
}

void Particle::draw()
{
	gl::drawSphere(mLoc, mRadius, 36);
}
