/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface SBHUDView : UIView
{
    int _level;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    BOOL _showsProgress;
    float _progress;
}

+ (int)numberOfProgressIndicatorSteps;
+ (float)progressIndicatorStep;
- (id)initWithHUDViewLevel:(int)arg1;
- (void)dealloc;
- (BOOL)displaysLabel;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) UIImage *image;
@property(nonatomic) BOOL showsProgress; // @synthesize showsProgress=_showsProgress;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) int level; // @synthesize level=_level;

@end
