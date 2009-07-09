/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIEvent.h>

@class NSMutableSet;

@interface UITouchesEvent : UIEvent {
	GSEventRef _gsEvent;
	NSMutableSet* _touches;
	CFDictionaryRef _keyedTouches;
}
-(int)type;
-(id)_init;
-(id)_initWithEvent:(GSEventRef)event touches:(id)touches;
-(id)_initWithTouches:(id)touches keyedTouches:(CFDictionaryRef)touches2;
-(void)_setGSEvent:(GSEventRef)event;
-(void)dealloc;
-(id)allTouches;
-(id)_allTouches;
-(id)touchesForWindow:(id)window;
-(id)touchesForView:(id)view;
-(id)_touchesForGestureRecognizer:(id)gestureRecognizer;
-(BOOL)_addGestureRecognizersForView:(id)view toTouch:(id)touch;
-(void)_addTouch:(id)touch;
-(void)_clearViewForTouch:(id)touch;
-(void)_removeTouch:(id)touch;
-(void)_removeTouch:(id)touch fromGestureRecognizer:(id)gestureRecognizer;
-(id)_touchesForKey:(id)key;
-(void)_removeTouchesForKey:(id)key;
-(void)_clearTouches;
-(id)_touchesForView:(id)view withPhase:(int)phase;
-(id)_touchesForGesture:(id)gesture withPhase:(int)phase;
-(void)_touchesForGesture:(id)gesture withPhase:(int)phase intoSet:(id)set;
-(id)_windows;
-(id)_gestureRecognizersForWindow:(id)window;
-(id)_sortedGestureRecognizersForWindow:(id)window;
-(id)_viewsForWindow:(id)window;
-(id)_firstTouchForView:(id)view;
-(void)_moveTouchesFromView:(id)view toView:(id)view2;
-(id)_cloneEvent;
-(GSEventRef)_gsEvent;
-(id)description;
@end

