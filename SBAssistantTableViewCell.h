/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class AFUISnippetController, NSString;

@interface SBAssistantTableViewCell : UITableViewCell
{
    id <SBAssistantTableViewCellDelegate> _delegate;
    AFUISnippetController *_controller;
    NSString *_animationName;
}

+ (float)defaultSnippetViewInset;
- (void)dealloc;
@property(retain, nonatomic) AFUISnippetController *controller; // @synthesize controller=_controller;
- (void)setController:(id)arg1 parentingViewInCell:(BOOL)arg2;
- (void)parentViewInCell;
- (BOOL)isViewInCell;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (id)description;
- (void)addSnippetAnimation:(id)arg1 named:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
@property(readonly, nonatomic) NSString *animationName; // @synthesize animationName=_animationName;
@property(nonatomic) id <SBAssistantTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;

@end
