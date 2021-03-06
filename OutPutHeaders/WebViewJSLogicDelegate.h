/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WebViewJSLogicDelegate <NSObject>
-(BOOL)isTempAccessOfJSApiPermitted:(id)jsapiPermitted;
-(void)kvReportJSCall:(id)call withParam:(id)param;
-(id)getAuthorizedMonitorEvents:(id)events;
-(void)processJSAPICall:(id)call funcDef:(id)def funcBlock:(id)block failHandleBlock:(id)block4 apiPermission:(unsigned char)permission;
-(unsigned char)getJSApiPermission:(id)permission;
-(BOOL)isGetingA8Key;
-(void)onFinishedHandleJSApi;
-(id)getCurrentWebviewViewController;
-(BOOL)canAccessJSApi:(id)api;
@end

