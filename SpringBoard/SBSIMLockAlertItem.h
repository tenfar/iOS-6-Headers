/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBAlertItem.h"

@interface SBSIMLockAlertItem : SBAlertItem
{
    int _status;
    int _okButtonIndex;
    int _unlockButtonIndex;
}

+ (id)alertTitleForStatus:(int)arg1;
+ (id)alertTitleForStatus:(int)arg1 languageCode:(id)arg2;
- (BOOL)reappearsAfterLock;
- (BOOL)reappearsAfterUnlock;
- (BOOL)pendInSetupIfNotAllowed;
- (BOOL)allowInSetup;
- (BOOL)forcesModalAlertAppearance;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)performUnlockAction;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)unlock;
- (void)didDeactivateForReason:(int)arg1;
- (int)status;
- (id)alertTextForLanguageCode:(id)arg1;
- (id)alertTitleForLanguageCode:(id)arg1;
- (BOOL)canUnlock;
- (void)dealloc;
- (void)_resetButtonIndexes;
- (id)initWithStatus:(int)arg1;

@end

