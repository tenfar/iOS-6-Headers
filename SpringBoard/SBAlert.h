/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBDisplayProtocol-Protocol.h"

@class NSHashTable, NSMapTable, NSMutableDictionary, SBActivationContext, SBAlertView;

@interface SBAlert : NSObject <SBDisplayProtocol>
{
    SBAlertView *_display;
    NSMutableDictionary *_dictionary;
    BOOL _SEO;
    SBActivationContext *_activationContext;
    NSMapTable *_displayValues;
    NSHashTable *_displayFlags;
    BOOL _orientationChangedEventsEnabled;
    float _accelerometerSampleInterval;
    BOOL _expectsFaceContact;
    BOOL _expectsFaceContactInLandscape;
}

+ (id)_adapterForController:(id)arg1;
+ (void)alertAdapterDisplayDidDisappear:(id)arg1;
+ (void)deactivateAlertForController:(id)arg1 animated:(BOOL)arg2 animateOldDisplayInWithStyle:(int)arg3 isSlidingDisplay:(BOOL)arg4;
+ (void)activateAlertForController:(id)arg1 animated:(BOOL)arg2 animateCurrentDisplayOut:(BOOL)arg3 withDelay:(BOOL)arg4 isSlidingDisplay:(BOOL)arg5;
+ (void)test;
+ (id)alertWindow;
+ (void)registerForAlerts;
@property(nonatomic) BOOL SEO; // @synthesize SEO=_SEO;
@property(copy, nonatomic) SBActivationContext *activationContext; // @synthesize activationContext=_activationContext;
- (BOOL)suppressesNotifications;
- (void)handleAutoLock;
- (BOOL)handleHeadsetButtonPressed:(BOOL)arg1;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)handleLockButtonPressed;
- (BOOL)hasTranslucentBackground;
- (BOOL)shouldDeactivateAlertItemsOnActivation;
- (BOOL)handleMenuButtonTap;
- (void)animateDeactivation;
- (BOOL)currentlyAnimatingDeactivation;
- (void)didFinishAnimatingOut;
- (void)didFinishAnimatingIn;
- (void)didAnimateLockKeypadOut;
- (void)didAnimateLockKeypadIn;
- (int)statusBarStyle;
- (double)autoLockTime;
- (double)autoDimTime;
- (BOOL)allowsEventOnlySuspension;
- (BOOL)expectsFaceContactInLandscape;
- (BOOL)expectsFaceContact;
- (void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2;
- (void)setExpectsFaceContact:(BOOL)arg1;
- (int)effectiveStatusBarStyle;
- (double)accelerometerSampleInterval;
- (void)setAccelerometerSampleInterval:(double)arg1;
- (BOOL)orientationChangedEventsEnabled;
- (void)setOrientationChangedEventsEnabled:(BOOL)arg1;
- (id)description;
- (void)deactivate;
- (void)removeFromView;
- (int)interfaceOrientationForActivation;
- (void)activate;
- (int)statusBarStyleOverridesToCancel;
- (Class)alertWindowClass;
- (struct CGRect)alertWindowRect;
- (float)finalAlpha;
- (BOOL)showsSpringBoardStatusBar;
- (BOOL)undimsDisplay;
- (BOOL)allowsStackingOfAlert:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (id)deactivationValue:(unsigned int)arg1;
- (BOOL)deactivationFlag:(unsigned int)arg1;
- (void)setDeactivationSetting:(unsigned int)arg1 value:(id)arg2;
- (void)setDeactivationSetting:(unsigned int)arg1 flag:(BOOL)arg2;
- (void)clearDeactivationSettings;
- (id)activationValue:(unsigned int)arg1;
- (BOOL)activationFlag:(unsigned int)arg1;
- (void)setActivationSetting:(unsigned int)arg1 value:(id)arg2;
- (void)setActivationSetting:(unsigned int)arg1 flag:(BOOL)arg2;
- (void)clearActivationSettings;
- (BOOL)displayFlag:(unsigned int)arg1;
- (id)displayValue:(unsigned int)arg1;
- (void)setDisplaySetting:(unsigned int)arg1 value:(id)arg2;
- (void)setDisplaySetting:(unsigned int)arg1 flag:(BOOL)arg2;
- (void)clearDisplaySettings;
- (void)clearDisplay;
- (void)setDisplay:(id)arg1;
- (id)display;
- (void)dealloc;
- (id)init;

@end

