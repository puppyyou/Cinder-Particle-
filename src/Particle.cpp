#include "Particle.h"
#include "cinder/Rand.h"
#include "cinder/gl/gl.h"
#include "cinder/app/AppBasic.h"

using namespace ci;

Particle::Particle()
{
}

Particle::Particle( Vec3f location ,float r, int typeofshape, ci::Vec3i mcolor01)
{
	mDir	= Vec3f(1,1,1);   //Rand::randVec3f();
	mVel	= float( 5.0f );  //Rand::randFloat( 5.0f );
	mRadius	= r;
    mtypeofshape= typeofshape;
    mLoc   = location;
    mcolor = mcolor01;
}

void Particle::update()
{
	mLoc= mDir * mVel;
}

void Particle::draw()
{
    glColor3b(mcolor.x, mcolor.y, mcolor.z);
	gl::drawSphere(mLoc, mRadius, 36);
    
}
