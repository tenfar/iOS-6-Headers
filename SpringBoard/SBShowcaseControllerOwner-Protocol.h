/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SBShowcaseControllerOwner <NSObject>
- (void)showcase:(id)arg1 didTransferOwnershipToOwner:(id)arg2;
- (void)assumeShowcaseOwnership:(id)arg1;
- (void)showcaseWantsToBeDismissed:(id)arg1 animated:(BOOL)arg2;
- (void)showcase:(id)arg1 updateRevealMode:(int)arg2 withBlock:(id)arg3;
- (BOOL)presentShowcaseViewController:(id)arg1 revealMode:(int)arg2 completion:(id)arg3;

@optional
- (float)showcaseWindowLevel:(id)arg1;
@end

