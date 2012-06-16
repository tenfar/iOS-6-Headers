/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBToAppWorkspaceTransaction.h"

@interface SBRelaunchAppWorkspaceTransaction : SBToAppWorkspaceTransaction
{
    BOOL _relaunchSuspended;
    BOOL _keepWorkspaceSuspended;
    BOOL _waitForReceiverChange;
    BOOL _workspaceUnsuspended;
    BOOL _appActivated;
}

- (void)_resuspendWorkspaceIfNeeded;
- (void)_handleAppRelaunch:(id)arg1;
- (BOOL)selfWorkspaceDidResume;
- (BOOL)selfWorkspaceDidSuspend;
- (BOOL)selfApplicationExited:(id)arg1;
- (BOOL)selfApplicationActivationDidFail:(id)arg1;
- (BOOL)selfApplicationLaunchDidFail:(id)arg1;
- (BOOL)selfApplicationActivated:(id)arg1;
- (BOOL)selfApplicationDidFinishLaunching:(id)arg1 withInfo:(id)arg2;
- (BOOL)selfApplicationDidStartLaunching:(id)arg1 withInfo:(id)arg2;
- (BOOL)selfApplicationDidBecomeReceiver:(id)arg1 fromApplication:(id)arg2;
- (BOOL)selfApplicationWillBecomeReceiver:(id)arg1 fromApplication:(id)arg2;
- (void)_commit;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 alertManager:(id)arg2 application:(id)arg3;

@end

