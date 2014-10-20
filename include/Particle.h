#pragma once
#include "cinder/Channel.h"
#include "cinder/Vector.h"

#include <vector>

class Particle {
 public:
Particle();
Particle( ci::Vec3f location, float r, int mtypeofshape, ci::Vec3i mcolor );
void update();
void draw();

ci::Vec3f	mLoc;
ci::Vec3f	mDir;
float		mVel;
float		mRadius;
int mtypeofshape;  //0 = sphere 1 = cube
ci::Vec3i mcolor;
 };

