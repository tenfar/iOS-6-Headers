/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class SBApplication;

@interface SBRemoteNotificationPermissionAlert : SBAlertItem
{
    SBApplication *_app;
    unsigned int _types;
}

- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 notificationTypes:(unsigned int)arg2;

@end

