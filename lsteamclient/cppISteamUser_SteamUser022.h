extern HSteamUser cppISteamUser_SteamUser022_GetHSteamUser(void *);
extern bool cppISteamUser_SteamUser022_BLoggedOn(void *);
extern CSteamID cppISteamUser_SteamUser022_GetSteamID(void *);
extern int cppISteamUser_SteamUser022_InitiateGameConnection_DEPRECATED(void *, void *, int, CSteamID, uint32, uint16, bool);
extern void cppISteamUser_SteamUser022_TerminateGameConnection_DEPRECATED(void *, uint32, uint16);
extern void cppISteamUser_SteamUser022_TrackAppUsageEvent(void *, CGameID, int, const char *);
extern bool cppISteamUser_SteamUser022_GetUserDataFolder(void *, char *, int);
extern void cppISteamUser_SteamUser022_StartVoiceRecording(void *);
extern void cppISteamUser_SteamUser022_StopVoiceRecording(void *);
extern EVoiceResult cppISteamUser_SteamUser022_GetAvailableVoice(void *, uint32 *, uint32 *, uint32);
extern EVoiceResult cppISteamUser_SteamUser022_GetVoice(void *, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32);
extern EVoiceResult cppISteamUser_SteamUser022_DecompressVoice(void *, const void *, uint32, void *, uint32, uint32 *, uint32);
extern uint32 cppISteamUser_SteamUser022_GetVoiceOptimalSampleRate(void *);
extern HAuthTicket cppISteamUser_SteamUser022_GetAuthSessionTicket(void *, void *, int, uint32 *, const SteamNetworkingIdentity *);
extern EBeginAuthSessionResult cppISteamUser_SteamUser022_BeginAuthSession(void *, const void *, int, CSteamID);
extern void cppISteamUser_SteamUser022_EndAuthSession(void *, CSteamID);
extern void cppISteamUser_SteamUser022_CancelAuthTicket(void *, HAuthTicket);
extern EUserHasLicenseForAppResult cppISteamUser_SteamUser022_UserHasLicenseForApp(void *, CSteamID, AppId_t);
extern bool cppISteamUser_SteamUser022_BIsBehindNAT(void *);
extern void cppISteamUser_SteamUser022_AdvertiseGame(void *, CSteamID, uint32, uint16);
extern SteamAPICall_t cppISteamUser_SteamUser022_RequestEncryptedAppTicket(void *, void *, int);
extern bool cppISteamUser_SteamUser022_GetEncryptedAppTicket(void *, void *, int, uint32 *);
extern int cppISteamUser_SteamUser022_GetGameBadgeLevel(void *, int, bool);
extern int cppISteamUser_SteamUser022_GetPlayerSteamLevel(void *);
extern SteamAPICall_t cppISteamUser_SteamUser022_RequestStoreAuthURL(void *, const char *);
extern bool cppISteamUser_SteamUser022_BIsPhoneVerified(void *);
extern bool cppISteamUser_SteamUser022_BIsTwoFactorEnabled(void *);
extern bool cppISteamUser_SteamUser022_BIsPhoneIdentifying(void *);
extern bool cppISteamUser_SteamUser022_BIsPhoneRequiringVerification(void *);
extern SteamAPICall_t cppISteamUser_SteamUser022_GetMarketEligibility(void *);
extern SteamAPICall_t cppISteamUser_SteamUser022_GetDurationControl(void *);
extern bool cppISteamUser_SteamUser022_BSetDurationControlOnlineState(void *, EDurationControlOnlineState);
