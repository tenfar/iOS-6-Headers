/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBAlertItem.h"

@interface SBLockScreenAudioRoutesAlertItem : SBAlertItem
{
}

- (void)audioRoutingPicker:(id)arg1 didSelectRouteAtIndex:(int)arg2;
- (void)performUnlockAction;
- (BOOL)allowAutoUnlock;
- (BOOL)togglesMediaControls;
- (BOOL)shouldShowInLockScreen;
- (void)willRelockForButtonPress:(BOOL)arg1;
- (BOOL)allowMenuButtonDismissal;
- (id)alertSheet;
- (Class)alertSheetClass;

@end

