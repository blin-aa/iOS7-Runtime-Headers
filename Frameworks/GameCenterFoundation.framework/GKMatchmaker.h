/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKDiscovery, NSDate, NSObject<OS_dispatch_queue>, GKMatch, NSSet, NSMutableDictionary;

@interface GKMatchmaker : NSObject  {
    NSObject<OS_dispatch_queue> *_lookForInviteQueue;
    BOOL _nearbyBrowsing;
    BOOL _nearbyAdvertising;
    BOOL _wasNearbyBrowsing;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _inviteHandler;

    GKMatch *_match;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _inviteeResponseHandler;

    NSSet *_invitees;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _nearbyPlayerHandler;

    NSMutableDictionary *_nearbyPlayers;
    NSMutableDictionary *_nearbyInvites;
    GKDiscovery *_nearbyDiscovery;
    NSDate *_nearbyQueryLastCheckDate;
    NSSet *_nearbyCompatibileHashes;
    int _matching;
    double _nearbyQueryAllowance;
}

@property(copy) id inviteHandler;
@property(retain) GKMatch * match;
@property(retain) NSSet * invitees;
@property(copy) id inviteeResponseHandler;
@property(copy) id nearbyPlayerHandler;
@property(retain) NSMutableDictionary * nearbyPlayers;
@property(retain) NSMutableDictionary * nearbyInvites;
@property(retain) GKDiscovery * nearbyDiscovery;
@property(retain) NSDate * nearbyQueryLastCheckDate;
@property(retain) NSSet * nearbyCompatibileHashes;
@property double nearbyQueryAllowance;
@property BOOL nearbyBrowsing;
@property BOOL nearbyAdvertising;
@property BOOL wasNearbyBrowsing;
@property(readonly) BOOL hasInviteListener;
@property int matching;

+ (id)syncQueue;
+ (id)sharedMatchmaker;

- (void)finishedAuthenticating;
- (void)cancelInviteToPlayer:(id)arg1;
- (void)findMatchForRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)addPlayersToMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(id)arg3;
- (void)addPlayersForHostedMatchRequest:(id)arg1 existingPlayerIDs:(id)arg2 completionHandler:(id)arg3;
- (void)matchForInvite:(id)arg1 completionHandler:(id)arg2;
- (void)stopBrowsingForNearbyPlayers;
- (void)startBrowsingForNearbyPlayersWithReachableHandler:(id)arg1;
- (id)nearbyInviteFromPlayerID:(id)arg1;
- (id)hashForCurrentGame;
- (void)generateHashedCompatibiltySet;
- (void)setupNearbyDiscovery;
- (void)localPlayerAcceptedNearbyInvite:(id)arg1;
- (void)removeNearbyInviteFromPlayerID:(id)arg1;
- (void)declineNearbyInviteFromPlayer:(id)arg1 participantID:(id)arg2 deviceID:(id)arg3 reason:(int)arg4;
- (void)saveNearbyInvite:(id)arg1 fromPlayerID:(id)arg2;
- (void)presentNearbyInvite:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4;
- (void)loadPhotoDataDictionaryWithHandler:(id)arg1;
- (void)determineIfShouldRespondToNearbyPlayer:(id)arg1 handler:(id)arg2;
- (void)sendProfileResponseToParticipant:(id)arg1 deviceID:(id)arg2;
- (BOOL)compatibilityMatrix:(id)arg1 includesAppWithBundleID:(id)arg2 version:(id)arg3;
- (void)setNearbyPlayerDeclined:(id)arg1 deviceID:(id)arg2 reason:(int)arg3;
- (void)setNearbyPlayerAccepted:(id)arg1 deviceID:(id)arg2 connectionData:(id)arg3;
- (void)setNearbyPlayerFailed:(id)arg1 deviceID:(id)arg2;
- (id)profileDictionaryForLocalPlayer;
- (id)nearbyDevicesForPlayer:(id)arg1 withState:(int)arg2;
- (int)numberOfNearbyDevicesForPlayer:(id)arg1 withState:(int)arg2;
- (id)nearbyDeviceWithDeviceID:(id)arg1;
- (void)sendDictionary:(id)arg1 toNearbyParticipant:(id)arg2 deviceID:(id)arg3;
- (int)currentEnvironment;
- (void)startNearbyAdvertising;
- (void)performSync:(id)arg1;
- (void)loadCompatabilityMatrixAsDictionaryWithHandler:(id)arg1;
- (id)hashForBundleID:(id)arg1 version:(id)arg2;
- (BOOL)shouldRespondToNearbyQuery;
- (void)nearbyInviteWasCancelled:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4;
- (void)handleNearbyInviteResponse:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4;
- (void)handleNearbyInvite:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4;
- (void)handleNearbyProfileResponse:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4;
- (void)handleNearbyProfileQuery:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4;
- (id)descriptionForNearbyDictionary:(id)arg1;
- (void)receivedData:(id)arg1 fromNearbyParticipant:(id)arg2 deviceID:(id)arg3;
- (void)lostNearbyParticipant:(id)arg1 deviceID:(id)arg2;
- (void)foundNearbyParticipant:(id)arg1 deviceID:(id)arg2 discoveryInfo:(id)arg3;
- (void)setNearbyPlayer:(id)arg1 deviceID:(id)arg2 reachable:(BOOL)arg3;
- (void)declineReceivedNearbyInvites;
- (void)cancelSentNearbyInvites;
- (void)stopNearbyAdvertising;
- (void)localPlayerRespondedToNearbyInvite:(id)arg1;
- (int)matching;
- (void)setWasNearbyBrowsing:(BOOL)arg1;
- (BOOL)wasNearbyBrowsing;
- (void)setNearbyAdvertising:(BOOL)arg1;
- (BOOL)nearbyAdvertising;
- (void)setNearbyBrowsing:(BOOL)arg1;
- (BOOL)nearbyBrowsing;
- (void)setNearbyQueryAllowance:(double)arg1;
- (double)nearbyQueryAllowance;
- (void)setNearbyCompatibileHashes:(id)arg1;
- (id)nearbyCompatibileHashes;
- (void)setNearbyQueryLastCheckDate:(id)arg1;
- (id)nearbyQueryLastCheckDate;
- (void)setNearbyDiscovery:(id)arg1;
- (id)nearbyDiscovery;
- (void)setNearbyInvites:(id)arg1;
- (id)nearbyInvites;
- (void)setNearbyPlayers:(id)arg1;
- (id)nearbyPlayers;
- (id)nearbyPlayerHandler;
- (id)inviteHandler;
- (void)setNearbyPlayerFailed:(id)arg1;
- (void)setNearbyPlayerDeclined:(id)arg1 reason:(int)arg2;
- (void)setNearbyPlayerAccepted:(id)arg1 connectionData:(id)arg2;
- (void)queryActivityWithCompletionHandler:(id)arg1;
- (void)queryPlayerGroupActivity:(unsigned int)arg1 withCompletionHandler:(id)arg2;
- (void)finishMatchmakingForMatch:(id)arg1;
- (void)findPlayersForHostedMatchRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setInviteHandler:(id)arg1;
- (void)registeredListentersChanged;
- (int)responseForDeclineReason:(int)arg1;
- (void)stopNearbyBrowsing;
- (void)startNearbyBrowsing;
- (void)setNearbyPlayerHandler:(id)arg1;
- (void)cancelPendingInvitesAndMarkInviteComplete:(BOOL)arg1;
- (void)cancelNearbyInvitesToPlayers:(id)arg1;
- (void)matchWithRequest:(id)arg1 currentMatch:(id)arg2 currentPlayerIDs:(id)arg3 serverHosted:(BOOL)arg4 rematchID:(id)arg5 completionHandler:(id)arg6;
- (void)setMatching:(int)arg1;
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(BOOL)arg2 completionHandler:(id)arg3;
- (void)setMatch:(id)arg1;
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(BOOL)arg2 onlineConnectionData:(id)arg3 completionHandler:(id)arg4;
- (void)inviteAnyNearbyPlayersWithRequest:(id)arg1;
- (id)match;
- (void)doneMatchmaking;
- (void)reportResponse:(int)arg1 forInvitees:(id)arg2;
- (BOOL)removeInvitee:(id)arg1;
- (void)matchForRemoteInvite:(id)arg1 completionHandler:(id)arg2;
- (void)matchForNearbyInvite:(id)arg1 handler:(id)arg2;
- (void)acceptNearbyInvite:(id)arg1 connectionData:(id)arg2;
- (void)respondToHostedInvite:(id)arg1 completionHandler:(id)arg2;
- (BOOL)hasInviteListener;
- (void)setInvitees:(id)arg1;
- (id)invitees;
- (void)updateNearbyAdvertising;
- (void)setConnectivitySettings:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)localPlayerAcceptedGameInvite:(id)arg1;
- (void)inviteeDeclinedNotification:(id)arg1;
- (void)inviteeAcceptedNotification:(id)arg1;
- (void)loadConnectivitySettingsWithCompletionHandler:(id)arg1;
- (void)setInviteeResponseHandler:(id)arg1;
- (id)inviteeResponseHandler;
- (void)findRematchForMatch:(id)arg1 completionHandler:(id)arg2;
- (void)lookForInvite;
- (id)init;
- (void)dealloc;
- (void)cancel;

@end
