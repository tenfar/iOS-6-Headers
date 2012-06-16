/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCalendar, NSDate, NSTimer;

@interface SBRelativeDateTimer : NSObject
{
    NSCalendar *_gregorian;
    NSTimer *_timer;
    NSDate *_date;
    id <SBRelativeDateTimerDelegate> _delegate;
    int _currResolution;
    int _currValue;
}

+ (void)invalidateTimer:(id)arg1;
+ (void)addTimerToMainRunLoop:(id)arg1;
+ (void)initialize;
- (double)_nextFireInterval:(id)arg1 resolution:(int)arg2 comparedToNow:(int)arg3;
- (void)_fireAndUpdateTimerIfNecessary;
- (id)_timeDifferenceFromDate:(id)arg1;
- (void)invalidate;
- (void)fireAndSchedule;
- (double)nextFireInterval;
- (id)date;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)_fireForLocaleEvent:(id)arg1;
- (void)_fireForEvent:(id)arg1;
- (void)dealloc;
- (id)init;

@end

