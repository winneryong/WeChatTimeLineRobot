/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCPayTenpaySecureCtrlItem.h"

@class MMUIViewController, UIButton, NSString;

@interface WCPayCVVItem : WCPayTenpaySecureCtrlItem {
	UIButton* m_tipBtn;
	MMUIViewController* m_viewController;
	NSString* m_nsTipTitle;
	NSString* m_nsTipContent;
}
-(void).cxx_destruct;
-(void)setTipBtnShowed:(BOOL)showed;
-(void)showCVVTip;
-(void)setTipContent:(id)content Title:(id)title;
-(void)setViewController:(id)controller;
-(void)addTipBtnTarget:(id)target sel:(SEL)sel;
-(void)dealloc;
-(void)initView:(CGRect)view;
@end

