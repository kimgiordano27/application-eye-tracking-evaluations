/*
FUNCTION_NAME: FUN_070c7728
ENTRY_POINT: 070c7728
PROGRAM: vandalizer-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_070c7728(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_230 [152];
  undefined1 auStack_198 [152];
  undefined1 auStack_100 [156];
  undefined4 local_64;
  
  puVar5 = OVRPlugin_MeshType_TypeInfo;
  puVar4 = OVRPassthroughColorLut_ColorChannels_TypeInfo;
  puVar1 = PTR_DAT_075d6488;
                    /* try { // try from 070c7738 to 071c7743 has its CatchHandler @ 070c73b4 */
                    /* try { // try from 070c7744 to 071c774b has its CatchHandler @ 070c774c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 070c7710 with catch @ 070c774c
                       catch(type#2 @ 00000000) { ... } // from try @ 070c7744 with catch @ 070c774c
                        */
  if ((DAT_07a5a953 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d6488);
    FUN_031f20f4(OVRPassthroughColorLut_ColorChannels_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_0_1_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_0_1_1_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_0_1_2_TypeInfo);
    FUN_031f20f4(Oculus_Platform_Request_TypeInfo);
    FUN_031f20f4(System_Threading_OSSpecificSynchronizationContext_InvocationContext_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_0_1_3_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_0_5_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_0_0_TypeInfo);
    FUN_031f20f4(OVRAnchor_Tracker_TypeInfo);
    FUN_031f20f4(OVRPlugin_MeshType_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_100_0_TypeInfo);
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_IsisMtt_Ocsp_RequestedCertificate_TypeInfo
                );
    DAT_07a5a953 = 1;
  }
  puVar11 = OVRPlugin_OVRP_1_0_0_TypeInfo;
  puVar10 = OVRPlugin_OVRP_0_5_0_TypeInfo;
  puVar9 = OVRPlugin_OVRP_0_1_3_TypeInfo;
  puVar8 = OVRPlugin_OVRP_0_1_2_TypeInfo;
  puVar7 = OVRPlugin_OVRP_0_1_1_TypeInfo;
  puVar6 = OVRPlugin_OVRP_0_1_0_TypeInfo;
  puVar3 = System_Threading_OSSpecificSynchronizationContext_InvocationContext_TypeInfo;
  puVar2 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_IsisMtt_Ocsp_RequestedCertificate_TypeInfo
  ;
  local_64 = 0x40;
  uVar12 = thunk_FUN_0322ed78(*(undefined8 *)(PTR_DAT_0759b388 + 0x48),&local_64);
  uVar12 = FUN_05c7ecc4(*(undefined8 *)puVar5,uVar12,0);
  **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar12;
  thunk_FUN_0329bf60(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar12);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_07018ad8(auStack_198,*(undefined8 *)puVar9,0);
  memcpy(auStack_100,auStack_198,0x98);
  lVar13 = *(long *)puVar4;
  memcpy((void *)(*(long *)(lVar13 + 0xb8) + 8),auStack_100,0x98);
  thunk_FUN_0329bf60(*(long *)(lVar13 + 0xb8) + 0x10,0);
  FUN_07018ad8(auStack_230,*(undefined8 *)puVar11,0);
  memcpy(auStack_198,auStack_230,0x98);
  lVar13 = *(long *)puVar4;
  memcpy((void *)(*(long *)(lVar13 + 0xb8) + 0xa0),auStack_198,0x98);
  thunk_FUN_0329bf60(*(long *)(lVar13 + 0xb8) + 0xa8,0);
  lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar13 + 0x138) = *(undefined8 *)puVar8;
  thunk_FUN_0329bf60(lVar13 + 0x138);
  uVar12 = FUN_05c7e0d4(*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x138),
                        *(undefined8 *)puVar2,0);
  lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar13 + 0x140) = uVar12;
  thunk_FUN_0329bf60(lVar13 + 0x140);
  lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar13 + 0x148) = *(undefined8 *)puVar6;
  thunk_FUN_0329bf60(lVar13 + 0x148);
  uVar12 = FUN_05c7e0d4(*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x148),
                        *(undefined8 *)puVar10,0);
  lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar13 + 0x150) = uVar12;
  thunk_FUN_0329bf60(lVar13 + 0x150);
  uVar12 = FUN_05c7e0d4(*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x150),
                        *(undefined8 *)puVar3,0);
  lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar13 + 0x158) = uVar12;
  thunk_FUN_0329bf60(lVar13 + 0x158);
  uVar12 = FUN_05c7e0d4(*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x150),
                        *(undefined8 *)puVar7,0);
  lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar13 + 0x160) = uVar12;
  thunk_FUN_0329bf60(lVar13 + 0x160);
  uVar12 = FUN_05c7e0d4(*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x150),
                        *(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo,0);
                    /* try { // try from 070c7a5c to 071c7cf3 has its CatchHandler @ 070c7a5c
                       catch() { ... } // from try @ 070c7a5c with catch @ 070c7a5c
                       catch() { ... } // from try @ 070c7d00 with catch @ 070c7a5c
                       catch() { ... } // from try @ 070c7dc4 with catch @ 070c7a5c */
  lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar13 + 0x168) = uVar12;
  thunk_FUN_0329bf60(lVar13 + 0x168);
  uVar12 = FUN_05c7e0d4(*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x150),
                        *(undefined8 *)OVRAnchor_Tracker_TypeInfo,0);
  lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar13 + 0x170) = uVar12;
  thunk_FUN_0329bf60(lVar13 + 0x170);
  uVar12 = FUN_05c7e0d4(*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x148),
                        *(undefined8 *)Oculus_Platform_Request_TypeInfo,0);
  lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar13 + 0x178) = uVar12;
  thunk_FUN_0329bf60(lVar13 + 0x178);
  return;
}


