/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock;

@interface SBResetManager : NSObject
{
    BOOL _threadRunning;
    NSLock *_lock;
    int _mode;
    NSLock *_progressLock;
    float _progress;
}

+ (id)sharedInstance;
- (void)_resetFinished;
- (void)_postResetEnded;
- (void)_resetThread;
- (void)_beginReset:(id)arg1;
- (void)beginReset;
- (float)progress;
- (void)setProgress:(float)arg1;
- (void)setMode:(int)arg1;
- (void)dealloc;
- (id)init;

@end

