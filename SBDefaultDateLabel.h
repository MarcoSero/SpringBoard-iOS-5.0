/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UILabel.h"

#import "SBBulletinDateLabel-Protocol.h"

@class NSDate;

@interface SBDefaultDateLabel : UILabel <SBBulletinDateLabel>
{
    NSDate *_timeZoneRelativeStartDate;
    NSDate *_timeZoneRelativeEndDate;
    BOOL _allDay;
    NSDate *_effectiveAllDayStartDate;
    NSDate *_effectiveAllDayLastValidDate;
    NSDate *_effectiveAllDayEndDate;
    BOOL _effectiveAllDay;
}

+ (void)initialize;
- (id)init;
- (void)dealloc;
@property(nonatomic, getter=isAllDay) BOOL allDay; // @synthesize allDay=_allDay;
- (void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2;
- (void)setTimeZoneRelativeEndDate:(id)arg1;
- (void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
- (void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
- (void)_resetEffectiveAllDayState:(BOOL)arg1;
- (void)_updateEffectiveAllDayTimes;
- (id)_localDateForDate:(id)arg1 inTimeZone:(id)arg2;
- (BOOL)isDateWithinEffectiveAllDayRange:(id)arg1;
- (BOOL)isEffectiveAllDay;
- (id)constructLabelString;
- (void)updateTextIfNecessary;
- (void)update;

@end

