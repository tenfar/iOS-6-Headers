/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

#import "SBHostView-Protocol.h"

@class SBAppContextHostManager, UIColor;

@interface SBHostWrapperView : UIView <SBHostView>
{
    UIColor *_backgroundColorWhileNotHosting;
    UIColor *_backgroundColorWhileHosting;
    SBAppContextHostManager *_manager;
}

@property(retain, nonatomic) UIColor *backgroundColorWhileNotHosting; // @synthesize backgroundColorWhileNotHosting=_backgroundColorWhileNotHosting;
@property(retain, nonatomic) UIColor *backgroundColorWhileHosting; // @synthesize backgroundColorWhileHosting=_backgroundColorWhileHosting;
@property(nonatomic) SBAppContextHostManager *manager; // @synthesize manager=_manager;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)description;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)_toggleBackgroundColorIfNecessary;
- (void)_hostingStatusChanged;
- (BOOL)_isReallyHosting;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 contextHostManager:(id)arg2;

@end

