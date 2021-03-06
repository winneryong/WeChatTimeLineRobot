/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol FavTagEditViewDelegate <NSObject>
@optional
-(void)onTouchEndBlankView;
-(void)hideKeyboardOnScroll:(id)scroll;
-(void)onTagUnHighLight:(id)light;
-(void)onTagHighLight:(id)light;
-(void)onDeleteButton:(id)button;
-(void)onAddButton:(id)button;
-(void)cleanTextField:(id)field;
-(void)onTextFieldMoved:(id)moved;
-(void)onTextFieldChanged:(id)changed;
@end

