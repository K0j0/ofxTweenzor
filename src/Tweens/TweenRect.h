//
//  TweenRect.h
//  TweenzorSimpleExample
//
//  Created by Kojo Kumah on 1/2/15.
//
//

#ifndef __TweenzorSimpleExample__TweenRect__
#define __TweenzorSimpleExample__TweenRect__

#include "Tween.h"

class TweenRect : public Tween {
public:
    
    TweenRect(ofRectangle * a_property, ofRectangle a_begin, ofRectangle a_end, int a_duration, int a_delay, int a_easeType, float a_p=0, float a_a=0);
    TweenRect(ofRectangle * a_property, int a_millis, ofRectangle a_begin, ofRectangle a_end, float a_duration, float a_delay, int a_easeType, float a_p=0, float a_a=0);
    
    void updateComplete(bool bTweenIsComplete, int a_millis);
    
    ofRectangle * getProperty();
    ofRectangle getPropertyValue();
    // TODO, optimize by storing which properties have the greatest range in setup() then just compare those
    float getPropertyPct();
    void updateProperty();
    
    
protected:
    void _setup(ofRectangle * a_property, ofRectangle a_begin, ofRectangle a_end, float a_duration, float a_delay, int a_easeType, float a_p, float a_a);
    
    // For now use Vector4 under the hood since you can't do math on ofRectangles
    ofVec4f _change, _begin, _end;
    ofVec4f _initBegin, _initEnd; // store these, since during a ping pong, we need to switch them
    ofRectangle _beginRect, _endRect;
    
    ofRectangle *_propAdd;
};



#endif /* defined(__TweenzorSimpleExample__TweenRect__) */
