/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@protocol SBBulletinListViewDelegate <NSObject, UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>
- (void)handleEatenTouch:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handleTap:(id)arg1;
@end

