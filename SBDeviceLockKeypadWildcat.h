/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBDeviceLockKeypad.h"

@class UIView;

@interface SBDeviceLockKeypadWildcat : SBDeviceLockKeypad
{
    UIView *_glowView;
}

+ (id)keypadImage;
+ (id)pressedImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setHighlighted:(BOOL)arg1;
- (float)_yFudge;
- (struct CGRect)_rectForKey:(int)arg1;
- (BOOL)deleteKeyChar;
- (BOOL)cancelKeyChar;

@end

