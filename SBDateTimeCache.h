/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBDateTimeCache : NSObject
{
    double _yesterday;
    double _today;
    double _tomorrow;
    double _2daysFromNow;
    double _6daysAgo;
    double _prevWeek;
    double _nextWeek;
    double _lastAttemptedResetTime;
    double _lastSuccessfulResetTime;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (double)today;
- (double)tomorrow;
- (double)yesterday;
- (double)prevWeek;
- (double)nextWeek;
- (BOOL)isToday:(double)arg1;
- (BOOL)_isToday:(double)arg1;
- (BOOL)isTomorrow:(double)arg1;
- (BOOL)isYesterday:(double)arg1;
- (BOOL)isWithinPrevWeek:(double)arg1;
- (BOOL)isWithinPrevWeek:(double)arg1 includeToday:(BOOL)arg2;
- (BOOL)isWithinNextWeek:(double)arg1;
- (void)_resetAndConfigureIfNecessary;
- (void)_resetAndConfigure;
- (id)description;

@end
