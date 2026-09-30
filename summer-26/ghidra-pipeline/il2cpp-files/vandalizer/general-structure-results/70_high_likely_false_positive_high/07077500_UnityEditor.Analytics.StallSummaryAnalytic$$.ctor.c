/*
FUNCTION_NAME: UnityEditor.Analytics.StallSummaryAnalytic$$.ctor
ENTRY_POINT: 07077500
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8
*/


void UnityEditor_Analytics_StallSummaryAnalytic___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar2 = UnityEngine_UIElements_FocusInEvent_<>c_TypeInfo;
  puVar1 = PTR_DAT_0759b2b0;
  if ((DAT_07a5a63f & 1) == 0) {
    FUN_031f20f4(FriendEntry_<SetData>d__7_TypeInfo);
    FUN_031f20f4(FriendRequestEntry_<SetData>d__11_TypeInfo);
    FUN_031f20f4(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass21_0_TypeInfo)
    ;
    FUN_031f20f4(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass23_0_TypeInfo)
    ;
    FUN_031f20f4(PTR_DAT_0759b2b0);
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Modes_GcmSivBlockCipher_GcmSivHasher_TypeInfo
                );
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Modes_Gcm_GcmUtilities_FieldElement_TypeInfo
                );
    FUN_031f20f4(UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
    FUN_031f20f4(
                System_Runtime_Serialization_GenericParameterDataContract_GenericParameterDataContractCriticalHelper_TypeInfo
                );
    FUN_031f20f4(UnityEngine_UIElements_GeometryChangedEvent_<>c_TypeInfo);
    FUN_031f20f4(Oculus_Interaction_UnityXR_FromUnityXRControllerDataSource_<>c_TypeInfo);
    FUN_031f20f4(
                Oculus_Interaction_UnityXR_FromUnityXRControllerDataSource_<>c__DisplayClass14_0_TypeInfo
                );
    FUN_031f20f4(
                Oculus_Interaction_UnityXR_FromUnityXRControllerDataSource_<>c__DisplayClass14_1_TypeInfo
                );
    FUN_031f20f4(
                Oculus_Interaction_UnityXR_FromUnityXRControllerDataSource_<>c__DisplayClass14_2_TypeInfo
                );
    FUN_031f20f4(System_Net_FtpControlStream_<>c__DisplayClass31_0_TypeInfo);
    FUN_031f20f4(System_Net_FtpWebResponse_EmptyStream_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_FocusInEvent_<>c_TypeInfo);
    FUN_031f20f4(TagCity_Networking_Requests_GetArtworksRequest_Parameters_TypeInfo);
    DAT_07a5a63f = 1;
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  lVar6 = *(long *)(param_1 + 0x4b8);
  uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_05d75504(uVar4,param_1,*(undefined8 *)puVar2,0);
  puVar2 = System_Net_FtpWebResponse_EmptyStream_TypeInfo;
  if (lVar6 != 0) {
    FUN_070b02b4(lVar6,uVar4,0);
    lVar6 = *(long *)(param_1 + 0x4e8);
    uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_05d75504(uVar4,param_1,*(undefined8 *)puVar2,0);
    puVar2 = Oculus_Interaction_UnityXR_FromUnityXRControllerDataSource_<>c_TypeInfo;
    puVar1 = Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass21_0_TypeInfo;
    if (lVar6 != 0) {
      FUN_070a3e48(lVar6,uVar4,0);
      lVar6 = *(long *)(param_1 + 0x500);
      uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
      FUN_057cdd98(uVar4,param_1,*(undefined8 *)puVar2,0);
      puVar2 = 
      Oculus_Interaction_UnityXR_FromUnityXRControllerDataSource_<>c__DisplayClass14_1_TypeInfo;
      puVar1 = FriendEntry_<SetData>d__7_TypeInfo;
      if (lVar6 != 0) {
        FUN_070a88b0(lVar6,uVar4,0);
        lVar6 = *(long *)(param_1 + 0x500);
        uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
        FUN_056fa11c(uVar4,param_1,*(undefined8 *)puVar2,0);
        puVar3 = 
        Oculus_Interaction_UnityXR_FromUnityXRControllerDataSource_<>c__DisplayClass14_0_TypeInfo;
        puVar2 = FriendRequestEntry_<SetData>d__11_TypeInfo;
        if (lVar6 != 0) {
          FUN_070a8960(lVar6,uVar4,0);
          lVar6 = *(long *)(param_1 + 0x500);
          uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
          FUN_057cdeb8(uVar4,param_1,*(undefined8 *)puVar3,0);
          puVar3 = 
          Oculus_Interaction_UnityXR_FromUnityXRControllerDataSource_<>c__DisplayClass14_2_TypeInfo;
          puVar2 = 
          Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass23_0_TypeInfo;
          if (lVar6 != 0) {
            FUN_070a8ac0(lVar6,uVar4,0);
            lVar6 = *(long *)(param_1 + 0x500);
            uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
            FUN_057d0204(uVar4,param_1,*(undefined8 *)puVar3,0);
            puVar2 = System_Net_FtpControlStream_<>c__DisplayClass31_0_TypeInfo;
            if (lVar6 != 0) {
              FUN_070a8cd0(lVar6,uVar4,0);
              lVar6 = *(long *)(param_1 + 0x500);
              uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
              FUN_056fa11c(uVar4,param_1,*(undefined8 *)puVar2,0);
              if (lVar6 != 0) {
                FUN_070a8c20(lVar6,uVar4,0);
                if ((*(long *)(param_1 + 0x4e0) != 0) &&
                   (lVar6 = FUN_05813678(*(long *)(param_1 + 0x4e0),
                                         *(undefined8 *)
                                          Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Modes_Gcm_GcmUtilities_FieldElement_TypeInfo
                                        ),
                   puVar3 = 
                   System_Runtime_Serialization_GenericParameterDataContract_GenericParameterDataContractCriticalHelper_TypeInfo
                   , puVar2 = UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo,
                   puVar1 = 
                   Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Modes_GcmSivBlockCipher_GcmSivHasher_TypeInfo
                   , lVar6 != 0)) {
                  FUN_0529d900(&stack0x00000008,lVar6,
                               *(undefined8 *)
                                TagCity_Networking_Requests_GetArtworksRequest_Parameters_TypeInfo);
                  while (uVar5 = FUN_05afcec4(&stack0x00000008,*(undefined8 *)puVar3),
                        (uVar5 & 1) != 0) {
                    FUN_07074800(param_1,in_stack_00000018);
                  }
                  FUN_05afcec0(&stack0x00000008,*(undefined8 *)puVar2);
                  if (*(long *)(param_1 + 0x4e0) != 0) {
                    FUN_058139d0(*(long *)(param_1 + 0x4e0),*(undefined8 *)puVar1);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


