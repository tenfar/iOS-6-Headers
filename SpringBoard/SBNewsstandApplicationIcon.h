/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBUserInstalledApplicationIcon.h"

@class SBNewsstandApplication;

@interface SBNewsstandApplicationIcon : SBUserInstalledApplicationIcon
{
    SBNewsstandApplication *_fakeApp;
}

+ (id)iconOverlayImageForIcon:(id)arg1 inLocation:(int)arg2;
@property(retain, nonatomic) SBNewsstandApplication *fakeApp; // @synthesize fakeApp=_fakeApp;
- (BOOL)_shouldShowSashForNewlyInstalledApp;
- (id)badgeTextForLocation:(int)arg1;
- (id)badgeNumberOrString;
- (int)accessoryTypeForLocation:(int)arg1;
- (id)gridCellImage;
- (BOOL)shouldCacheImageForFormat:(int)arg1;
- (id)iconOverlayImageForLocation:(int)arg1;
- (id)getGenericIconImage:(int)arg1;
- (BOOL)iconAppearsInNewsstand;
- (BOOL)isNewsstandApplicationIcon;
- (int)iconFormatForLocation:(int)arg1;
- (void)launch;
- (BOOL)launchEnabled;
- (id)application;
- (BOOL)shouldWarmUp;
- (void)dealloc;
- (id)initWithApplication:(id)arg1;

@end

