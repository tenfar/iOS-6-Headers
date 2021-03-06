/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBAlert.h"

@class NSString;

@interface SBTTYPromptAlert : SBAlert
{
    NSString *_number;
    int _uid;
}

+ (BOOL)dialNumberPromptingIfNecessary:(id)arg1 addressBookUID:(int)arg2 urlAddition:(id)arg3;
+ (void)displayForNumber:(id)arg1 addressBookUID:(int)arg2;
- (int)addressBookUID;
- (id)number;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithNumber:(id)arg1 addressBookUID:(int)arg2;

@end

