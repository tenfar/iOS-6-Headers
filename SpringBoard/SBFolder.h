/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBIconIndexMutableListObserver-Protocol.h"
#import "SBIconIndexNode-Protocol.h"

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSString, SBFolderIcon, SBIconIndexMutableList;

@interface SBFolder : NSObject <SBIconIndexNode, SBIconIndexMutableListObserver>
{
    NSString *_displayName;
    NSString *_defaultDisplayName;
    BOOL _open;
    SBFolderIcon *_icon;
    BOOL _cancelable;
    NSMutableSet *_addedIcons;
    NSMutableSet *_removedIcons;
    NSMutableDictionary *_coalesceChangesRequests;
    NSHashTable *_nodeObservers;
    SBIconIndexMutableList *_lists;
}

+ (int)maxListCount;
@property(nonatomic, getter=isCancelable) BOOL cancelable; // @synthesize cancelable=_cancelable;
@property(nonatomic) SBFolderIcon *icon; // @synthesize icon=_icon;
@property(nonatomic) BOOL isOpen; // @synthesize isOpen=_open;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned int)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
- (BOOL)matchesRepresentation:(id)arg1;
- (id)representation;
- (id)folderType;
- (BOOL)resetWithRepresentation:(id)arg1 model:(id)arg2 leafIdentifiersAdded:(id)arg3;
- (void)_setDisplayNameFromRepresentation:(id)arg1;
- (void)stopCoalescingContentChangesForRequestID:(id)arg1 forceReload:(BOOL)arg2;
- (void)stopCoalescingContentChangesForRequestID:(id)arg1;
- (void)startCoalescingContentChangesWithRequestID:(id)arg1;
- (void)noteIcon:(id)arg1 replacedIcon:(id)arg2;
- (void)noteIconRemoved:(id)arg1;
- (void)noteIconAdded:(id)arg1;
- (BOOL)_isCoalescingContentChanges;
- (id)folderContainingIndexPath:(id)arg1 relativeIndexPath:(id *)arg2;
- (id)iconAtIndexPath:(id)arg1;
- (id)indexPathForIconWithIdentifier:(id)arg1;
- (id)indexPathForIcon:(id)arg1;
- (id)indexPathForNodeIdentifier:(id)arg1;
- (id)listContainingLeafIconWithIdentifier:(id)arg1;
- (id)listContainingIcon:(id)arg1;
- (id)visibleIcons;
- (id)folderIcons;
- (id)leafIcons;
- (id)allIcons;
- (id)iconsOfClass:(Class)arg1;
- (id)indexPathForFirstFreeSlotAvoidingFirstList:(BOOL)arg1;
- (id)performCascadingIconInsertion:(id)arg1 listIndex:(unsigned int)arg2 iconIndex:(unsigned int)arg3 addPageIfNecessary:(BOOL)arg4;
- (BOOL)canAddIcon;
- (id)addIcon:(id)arg1;
- (void)removeIconAtIndexPath:(id)arg1;
- (id)insertIcon:(id)arg1 atIndexPath:(id *)arg2;
- (id)placeIcon:(id)arg1 atIndexPath:(id *)arg2;
- (void)purgeLists;
- (unsigned int)indexOfList:(id)arg1;
- (id)listAtIndex:(unsigned int)arg1;
- (void)markIconStateClean;
- (BOOL)isIconStateDirty;
- (void)removeEmptyList:(id)arg1;
- (id)addEmptyList;
- (void)compactIconsAndLists;
- (BOOL)compactLists;
- (BOOL)isNewsstandFolder;
- (BOOL)isFull;
- (BOOL)isEmpty;
- (unsigned int)listCount;
- (id)lists;
- (void)purgeIconImages;
- (void)dealloc;
- (id)init;
- (Class)folderSlidingViewClass;
- (Class)folderViewClass;
- (Class)listViewClass;
- (Class)listModelClass;

@end

