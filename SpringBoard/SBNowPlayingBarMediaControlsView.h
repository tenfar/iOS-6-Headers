/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

@class SBAppSwitcherLabel, UIButton;

@interface SBNowPlayingBarMediaControlsView : UIView
{
    UIButton *_prevButton;
    UIButton *_playButton;
    UIButton *_nextButton;
    UIButton *_airPlayButton;
    UIButton *_fifteenSecondRewindButton;
    UIButton *_fifteenSecondFFButton;
    SBAppSwitcherLabel *_trackLabel;
    int _toggleType;
    SBAppSwitcherLabel *_toggleLabel;
    BOOL _isAirPlayVisible;
    BOOL _isPlaying;
    int _currentTrackSupportsSkip;
    BOOL _isEnabled;
    BOOL _showingToggleLabel;
}

@property(nonatomic) BOOL airPlayButtonVisible; // @synthesize airPlayButtonVisible=_isAirPlayVisible;
@property(readonly, nonatomic) UIButton *airPlayButton; // @synthesize airPlayButton=_airPlayButton;
@property(readonly, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(readonly, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(readonly, nonatomic) UIButton *prevButton; // @synthesize prevButton=_prevButton;
- (void)_muteChanged:(id)arg1;
- (void)_orientationLockChanged:(id)arg1;
- (id)_toggleLabelText;
- (void)_setToggleType:(int)arg1;
- (void)_toggleStatus:(id)arg1;
- (void)setLabelWidth:(float)arg1;
@property(nonatomic) BOOL marqueeRunning;
- (void)setTrackString:(id)arg1;
- (void)_layoutForiPad;
- (void)_layoutForiPhone;
- (void)layoutSubviews;
- (void)updateImages:(BOOL)arg1 enabled:(BOOL)arg2 currentTrackSupportsSkip:(BOOL)arg3;
@property(readonly, nonatomic) UIButton *fifteenSecondFFButton;
@property(readonly, nonatomic) UIButton *fifteenSecondRewindButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

