/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBDataPlanAccountAlertItem.h"

@class NSNumber;

@interface SBDataPlanUsageAlertItem : SBDataPlanAccountAlertItem
{
    NSNumber *_remainingPortion;
}

- (id)initWithAccountURL:(id)arg1 usage:(id)arg2;
- (void)dealloc;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
@property(retain, nonatomic) NSNumber *remainingPortion; // @synthesize remainingPortion=_remainingPortion;

@end

