/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "SKPALEMappedObject.h"

//#import "SKPArraySubscriberDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, SKPContact;

@interface SKPParticipant : NSObject //SKPALEMappedObject <SKPArraySubscriberDelegate>
{
    BOOL _typing;
    BOOL _callIsBeingForwarded;
    NSString *_identity;
    int _voiceStatus;
    int _videoStatus;
    int _lastLeaveReason;
    SKPContact *_contact;
    int _liveType;
    NSString *_debugInformation;
    NSString *_qualityProblems;
    unsigned int _liveStartTimestamp;
    NSString *_liveIdentityToUse;
    int _videoAcceptanceStatus;
    float _soundLevel;
    int _dominantSpeakerRank;
    int _leaveReason;
    int _rank;
    NSMutableArray *_mutableliveSessionVideos;
}

+ (id)lazyLoadedPropertiesKeypaths;
+ (id)keyPathsForValuesAffectingHeld;
+ (id)keyPathsForValuesAffectingRinging;
+ (id)keyPathsForValuesAffectingConnecting;
+ (id)keyPathsForValuesAffectingLive;
+ (id)keyPathsForValuesAffectingInProgress;
+ (id)keyPathsForValuesAffectingAdmin;
+ (id)keyPathsForValuesAffectingVoiceStatusDescription;
+ (id)keyPathsForValuesAffectingInboundVideoAuthorizatedToStart;
+ (id)propertyMapping;
+ (Class)associatedALEClass;
+ (id)transformValue:(id)arg1 forKeyPath:(id)arg2 wasTransformed:(char *)arg3;
@property(retain, nonatomic) NSMutableArray *mutableliveSessionVideos; // @synthesize mutableliveSessionVideos=_mutableliveSessionVideos;
@property(nonatomic) int rank; // @synthesize rank=_rank;
@property(nonatomic) int leaveReason; // @synthesize leaveReason=_leaveReason;
@property(readonly, nonatomic) int dominantSpeakerRank; // @synthesize dominantSpeakerRank=_dominantSpeakerRank;
@property(readonly, nonatomic) float soundLevel; // @synthesize soundLevel=_soundLevel;
@property(nonatomic) int videoAcceptanceStatus; // @synthesize videoAcceptanceStatus=_videoAcceptanceStatus;
@property(readonly, nonatomic) NSString *liveIdentityToUse; // @synthesize liveIdentityToUse=_liveIdentityToUse;
@property(readonly, nonatomic) unsigned int liveStartTimestamp; // @synthesize liveStartTimestamp=_liveStartTimestamp;
@property(readonly, nonatomic) NSString *qualityProblems; // @synthesize qualityProblems=_qualityProblems;
@property(readonly, nonatomic) NSString *debugInformation; // @synthesize debugInformation=_debugInformation;
@property(readonly, nonatomic) int liveType; // @synthesize liveType=_liveType;
@property(retain, nonatomic) SKPContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) BOOL callIsBeingForwarded; // @synthesize callIsBeingForwarded=_callIsBeingForwarded;
@property(readonly, nonatomic, getter=isTyping) BOOL typing; // @synthesize typing=_typing;
@property(nonatomic) int lastLeaveReason; // @synthesize lastLeaveReason=_lastLeaveReason;
@property(nonatomic) int videoStatus; // @synthesize videoStatus=_videoStatus;
@property(readonly, nonatomic) int voiceStatus; // @synthesize voiceStatus=_voiceStatus;
@property(readonly, nonatomic) NSString *identity; // @synthesize identity=_identity;
//- (void).cxx_destruct;
- (id)treeNodeChildObjectValueForKey:(id)arg1;
- (void)OnLiveSessionVideosChanged:(id)arg1;
@property(readonly, nonatomic, getter=isCurrentUser) BOOL currentUser;
@property(readonly, nonatomic) BOOL canBeKicked;
- (void)startLiveSessionVideosIfAvailable;
- (void)stopLiveSessionVideos;
- (void)resetLastLeaveReason;
- (void)setLiveIdentityToUseForRinging:(id)arg1;
- (void)ringWithVideo:(BOOL)arg1;
- (void)kick;
- (void)hangup;
- (void)fetchContact;
- (void)updateInboundVideoStatus;
- (void)updateInboundVideoStatusForVideo:(id)arg1;
- (void)removeLiveSessionVideosAtIndexes:(id)arg1;
- (void)replaceObjectInLiveSessionVideosAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromLiveSessionVideosAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inLiveSessionVideosAtIndex:(unsigned int)arg2;
@property(nonatomic) NSArray *liveSessionVideos;
- (BOOL)shouldAutosendVideo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeLiveSessionVideo:(id)arg1;
- (void)addLiveSessionVideo:(id)arg1;
- (void)stopObservingVideo:(id)arg1;
- (void)startObservingVideo:(id)arg1;
- (void)addVideosIfNeeded:(id)arg1;
- (id)fetchVideosOperation;
- (BOOL)flushLazyProperty:(id)arg1;
- (id)fetchOperationForLazyProperty:(id)arg1 fetchQueueIdentifier:(id *)arg2;
- (void)setVoiceStatus:(int)arg1;
@property(readonly, nonatomic, getter=isHeld) BOOL held;
@property(readonly, nonatomic, getter=isRinging) BOOL ringing;
@property(readonly, nonatomic, getter=isConnecting) BOOL connecting;
@property(readonly, nonatomic, getter=isLive) BOOL live;
@property(readonly, nonatomic, getter=isInProgress) BOOL inProgress;
@property(readonly, nonatomic, getter=isAdmin) BOOL admin;
@property(readonly, nonatomic) NSString *voiceStatusDescription;
@property(readonly, nonatomic) BOOL inboundVideoAuthorizatedToStart;
- (void)initializeObject;
- (void)initializeALEObjectWithObjectId:(unsigned int)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
