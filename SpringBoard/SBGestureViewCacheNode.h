/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIView;

@interface SBGestureViewCacheNode : NSObject
{
    UIView *m_view;
    int m_viewType;
    NSString *m_contextHostViewRequester;
    int m_orientation;
    NSString *m_bundleIdentifier;
}

+ (id)node;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=m_bundleIdentifier;
@property(nonatomic) int orientation; // @synthesize orientation=m_orientation;
@property(copy, nonatomic) NSString *contextHostViewRequester; // @synthesize contextHostViewRequester=m_contextHostViewRequester;
@property(nonatomic) int viewType; // @synthesize viewType=m_viewType;
@property(retain, nonatomic) UIView *view; // @synthesize view=m_view;
- (void)dealloc;

@end

