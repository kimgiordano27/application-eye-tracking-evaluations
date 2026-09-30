/*
FUNCTION_NAME: FUN_06fa8008
ENTRY_POINT: 06fa8008
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_8;functionality_data_collection_or_telemetry_hits_8
*/


void FUN_06fa8008(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x20;
  long *unaff_x21;
  
                    /* try { // try from 06fa800c to 070a8017 has its CatchHandler @ 06fa7f10 */
  if ((param_1 & 1) == 0) {
                    /* try { // try from 06fa8018 to 070a801f has its CatchHandler @ 06fa8020 */
    FUN_031f20f4(UnityEngine_InputSystem_RemoteInputPlayerConnection_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06fa8004 with catch @ 06fa8020
                       catch(type#2 @ 00000000) { ... } // from try @ 06fa8018 with catch @ 06fa8020
                        */
    FUN_031f20f4(UnityEngine_ResourceManagement_Exceptions_RemoteProviderException_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d8828);
    FUN_031f20f4(PTR_DAT_075d88b8);
    FUN_031f20f4(PTR_DAT_075d8830);
    FUN_031f20f4(System_Threading_RegisteredWaitHandle_TypeInfo);
    FUN_031f20f4(Oisoi_Networking_Requests_RejectFriendRequest_Request_TypeInfo);
    FUN_031f20f4(Oculus_Platform_Models_RejoinDialogResult_TypeInfo);
    FUN_031f20f4(System_Data_RelatedView_TypeInfo);
    FUN_031f20f4(System_Runtime_Remoting_Activation_RemoteActivationAttribute_TypeInfo);
    FUN_031f20f4(System_Net_Security_RemoteCertificateValidationCallback_TypeInfo);
    FUN_031f20f4(Unity_Services_RemoteConfig_RemoteConfigInitializer_TypeInfo);
    FUN_031f20f4(Unity_Services_RemoteConfig_RemoteConfigRequest_TypeInfo);
    FUN_031f20f4(Unity_Services_RemoteConfig_RemoteConfigService_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d8890);
    FUN_031f20f4(PTR_DAT_075d8838);
    FUN_031f20f4(PTR_DAT_075d8840);
    FUN_031f20f4(PTR_DAT_075d9a00);
    *(undefined1 *)(unaff_x20 + 0xbb4) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  puVar1 = PTR_DAT_075d8840;
  uVar4 = FUN_070076e4(0);
  lVar5 = FUN_0710341c(param_2,0);
  puVar3 = Unity_Services_RemoteConfig_RemoteConfigInitializer_TypeInfo;
  puVar2 = Oculus_Platform_Models_RejoinDialogResult_TypeInfo;
  if ((uVar4 & 1) == 0) {
    uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_04292d74(uVar6,param_2,*(undefined8 *)puVar3,0);
    if (lVar5 == 0) goto LAB_06fa836c;
    Fusion_Native__MallocAndClearArray<NetPeerGroup>(lVar5,uVar6,0,*(undefined8 *)PTR_DAT_075d8830);
    lVar5 = FUN_0710341c(param_2,0);
    uVar6 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8890);
    puVar7 = (undefined8 *)System_Runtime_Remoting_Activation_RemoteActivationAttribute_TypeInfo;
  }
  else {
    uVar6 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8838);
    FUN_04292d74(uVar6,param_2,*(undefined8 *)puVar2,0);
    if (lVar5 == 0) goto LAB_06fa836c;
    Fusion_Native__MallocAndClearArray<NetPeerGroup>(lVar5,uVar6,0,*(undefined8 *)PTR_DAT_075d8828);
    lVar5 = FUN_0710341c(param_2,0);
    uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_04292d74(uVar6,param_2,
                 *(undefined8 *)System_Net_Security_RemoteCertificateValidationCallback_TypeInfo,0);
    if (lVar5 == 0) goto LAB_06fa836c;
    Fusion_Native__MallocAndClearArray<NetPeerGroup>(lVar5,uVar6,0,*(undefined8 *)PTR_DAT_075d8830);
    lVar5 = FUN_0710341c(param_2,0);
    uVar6 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8890);
    puVar7 = (undefined8 *)System_Data_RelatedView_TypeInfo;
  }
  FUN_04292d74(uVar6,param_2,*puVar7,0);
  puVar2 = Unity_Services_RemoteConfig_RemoteConfigService_TypeInfo;
  puVar1 = Oisoi_Networking_Requests_RejectFriendRequest_Request_TypeInfo;
  if (lVar5 != 0) {
    Fusion_Native__MallocAndClearArray<NetPeerGroup>(lVar5,uVar6,0,*(undefined8 *)PTR_DAT_075d88b8);
    lVar5 = FUN_0710341c(param_2,0);
    uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
    FUN_04292d74(uVar6,param_2,*(undefined8 *)puVar1,0);
    puVar2 = Unity_Services_RemoteConfig_RemoteConfigRequest_TypeInfo;
    puVar1 = System_Threading_RegisteredWaitHandle_TypeInfo;
    if (lVar5 != 0) {
      Fusion_Native__MallocAndClearArray<NetPeerGroup>
                (lVar5,uVar6,0,
                 *(undefined8 *)
                  UnityEngine_ResourceManagement_Exceptions_RemoteProviderException_TypeInfo);
      lVar5 = FUN_0710341c(param_2,0);
      uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
      FUN_04292d74(uVar6,param_2,*(undefined8 *)puVar1,0);
      if (lVar5 != 0) {
        Fusion_Native__MallocAndClearArray<NetPeerGroup>
                  (lVar5,uVar6,0,
                   *(undefined8 *)UnityEngine_InputSystem_RemoteInputPlayerConnection_TypeInfo);
        return;
      }
    }
  }
LAB_06fa836c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


