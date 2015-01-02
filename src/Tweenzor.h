/*
 *  Tweenzor.h
 *  openFrameworks
 *
 *  Created by Nick Hardeman on 10/31/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef _TWEENZOR_
#define _TWEENZOR_

#include "ofColor.h"
#include "ofVec2f.h"
#include "Tween.h"
#include "TweenVec2.h"
#include "TweenVec3.h"
#include "TweenVec4.h"
#include "TweenColor.h"
#include "TweenRect.h"
#include "TweenListener.h"


class Tweenzor {
public:
	static Tweenzor* Instance();
	
	static void init();
	static void update(int a_millis);
    
    // float
	static Tween& framesAdd(float* a_property, float a_begin, float a_end, int a_delay, int a_duration, int a_easeType=EASE_LINEAR, float a_p=0, float a_a=0);
	static Tween& add(float* a_property, float a_begin, float a_end, float a_delay, float a_duration, int a_easeType=EASE_LINEAR, float a_p=0, float a_a=0);

    // ofVec2f
    static TweenVec2& add(ofVec2f* a_vec, const ofVec2f& v_begin, const ofVec2f& v_end, float a_delay, float a_duration, int a_easeType=EASE_LINEAR, float a_p=0, float a_a=0);
    static TweenVec2& framesAdd(ofVec2f* a_vec, const ofVec2f& v_begin, const ofVec2f& v_end, int a_delay, int a_duration, int a_easeType=EASE_LINEAR, float a_p=0, float a_a=0);
    
    // ofVec3f
    static TweenVec3& add(ofVec3f* a_vec, const ofVec3f& v_begin, const ofVec3f& v_end, float a_delay, float a_duration, int a_easeType=EASE_LINEAR, float a_p=0, float a_a=0);
    static TweenVec3& framesAdd(ofVec3f* a_vec, const ofVec3f& v_begin, const ofVec3f& v_end, int a_delay, int a_duration, int a_easeType=EASE_LINEAR, float a_p=0, float a_a=0);
    
    // ofVec4f
    static TweenVec4& add(ofVec4f* a_vec, const ofVec4f& v_begin, const ofVec4f& v_end, float a_delay, float a_duration, int a_easeType=EASE_LINEAR, float a_p=0, float a_a=0);
    static TweenVec4& framesAdd(ofVec4f* a_vec, const ofVec4f& v_begin, const ofVec4f& v_end, int a_delay, int a_duration, int a_easeType=EASE_LINEAR, float a_p=0, float a_a=0);
    
    // ofRectangle
    static TweenRect& add(ofRectangle* a_rect, const ofRectangle& r_begin, const ofRectangle& r_end, float a_delay, float a_duration, int a_easeType=EASE_LINEAR, float a_p=0, float a_a=0);
    static TweenRect& framesAdd(ofRectangle* a_rect, const ofRectangle& r_begin, const ofRectangle& r_end, int a_delay, int a_duration, int a_easeType=EASE_LINEAR, float a_p=0, float a_a=0);
    
    // ofFloatColor
    static TweenColor& add(ofFloatColor* a_color, const ofFloatColor& c_begin, const ofFloatColor& c_end, float a_delay, float a_duration, int a_easeType=EASE_LINEAR, float a_p=0, float a_a=0);
    static TweenColor& framesAdd(ofFloatColor* a_color, const ofFloatColor& c_begin, const ofFloatColor& c_end, int a_delay, int a_duration, int a_easeType=EASE_LINEAR, float a_p=0, float a_a=0);
    
    static void removeTween(Tween * tween);
	static void removeTween(float * a_property);
    static void removeTween(ofVec2f * a_property);
    static void removeTween(ofVec3f * a_property);
    static void removeTween(ofVec4f * a_property);
    static void removeTween(ofFloatColor * a_property);
    static void removeTween(ofRectangle * a_property);
    static void removeAllTweens();
	
	static void destroy();
	
	static void pauseAllTweens();
	static void resumeAllTweens();
	static void resetAllTweens();
	static void toggleAllTweens();
	
	static int getSize();
	
	static Tween* getTween(float * a_property);
    static TweenVec2 * getTween(ofVec2f *vec);
    static TweenVec3 * getTween(ofVec3f *vec);
    static TweenVec4 * getTween(ofVec4f *vec);
    static TweenRect * getTween(ofRectangle *rect);
    static TweenColor * getTween(ofFloatColor *color);

	static Tween* getRecentTween();
    
	
	static void removeCompleteListener( Tween* a_tween );
	static void removeCompleteListener( float* a_property );
    static void removeCompleteListener( ofVec2f * a_property );
    static void removeCompleteListener( ofVec3f * a_property );
    static void removeCompleteListener( ofVec4f * a_property );
	static void removeAllListeners();
	

protected:
	Tweenzor() {};
	
private:
	static Tweenzor* __instance;
	vector <Tween *> _tweens;	
	int _currMillis;
};

#endif






