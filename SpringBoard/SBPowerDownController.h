/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBAlert.h"

@class SBPowerDownView;

@interface SBPowerDownController : SBAlert
{
    int _count;
    id _delegate;
    SBPowerDownView *_powerDownView;
    BOOL _isFront;
}

+ (id)sharedInstance;
- (void)cancel;
- (void)powerDown;
- (void)setDelegate:(id)arg1;
- (void)alertDisplayWillBecomeVisible;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)deactivate;
- (void)_restoreIconListIfNecessary;
- (void)activate;
- (id)powerDownViewWithSize:(struct CGSize)arg1;
- (void)orderOut;
- (void)orderFront;
- (BOOL)isOrderedFront;
- (double)autoLockTime;
- (void)dealloc;

@end

