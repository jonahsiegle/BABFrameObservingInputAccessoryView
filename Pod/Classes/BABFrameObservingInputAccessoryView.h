//
//  BABFrameObservingInputAccessoryView.m
//
//  Created by Bryn Bodayle on October/21/2014.
//  Copyright (c) 2014 Bryn Bodayle. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BABFrameObservingInputAccessoryView : UIView

@property (nonatomic, copy) void (^inputAccessorySuperviewFrameChangedBlock)(BOOL keyboardVisible, CGRect keyboardFrame);
@property (nonatomic, readonly) CGRect inputAccessorySuperviewFrame;
@property (nonatomic, readonly, getter=isKeyboardVisible) BOOL keyboardVisible;

@end
