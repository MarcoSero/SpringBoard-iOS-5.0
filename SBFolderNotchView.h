/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIImageView.h"

@interface SBFolderNotchView : UIImageView
{
    CDStruct_d18cc6b1 _notchInfo;
    int _orientation;
}

+ (id)_keyComponentForNotchInfoRect:(struct CGRect)arg1;
+ (id)_keyForNotchInfo:(CDStruct_d18cc6b1)arg1 orientation:(int)arg2;
+ (id)_squareImageForNotchInfo:(CDStruct_d18cc6b1)arg1 orientation:(int)arg2;
+ (id)_imageForNotchInfo:(CDStruct_d18cc6b1)arg1 orientation:(int)arg2;
+ (id)notchForNotchInfo:(CDStruct_d18cc6b1)arg1 orientation:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 notchInfo:(CDStruct_d18cc6b1)arg2 orientation:(int)arg3;
- (void)setNotchInfo:(CDStruct_d18cc6b1)arg1 orientation:(int)arg2;

@end

