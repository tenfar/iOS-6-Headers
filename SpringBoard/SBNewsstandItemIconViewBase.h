/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBIconView.h"

@class SBDownloadingProgressBar;

@interface SBNewsstandItemIconViewBase : SBIconView
{
    SBDownloadingProgressBar *_progressBar;
}

+ (BOOL)_hasBadgeLabel;
+ (Class)_labelImageParametersClassForIcon:(id)arg1 location:(int)arg2;
+ (struct CGPoint)badgeLabelCenterPoint;
+ (float)_badgeLabelFontSize;
+ (id)createBadgeLabelImage;
+ (struct CGPoint)_badgeSashCenterPoint;
+ (float)_badgeSashWidth;
+ (struct UIEdgeInsets)_badgeSashInsets;
+ (id)_badgeBaseImage;
- (void)downloadingIconStatusDidChange:(id)arg1;
- (void)_adjustProgressBarFrame;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (void)_updateProgressBar;
- (void)_removeProgressBar;
- (void)_updateLabelVisibility;
- (float)_badgeVerticalPadding;
- (float)_badgeHorizontalPadding;
- (struct UIEdgeInsets)_viewInsetsForAccessoryType:(int)arg1;
- (struct CGRect)_frameForAccessoryView;
- (struct CGRect)_iconBounds;
- (struct CGRect)_adjustProspectiveBadgeFrame:(struct CGRect)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)iconImageDidUpdate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

