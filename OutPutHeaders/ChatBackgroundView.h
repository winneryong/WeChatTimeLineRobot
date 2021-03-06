/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIControl.h"

@class ChatBackgroundItem, NSIndexPath;
@protocol ChatBackgroundViewDelegate;

@interface ChatBackgroundView : MMUIControl {
	ChatBackgroundItem* m_cbItem;
	NSIndexPath* m_indexPath;
	id<ChatBackgroundViewDelegate> m_delegate;
	int m_index;
}
@property(assign, nonatomic) int m_index;
@property(assign, nonatomic) __weak id<ChatBackgroundViewDelegate> m_delegate;
@property(retain, nonatomic) NSIndexPath* m_indexPath;
@property(retain, nonatomic) ChatBackgroundItem* m_cbItem;
-(void).cxx_destruct;
-(void)startDownloadingAnimation;
-(id)initWithFrame:(CGRect)frame andData:(id)data;
-(void)setStatus:(int)status;
-(int)getStatus;
-(void)onClick;
-(void)initViewWithData;
@end

