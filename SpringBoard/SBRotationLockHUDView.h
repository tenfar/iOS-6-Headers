/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBHUDView.h"

@interface SBRotationLockHUDView : SBHUDView
{
    BOOL _locked;
    BOOL locked;
}

@property(nonatomic, getter=isLocked) BOOL locked; // @synthesize locked;
- (id)init;
- (void)_updateLockedImage;

@end

