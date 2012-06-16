/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SBUIUserAgent <NSObject>
- (BOOL)isSBUILoggingEnabled;
- (id)modalBulletinAlertHandlerRegistry;
- (BOOL)launchDisplayWithURL:(id)arg1 forCall:(BOOL)arg2 sender:(id)arg3;
- (void)setFlipBackAttributeForSEODisplayWithIdentifier:(id)arg1;
- (void)prepareToAnswerCall;
- (void)stopRinging;
- (void)playRingtoneAtPath:(id)arg1 vibrationPattern:(id)arg2;
- (void)playRingtoneAtPath:(id)arg1;
- (void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(id)arg2;
- (void)setIdleText:(id)arg1;
- (BOOL)isIdleTimerDisabledForReason:(id)arg1;
- (void)setIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)dimScreen:(BOOL)arg1;
- (void)updateLockScreenInterfaceIfNecessary;
- (struct CGRect)defaultContentRegionForAwayViewPlugin:(id)arg1 withOrientation:(int)arg2;
- (BOOL)launchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2 allowUnlock:(BOOL)arg3 animate:(BOOL)arg4;
- (BOOL)canLaunchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2;
- (BOOL)launchFromPushOrLocalBulletin:(id)arg1 origin:(int)arg2;
- (BOOL)launchFromBulletinWithURL:(id)arg1 bundleID:(id)arg2 allowUnlock:(BOOL)arg3 animate:(BOOL)arg4 launchOrigin:(int)arg5;
- (BOOL)canLaunchFromBulletinWithURL:(id)arg1 bundleID:(id)arg2;
- (BOOL)launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(BOOL)arg4;
- (BOOL)canLaunchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3;
- (void)openURL:(id)arg1 animateIn:(BOOL)arg2 scale:(float)arg3 start:(double)arg4 duration:(float)arg5 animateOut:(BOOL)arg6;
- (BOOL)openURL:(id)arg1 allowUnlock:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)canUserLaunchIcon;
- (BOOL)springBoardIsActive;
- (id)createWallpaperView:(int)arg1;
- (BOOL)homeScreenIsDisplayingWallpaper;
- (int)networkUsageTypeForAppWithDisplayID:(id)arg1;
- (BOOL)lockScreenIsShowing;
- (BOOL)deviceIsTethered;
- (BOOL)deviceIsBlocked;
- (BOOL)deviceIsPasscodeLockedRemotely;
- (BOOL)deviceIsPasscodeLocked;
- (BOOL)deviceIsLocked;
- (BOOL)applicationInstalledForDisplayID:(id)arg1;
- (id)topSuspendedEventsOnlyDisplayID;
- (id)foregroundDisplayID;
- (id)foregroundApplicationDisplayID;
- (int)activeInterfaceOrientation;
- (void)updateInterfaceOrientationIfNecessary;
@end

