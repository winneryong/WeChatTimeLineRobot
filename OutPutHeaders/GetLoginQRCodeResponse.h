/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, NSString, BaseResponse;

@interface GetLoginQRCodeResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) SKBuiltinBuffer_t* blueToothBroadCastContent;
@property(retain, nonatomic) NSString* blueToothBroadCastUuid;
@property(assign, nonatomic) unsigned expiredTime;
@property(retain, nonatomic) SKBuiltinBuffer_t* notifyKey;
@property(assign, nonatomic) unsigned checkTime;
@property(retain, nonatomic) NSString* uuid;
@property(retain, nonatomic) SKBuiltinBuffer_t* qrcode;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

