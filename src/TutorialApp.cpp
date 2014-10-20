#include "cinder/app/AppBasic.h"
#include "cinder/ImageIO.h"
#include "cinder/gl/Texture.h"
#include "cinder/Camera.h"
#include "ParticleController.h"

using namespace ci;
using namespace ci::app;

class TutorialApp : public AppBasic {
 public:
	void prepareSettings( Settings *settings );
	void setup();
	void update();
	void draw();
    
    CameraPersp mCam;
	
	ParticleController mParticleController;
};

void TutorialApp::prepareSettings( Settings *settings )
{
	settings->setWindowSize( 800, 600 );
	settings->setFrameRate( 60.0f );
}

void TutorialApp::setup()
{
	mCam.setPerspective( 60, getWindowAspectRatio(), 1, 1000 );
    mParticleController.addParticles(5);
}

void TutorialApp::update()
{
	mParticleController.update();
}

void TutorialApp::draw()
{
    mCam.lookAt( Vec3f( cos( getElapsedSeconds() ), 0.0, sin( getElapsedSeconds() ) ) *50, Vec3f::zero() );
	
	// Set matrix from camera:
	gl::setMatrices( mCam );
	gl::clear( Color( 0, 0, 0 ), true );

	glDisable( GL_TEXTURE_2D );
	//glColor3f( 0, 1, 1 );
	mParticleController.draw();
}


CINDER_APP_BASIC( TutorialApp, RendererGl )
