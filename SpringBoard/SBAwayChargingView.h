/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

@class SBBatteryChargingView, UIImageView;

@interface SBAwayChargingView : UIView
{
    SBBatteryChargingView *_chargingView;
    SBBatteryChargingView *_headsetChargingView;
    UIImageView *_backgroundView;
    unsigned int _animatingBatteries:1;
    unsigned int _updateAfterAnimation:1;
    unsigned int _showingDeviceBattery:1;
    unsigned int _showingHeadsetBattery:1;
}

+ (BOOL)shouldShowHeadsetBattery;
+ (BOOL)shouldShowDeviceBattery;
+ (struct CGSize)defaultSize;
+ (id)backgroundImage;
- (void)_test:(id)arg1;
- (void)_batteryAnimationFinished:(id)arg1;
- (void)_finishedHideForHideToSlide:(id)arg1 finished:(BOOL)arg2 context:(id)arg3;
- (void)_finishedSlideForSlideToReveal:(id)arg1 finished:(BOOL)arg2 context:(id)arg3;
- (void)_finishedFadeForSwitch:(id)arg1 finished:(BOOL)arg2 context:(id)arg3;
- (void)_slideBattery:(id)arg1 toHideBattery:(id)arg2 animate:(BOOL)arg3;
- (void)_slideBattery:(id)arg1 toShowBattery:(id)arg2 animate:(BOOL)arg3;
- (void)_switchFromBattery:(id)arg1 toView:(id)arg2 animate:(BOOL)arg3;
- (struct CGPoint)_singleBatteryPositionForBattery:(id)arg1;
- (struct CGPoint)_dualBatteryPositionForBattery:(id)arg1;
- (void)hideHeadsetChargingView;
- (void)addHeadsetChargingView;
- (id)headsetChargingView;
- (void)hideChargingView;
- (void)addChargingView;
- (id)chargingView;
- (void)updateInterface:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 awayView:(id)arg2;

@end

