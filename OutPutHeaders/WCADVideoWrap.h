/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

@interface WCADVideoWrap : XXUnknownSuperclass {
	NSString* adID;
	NSString* publishID;
	NSString* uxInfo;
	unsigned long long startTime;
	NSMutableArray* arrPlayInfo;
	unsigned long scene;
}
@property(assign, nonatomic) unsigned long scene;
@property(retain, nonatomic) NSMutableArray* arrPlayInfo;
@property(assign, nonatomic) unsigned long long startTime;
@property(retain, nonatomic) NSString* uxInfo;
@property(retain, nonatomic) NSString* publishID;
@property(retain, nonatomic) NSString* adID;
-(void).cxx_destruct;
-(id)init;
@end

