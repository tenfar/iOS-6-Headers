/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "MPVolumeSlider.h"

@interface SBAppSwitcherVolumeSlider : MPVolumeSlider
{
}

- (void)setSliderEnabled:(BOOL)arg1 withDuration:(double)arg2;
- (struct UIEdgeInsets)_thumbHitEdgeInsets;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

