/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, SBDismissOnlyAlertItem;

@interface SBLockdownManager : NSObject
{
    int _state;
    BOOL _settingUpActivationState;
    BOOL _isBricked;
    BOOL _isDeveloperDevice;
    BOOL _hasShownMismatchedSIM;
    SBDismissOnlyAlertItem *_activatingAlertItem;
    NSString *_unqiueDeviceIdentifier;
}

+ (id)sharedInstance;
- (id)valueForDomain:(id)arg1 key:(id)arg2;
- (void)dealloc;
- (id)uniqueDeviceIdentifier;
- (int)lockdownState;
- (BOOL)isDeveloperDevice;
- (BOOL)brickedDevice;
- (void)_setupActivationState;
- (void)_serviceAvailabilityChanged:(id)arg1;
- (void)_developerDeviceStateChanged;
- (void)_activationFailed;
- (void)_resetActivationState;
- (void)_postAlertsIfNeeded;
- (BOOL)_shouldShowTelephonyAlerts;
- (void)_setCurrentAlertItem:(id)arg1;
- (BOOL)_isRegisteredToNetwork;
- (void)_setHasEverRegistered:(BOOL)arg1;
- (BOOL)_hasEverRegistered;
- (id)init;

@end

