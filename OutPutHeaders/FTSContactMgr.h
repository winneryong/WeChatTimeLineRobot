/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "IFriendListMgrExt.h"
#import "IContactLabelMgrExt.h"
#import "IContactMgrExt.h"
#import "IMMNewSessionMgrExt.h"

@class NSMutableArray, NSArray, NSString, NSMutableDictionary;

@interface FTSContactMgr : XXUnknownSuperclass <IContactMgrExt, IFriendListMgrExt, IContactLabelMgrExt, IMMNewSessionMgrExt> {
	BOOL _hasInited;
	BOOL _onlyInitContactScene;
	NSMutableArray* _arrTopHitContactItem;
	NSMutableArray* _arrTopHitAddressBookItem;
	NSMutableArray* _arrAddressBookFriend;
	NSMutableDictionary* _dicNickNameToFriends;
	NSMutableDictionary* _dicAddressBook;
	NSMutableArray* _arrContact;
	NSMutableDictionary* _dicContact;
	NSMutableDictionary* _dicNewestCreateTimeForSession;
	NSMutableArray* _arrSessionContact;
	NSMutableArray* _arrTopHitResultContactValue;
	NSMutableArray* _arrTopHitResultAddressBookValue;
	NSMutableArray* _arrTopHitResultContact;
	NSMutableArray* _arrTopHitResultAddressBookFriend;
	NSMutableArray* _arrTopHitNormalContact;
	NSMutableArray* _arrTopHitGroupContact;
	NSMutableArray* _arrTopHitBrandContact;
	NSMutableArray* _arrFilterContact;
	NSMutableArray* _arrFilterAddressBookFriend;
	NSMutableArray* _arrNormalContact;
	NSMutableArray* _arrGroupContact;
	NSMutableArray* _arrBrandContact;
	NSString* _lastQueryText;
	NSString* _newestQueryText;
	NSMutableArray* _arrLastQueryKeywords;
	NSMutableDictionary* _dicSearchMatchTip;
	NSMutableArray* _arrGroupContactForDetailPage;
	NSMutableArray* _arrSourceGroupContact;
	NSString* _lastQueryTextForDetailPage;
	NSString* _newestQueryTextForDetailPage;
	NSMutableArray* _arrLastQueryKeywordsForDetailPage;
	NSMutableDictionary* _dicSearchMatchTipForDetailPage;
	NSMutableDictionary* _dicChinesePinYin;
	NSMutableDictionary* _dicMatchWeChatID;
	NSMutableDictionary* _dicTagNames;
	NSMutableDictionary* _dicCacheFilterContact;
	NSMutableDictionary* _dicCacheFilterAddressBookFriend;
	NSMutableArray* _arrSourceSingleContact;
	NSMutableArray* _arrSingleContactForDetailPage;
	NSMutableArray* _arrAddressBookFriendForDetailPage;
	NSMutableArray* _arrSourceBrandContact;
	NSMutableArray* _arrBrandContactForDetailPage;
	BOOL _hasLoadedAddressContact;
	BOOL _hasLoadedSessionContact;
	BOOL _needMonitorReport;
	BOOL _needSaveRUContact;
	NSMutableDictionary* _dicRUContact;
	int _mgrScene;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int mgrScene;
@property(assign, nonatomic) BOOL needMonitorReport;
@property(assign, nonatomic) BOOL onlyInitContactScene;
@property(retain, nonatomic) NSMutableArray* arrLastQueryKeywordsForDetailPage;
@property(retain, nonatomic) NSString* newestQueryTextForDetailPage;
@property(retain, nonatomic) NSString* lastQueryTextForDetailPage;
@property(retain, nonatomic) NSArray* arrLastQueryKeywords;
@property(retain, nonatomic) NSString* newestQueryText;
@property(retain, nonatomic) NSString* lastQueryText;
-(void).cxx_destruct;
-(void)onClearData;
-(void)onAppTerminate;
-(void)onEnterBackground;
-(void)onReloadData;
-(void)asyncDetailSearch:(id)search handler:(id)handler;
-(id)syncSearchTextForSingleContact:(id)singleContact limitCount:(unsigned long)count;
-(void)onContactTagNameUpdate:(id)update;
-(void)onAllTagNameUpdate;
-(void)onFriendListUpdated:(id)updated ErrorCode:(unsigned long)code Message:(id)message;
-(void)onDeleteSessionOfUser:(id)user;
-(void)onContactListUpdate:(unsigned long)update;
-(void)onDeleteContact:(id)contact;
-(void)OnChangeNotifyStatus:(id)status withStatus:(BOOL)status2;
-(void)onModifyContact:(id)contact;
-(id)getBrandContactsForDetailPage:(id)detailPage;
-(BOOL)hasSearchDoneForDetailPageOfBrandContact:(id)brandContact;
-(id)getDetailPageMatchTipOfBrandContactForUserName:(id)userName;
-(void)cancelSearchForDetailPageOfBrandContact;
-(void)asyncSearchTextForDetailPageOfBrandContact:(id)brandContact;
-(void)doSearchForDetailPageOfBrandContact:(id)brandContact;
-(id)getSourceBrandContactForDetailPage;
-(id)getAddressBookFriendForDetailPage:(id)detailPage;
-(id)getSingleContactsForDetailPage:(id)detailPage;
-(id)getNormalContactsForDetailPage:(id)detailPage;
-(BOOL)hasSearchDoneForDetailPageOfSingleContact:(id)singleContact;
-(id)getDetailPageMatchTipOfSingleContactForUserName:(id)userName;
-(void)cancelSearchForDetailPageOfSingleContact;
-(void)asyncSearchTextForDetailPageOfSingleContact:(id)singleContact;
-(void)doSearchForDetailPageOfSingleContact:(id)singleContact;
-(id)getSourceSingleContactContactForDetailPage;
-(id)getGroupContactsForDetailPage:(id)detailPage;
-(BOOL)hasSearchDoneForDetailPage:(id)detailPage;
-(id)getDetailPageMatchTipForUserName:(id)userName;
-(void)cancelSearchForDetailPage;
-(void)asyncSearchTextForDetailPage:(id)detailPage;
-(void)doSearchForDetailPage:(id)detailPage;
-(id)getSourceGroupContactForDetailPage;
-(BOOL)hasMatchWechatID:(id)anId;
-(id)getMatchTipForUserName:(id)userName;
-(void)cancelSearch;
-(void)asyncSearchText:(id)text;
-(BOOL)hasAllContactLoaded;
-(void)monitorReport;
-(void)doSearch:(id)search;
-(void)searchCompletely:(id)completely;
-(void)searchTextCompletely:(id)completely;
-(void)searchTextAndNotNotify:(id)notify;
-(void)searchTopHitContacts:(id)contacts matchTips:(id)tips;
-(void)invalidateDetailCache;
-(id)getSourceAddressBook;
-(id)getSourceFilterAddressFriend:(id)aFriend;
-(id)getSourceFilterContact:(id)contact;
-(id)getCacheFilterAddressFriend:(id)aFriend;
-(BOOL)hasCacheFilterAddressFriend:(id)aFriend;
-(id)getCacheFilterContact:(id)contact;
-(BOOL)hasCacheFilterContact:(id)contact;
-(void)cacheSearchResult;
-(unsigned long)getBrandContactsCount;
-(id)getBrandContacts;
-(BOOL)hasBrandContacts;
-(unsigned long)getGroupContactsCount;
-(id)getGroupContacts;
-(BOOL)hasGroupContacts;
-(unsigned long)getAddressBookFriendsCount;
-(id)getAddressBookFriendsByNickName:(id)name;
-(id)getAddressBookFriends;
-(BOOL)hasAddressBookeFriends;
-(unsigned long)getNormalContactsCount;
-(id)getNormalContacts;
-(BOOL)hasNormalContacts;
-(unsigned long)getTopHitBrandContactsCount;
-(id)getTopHitBrandContacts;
-(unsigned long)getTopHitGroupContactsCount;
-(id)getTopHitGroupContacts;
-(unsigned long)getTopHitAddressFriendsCount;
-(id)getTopHitAddressFriends;
-(unsigned long)getTopHitNormalContactsCount;
-(id)getTopHitNormalContacts;
-(unsigned long)getTopHitContactsCount;
-(BOOL)hasTopHitContacts;
-(void)selectAddressFriend:(id)aFriend;
-(void)selectContact:(id)contact;
-(void)addScore:(id)score arrTopHitItem:(id)item;
-(BOOL)selectTopHitKey:(id)key arrTopHitItem:(id)item arrTopHitResultValue:(id)value;
-(void)sortTopHitValueList:(id)list;
-(void)trySaveTopHitItem;
-(void)trySaveTopHitAddressBookItem;
-(void)trySaveTopHitContactItem;
-(void)tryLoadTopHitItem;
-(id)pathForTopHitAddressBookItem;
-(id)pathForTopHitContactItem;
-(unsigned long)getTotalCount;
-(BOOL)hasSearchResult;
-(void)tryInitSessionContactTime;
-(void)loadAllSessionContact;
-(void)asyncLoadAllSessionContact;
-(id)loadSessionUserName;
-(void)accessContact:(id)contact withParams:(id)params;
-(void)removeRUBrandContact:(id)contact type:(int)type;
-(void)removeRUBrandContact:(id)contact;
-(id)getRUBrandContactKey;
-(void)trySaveRUContact;
-(void)compactRUContact:(id)contact;
-(void)loadRUContact;
-(id)getRUBrandContact;
-(void)sortAddressBookFriends:(id)friends matchTips:(id)tips;
-(void)sortContacts:(id)contacts matchTips:(id)tips;
-(void)tryLoadContacts;
-(void)addBrandContacts:(id)contacts;
-(void)addPluginContact:(id)contact pluginType:(int)type;
-(void)tryLoadAddressBook;
-(void)tryLoadAddressBookFriends;
-(void)sortFriendList;
-(void)DeepCopyArrSessionContact:(id)contact;
-(BOOL)hasInitSessionContact;
-(id)getArrSessionContact;
-(void)logInfo;
-(void)doInitWorker;
-(void)dealloc;
-(id)init;
@end

