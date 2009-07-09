/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <Foundation/NSObject.h>

@class UIKBGeometry;

@interface UIKBShape : NSObject <NSCoding> {
	UIKBGeometry* m_geometry;
	CGRect m_originalFrame;
	CGRect m_frame;
	CGRect m_paddedFrame;
	unsigned m_uid;
}
@property(retain, nonatomic) UIKBGeometry* geometry;
@property(assign, nonatomic) CGRect frame;
@property(readonly, assign, nonatomic) CGRect originalFrame;
@property(assign, nonatomic) CGRect paddedFrame;
@property(readonly, assign, nonatomic) unsigned uid;
+(id)shape;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)setFrameOnly:(CGRect)only;
@end

