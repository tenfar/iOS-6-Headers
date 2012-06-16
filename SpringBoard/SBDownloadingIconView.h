/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBIconView.h"

#import "SBDownloadingIconObserver-Protocol.h"

@class SBDownloadingIcon, SBDownloadingProgressBar;

@interface SBDownloadingIconView : SBIconView <SBDownloadingIconObserver>
{
    SBDownloadingProgressBar *_progressView;
}

+ (Class)_labelImageParametersClassForIcon:(id)arg1 location:(int)arg2;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (void)downloadingIconStatusDidChange:(id)arg1;
- (void)setGhostly:(BOOL)arg1 requester:(int)arg2;
- (void)_updateProgressBar;
- (void)setDisplayedIconImage:(id)arg1;
- (void)setIcon:(id)arg1;
@property(retain, nonatomic) SBDownloadingIcon *downloadingIcon;
- (void)dealloc;
- (id)initWithDefaultSize;

@end

