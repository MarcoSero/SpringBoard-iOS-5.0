/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

#import "BBObserverDelegate-Protocol.h"
#import "SBBulletinListViewDelegate-Protocol.h"
#import "SBBulletinWindowClient-Protocol.h"

@class BBObserver, NSArray, NSMutableArray, NSMutableDictionary, NSTimer, SBApplication, SBBulletinClearButton, SBBulletinListTabView, SBBulletinListView;

@interface SBBulletinListController : NSObject <BBObserverDelegate, SBBulletinListViewDelegate, SBBulletinWindowClient>
{
    BBObserver *_observer;
    NSMutableDictionary *_enabledSectionsByID;
    NSMutableArray *_visibleSectionIDs;
    NSArray *_possibleSectionIDs;
    unsigned int _sectionOrderRule;
    NSMutableArray *_weeApps;
    NSMutableDictionary *_headerViewsBySectionID;
    SBBulletinListTabView *_tabView;
    SBBulletinListView *_listView;
    BOOL _listViewTableViewHasLoaded;
    BOOL _listViewIsActive;
    BOOL _weeAppFullViewsHaveBeenLoaded;
    SBApplication *_coveredApplication;
    SBBulletinClearButton *_clearButtonCurrentlyInClearState;
    NSMutableArray *_enqueuedUpdates;
    BOOL _grabbed;
    float _grabbedY;
    BOOL _pullingDownOutsideList;
    float _showcaseOffset;
    NSTimer *_weeAppSnapshotTimer;
}

+ (id)_sharedInstanceCreateIfNecessary:(BOOL)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (void)dealloc;
- (id)listView;
- (float)listViewHeight;
- (void)showTabViewAnimated:(BOOL)arg1;
- (void)hideTabViewAnimated:(BOOL)arg1;
- (BOOL)isShowingTabView;
- (void)prepareToShowListViewAnimated:(BOOL)arg1 aboveBanner:(BOOL)arg2;
- (void)prepareToHideListViewAnimated:(BOOL)arg1;
- (void)_positionTabViewAtY:(float)arg1;
- (void)positionListViewAtY:(float)arg1;
- (void)setListViewBottomShadowAlpha:(float)arg1;
- (void)_cleanupAfterShowListView;
- (void)_cleanupAfterHideListView;
- (void)_finishShowingListViewAnimated:(BOOL)arg1;
- (void)finishShowingListView;
- (void)showListViewAnimated:(BOOL)arg1;
- (void)hideListViewAnimated:(BOOL)arg1;
- (id)_dynamicAnimationForShow:(BOOL)arg1 targetValue:(double)arg2 withInitialVelocity:(double)arg3 extraPull:(BOOL)arg4;
- (void)showListViewWithInitialVelocity:(float)arg1 additionalValueApplier:(id)arg2 completion:(void)arg3;
- (void)hideListViewWithInitialVelocity:(float)arg1 hiddenY:(float)arg2 extraPull:(BOOL)arg3 additionalValueApplier:(id)arg4 completion:(void)arg5;
- (void)hideListViewWithInitialVelocity:(float)arg1 completion:(id)arg2;
- (void)showListViewWithInitialVelocity:(float)arg1 completion:(id)arg2;
- (void)_setListViewActive:(BOOL)arg1;
- (void)adjustViewForShowcaseOffset:(float)arg1;
- (void)_clearSnapshotTimer;
- (void)_clearWeeAppSnapshots;
- (void)_snapshotTimerFired;
- (void)_tearDownListView;
- (void)_tearDownTabView;
- (BOOL)listViewIsActive;
- (void)_sortVisibleSectionIDsForManualSortOrder;
- (void)_sortVisibleSectionIDsForAutomaticSortOrder;
- (void)_sortVisibleSectionIDs;
- (unsigned int)_insertVisibleSectionIDForManualSortOrder:(id)arg1;
- (unsigned int)_insertVisibleSectionIDForAutomaticSortOrder:(id)arg1;
- (unsigned int)_insertVisibleSectionID:(id)arg1;
- (id)_weeAppForSectionID:(id)arg1;
- (void)_removeWeeAppForSectionID:(id)arg1;
- (id)_weeAppForSectionID:(id)arg1 bundlePath:(id)arg2;
- (BOOL)_canPerformUpdate;
- (void)_performOrEnqueueUpdate:(id)arg1;
- (void)_performEnqueuedUpdates;
- (void)_loadSections;
- (void)_reloadTableView;
- (void)_configureForChangedContentAnimated:(BOOL)arg1;
- (id)_sectionAtIndex:(unsigned int)arg1;
- (id)_bulletinAtIndexPath:(id)arg1;
- (id)_indexPathForBulletin:(id)arg1;
- (float)_rowHeightForBulletin:(id)arg1;
- (float)_headerHeightForSection:(id)arg1;
- (void)_clearSection:(id)arg1;
- (void)_handleUngrabWithVelocity:(struct CGPoint)arg1 completion:(id)arg2;
- (void)_updateForTouchBeganOrMovedWithLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)_updateForTouchEndedWithVelocity:(struct CGPoint)arg1 completion:(id)arg2;
- (void)_updateForTouchCanceled;
- (void)handleShowNotificationsGestureBeganWithTouchLocation:(struct CGPoint)arg1;
- (void)handleShowNotificationsGestureChangedWithTouchLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)handleShowNotificationsGestureEndedWithVelocity:(struct CGPoint)arg1 completion:(id)arg2;
- (void)handleShowNotificationsGestureCanceled;
- (void)handleTap:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handleEatenTouch:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_setClearButtonCurrentlyInClearState:(id)arg1;
- (void)bulletinWindowWillRotateToOrientation:(int)arg1;
- (void)bulletinWindowIsAnimatingRotationToOrientation:(int)arg1;
- (void)bulletinWindowDidRotateFromOrientation:(int)arg1;
- (void)_updateModelAndTableViewForNewSectionOrderRule:(unsigned int)arg1;
- (void)_updateModelAndTableViewForNewSectionOrder:(id)arg1;
- (void)_updateModelAndTableViewForNewSectionInfo:(id)arg1;
- (void)_fixCellSeparatorAboveRow:(unsigned int)arg1 inSection:(id)arg2 sectionIndex:(unsigned int)arg3;
- (void)_fixLastRowSeparatorsAndWeeAppTopPaddingInAllSections;
- (void)_updateModelAndTableViewForAddition:(id)arg1;
- (void)_updateModelAndTableViewForModification:(id)arg1 originalIndex:(unsigned int)arg2;
- (void)_updateModelAndTableViewForRemoval:(id)arg1 originalIndex:(unsigned int)arg2;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned int)arg3;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (void)observer:(id)arg1 updateSectionOrderRule:(unsigned int)arg2;
- (void)observer:(id)arg1 updateSectionOrder:(id)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
- (BOOL)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)arg1;
- (id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(int)arg2;
- (id)observer:(id)arg1 composedAttachmentImageForType:(int)arg2 thumbnailData:(id)arg3 key:(id)arg4;
- (struct CGSize)observer:(id)arg1 composedAttachmentSizeForType:(int)arg2 thumbnailWidth:(float)arg3 height:(float)arg4 key:(id)arg5;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)_separatorStyleForRow:(unsigned int)arg1 inSection:(id)arg2 sectionIndex:(unsigned int)arg3;
- (id)_bulletinCellForSection:(id)arg1 sectionIndex:(unsigned int)arg2 row:(unsigned int)arg3 tableView:(id)arg4;
- (BOOL)_useTopPaddingForWeeAppAtSectionIndex:(unsigned int)arg1;
- (id)_weeAppCellForSection:(id)arg1 sectionIndex:(unsigned int)arg2 tableView:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)runScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3;
- (void)finishedScrollTest;

@end
