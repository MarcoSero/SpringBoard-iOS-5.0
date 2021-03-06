/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SBAssistantSpeechElement : NSObject
{
    NSString *_string;
    NSString *_refIdentifier;
    BOOL _autoStartListeningWhenComplete;
}

+ (id)speechElementForString:(id)arg1 listenFollowingSpeech:(BOOL)arg2;
- (id)description;
- (void)dealloc;
@property(copy, nonatomic) NSString *refIdentifier; // @synthesize refIdentifier=_refIdentifier;
@property(nonatomic) BOOL autoStartListeningWhenComplete; // @synthesize autoStartListeningWhenComplete=_autoStartListeningWhenComplete;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;

@end

