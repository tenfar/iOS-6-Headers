/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

#import "RadiosPreferencesDelegate-Protocol.h"

@class NSString, RadiosPreferences, SBSIMLockAlertItem, SBSIMLockEntryAlert;

@interface SBSIMLockManager : NSObject <RadiosPreferencesDelegate>
{
    BOOL _isInitialUpdate;
    BOOL _isBrickedDevice;
    int _status;
    SBSIMLockAlertItem *_currentAlert;
    SBSIMLockEntryAlert *_lockEntryAlert;
    NSString *_languageCode;
    RadiosPreferences *_radiosPrefs;
    BOOL _hasHadSIMWhileNotBricked;
    BOOL _wasActivated;
    BOOL _neededUIM;
}

+ (id)sharedInstance;
- (id)languageCode;
- (int)status;
- (void)registerForAlerts;
- (void)_postponementDidChange;
- (void)_telephonyDidRestart;
- (void)_activationDidChange;
- (void)_initialUpdate;
- (void)_externalSIMStatusChanged:(id)arg1;
- (int)pukLockAttemptsRemaining;
- (int)pinLockAttemptsRemaining;
- (void)_updateSIMStatus:(struct __CFString *)arg1 withOptions:(struct __CFDictionary *)arg2;
- (void)_tearDownAlertAndUpdateStatus;
- (void)_handlePromptForUnlock;
- (void)airplaneModeChanged;
- (void)_tryToUpdateStatus;
- (void)_updateToStatus:(int)arg1;
- (void)attemptUnlock;
- (void)repopAlert;
- (void)_setupAppActivationStateDidChange:(id)arg1;
- (BOOL)_shouldSuppressAlert;
- (void)alertItemDismissed:(id)arg1;
- (void)lockEntryAlertDismissed:(id)arg1;
- (int)_statusFromCT;
- (int)_CTToSBSIMStatus:(struct __CFString *)arg1;
- (BOOL)_hopelesslyPUKLocked;
- (void)dealloc;
- (id)init;

@end

