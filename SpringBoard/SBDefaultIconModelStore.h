/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBIconModelPropertyListFileStore.h"

@interface SBDefaultIconModelStore : SBIconModelPropertyListFileStore
{
}

+ (id)sharedInstance;
- (void)_deleteLegacyState;
- (id)loadDesiredIconState:(id *)arg1;
- (BOOL)saveDesiredIconState:(id)arg1 error:(id *)arg2;
- (BOOL)deleteDesiredIconState:(id *)arg1;
- (id)loadCurrentIconState:(id *)arg1;
- (id)init;

@end

