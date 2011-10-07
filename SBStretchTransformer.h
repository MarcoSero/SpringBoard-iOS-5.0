/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class CAMutableMeshTransform, UIView;

@interface SBStretchTransformer : NSObject
{
    UIView *m_view;
    int m_anchorEdge;
    int m_orientation;
    CAMutableMeshTransform *m_mesh;
    float m_stretchFactor;
    id m_animationCompletionHandler;
}

- (id)initWithView:(id)arg1 anchorEdge:(int)arg2 orientation:(int)arg3;
- (void)dealloc;
- (id)meshTransform;
@property(nonatomic) float stretchFactor; // @synthesize stretchFactor=m_stretchFactor;
- (void)updateMeshTransform:(id)arg1 stretchFactor:(float)arg2;
- (void)animateToZeroStretchFactor;
- (void)animateToZeroStretchFactorWithCompletionHandler:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
@property(nonatomic) int orientation; // @synthesize orientation=m_orientation;
@property(nonatomic) int anchorEdge; // @synthesize anchorEdge=m_anchorEdge;
@property(retain, nonatomic) UIView *view; // @synthesize view=m_view;

@end
