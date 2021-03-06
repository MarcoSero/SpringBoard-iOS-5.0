/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBDeviceLockKeypad.h"

@class UIButton, UIImage;

@interface SBDeviceLockKeypadPhone : SBDeviceLockKeypad
{
    UIButton *_emergencyCallButton;
    UIButton *_poundButton;
    UIImage *_deleteIcon;
}

+ (id)keypadImage;
+ (id)pressedImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (float)_yFudge;
- (BOOL)showsEmergencyCallButton;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (void)setDeleteEnabled:(BOOL)arg1;
- (BOOL)deleteKeyChar;
- (BOOL)cancelKeyChar;
- (BOOL)emergencyKeyChar;
- (void)_updateCancelAndDeleteButtons;

@end

