/*
FUNCTION_NAME: FUN_06cd0f0c
ENTRY_POINT: 06cd0f0c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 131
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4;functionality_possible_biometrics_hits_4
*/


void FUN_06cd0f0c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  puVar8 = 
  System_Collections_Generic_List<CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder>_TypeInfo
  ;
  puVar7 = System_Collections_Generic_List<CmsSignedDataGenerator_SignerInf>_TypeInfo;
  puVar6 = System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_TypeInfo;
  puVar5 = System_Collections_Generic_List<CardView_PaintableObject>_TypeInfo;
  puVar4 = System_Collections_Generic_List<XRSessionSubsystemDescriptor>_TypeInfo;
  puVar3 = System_Collections_Generic_IEnumerator<InputBinding>_TypeInfo;
  puVar2 = Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_TypeInfo;
  puVar1 = 
  UnityEngine_XR_ARFoundation_VisualScripting_GetTrackablesUnit<ARTrackedObjectManager,_XRObjectTrackingSubsystem,_XRObjectTrackingSubsystemDescriptor,_XRObjectTrackingSubsystem_Provider,_XRTrackedObject,_ARTrackedObject>_TypeInfo
  ;
                    /* try { // try from 06cd0f18 to 06dd0f23 has its CatchHandler @ 06cd1f4c */
                    /* try { // try from 06cd0f40 to 06dd0f43 has its CatchHandler @ 06cd1eec */
                    /* try { // try from 06cd0f44 to 06dd0f4f has its CatchHandler @ 06cd1fec */
                    /* try { // try from 06cd0f60 to 06dd0f67 has its CatchHandler @ 06cd1f9c */
  if ((DAT_07a50a0e & 1) == 0) {
    FUN_031f20f4(System_Collections_Generic_HashSet<XRLoader>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<X509Crl>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<X509V2AttributeCertificate>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<X509Name>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_TypeInfo);
    FUN_031f20f4(
                System_Collections_Generic_List<CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder>_TypeInfo
                );
    FUN_031f20f4(System_Collections_Generic_List<CardView_PaintableObject>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_List<CmsSignedDataGenerator_SignerInf>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_List<CreationContext_AttributeOverrideRange>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_List<Data_AnchorData>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_List<Data_RoomData>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_List<XRSessionSubsystemDescriptor>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerator<InputBinding>_TypeInfo);
    FUN_031f20f4(
                UnityEngine_XR_ARFoundation_VisualScripting_GetTrackablesUnit<ARTrackedObjectManager,_XRObjectTrackingSubsystem,_XRObjectTrackingSubsystemDescriptor,_XRObjectTrackingSubsystem_Provider,_XRTrackedObject,_ARTrackedObject>_TypeInfo
                );
    FUN_031f20f4(Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_TypeInfo);
    DAT_07a50a0e = 1;
  }
  uVar9 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  FUN_06d2c868(uVar9,*(undefined8 *)puVar1,0,0,2,0);
  *(undefined8 *)(param_1 + 0x130) = uVar9;
  thunk_FUN_0329bf60(param_1 + 0x130,uVar9);
  uVar9 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  FUN_06d2c868(uVar9,*(undefined8 *)puVar2,0,0,2,0);
  *(undefined8 *)(param_1 + 0x138) = uVar9;
  thunk_FUN_0329bf60(param_1 + 0x138,uVar9);
  *(undefined4 *)(param_1 + 0x140) = 1;
  *(undefined1 *)(param_1 + 0x14c) = 1;
  uVar9 = thunk_FUN_0322f148(*(undefined8 *)puVar5);
  FUN_047aec0c(uVar9,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x150) = uVar9;
  thunk_FUN_0329bf60(param_1 + 0x150,uVar9);
  uVar9 = thunk_FUN_0322f148(*(undefined8 *)puVar7);
  FUN_047aec0c(uVar9,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x158) = uVar9;
  thunk_FUN_0329bf60(param_1 + 0x158,uVar9);
  lVar10 = *(long *)puVar4;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar10 = *(long *)puVar4;
  }
  puVar2 = System_Collections_Generic_HashSet<X509V2AttributeCertificate>_TypeInfo;
  puVar1 = System_Collections_Generic_HashSet<X509Name>_TypeInfo;
  lVar12 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
  if (lVar12 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar10 = *(long *)puVar4;
    }
    uVar9 = **(undefined8 **)(lVar10 + 0xb8);
    lVar12 = thunk_FUN_0322f148(*(undefined8 *)System_Collections_Generic_HashSet<X509Crl>_TypeInfo)
    ;
    FUN_042cbcbc(lVar12,uVar9,
                 *(undefined8 *)System_Collections_Generic_List<Data_AnchorData>_TypeInfo,0);
    plVar11 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
    *plVar11 = lVar12;
    thunk_FUN_0329bf60(plVar11,lVar12);
  }
  uVar9 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_04601630(uVar9,lVar12,0,0,0,0,10000,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x160) = uVar9;
  thunk_FUN_0329bf60(param_1 + 0x160,uVar9);
  lVar10 = *(long *)puVar4;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar10 = *(long *)puVar4;
  }
  puVar5 = System_Collections_Generic_List<CreationContext_AttributeOverrideRange>_TypeInfo;
  puVar3 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo;
  puVar1 = System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo;
  lVar12 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x30);
  if (lVar12 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar10 = *(long *)puVar4;
    }
    uVar9 = **(undefined8 **)(lVar10 + 0xb8);
    lVar12 = thunk_FUN_0322f148(*(undefined8 *)System_Collections_Generic_HashSet<XRLoader>_TypeInfo
                               );
    FUN_042cbcbc(lVar12,uVar9,*(undefined8 *)System_Collections_Generic_List<Data_RoomData>_TypeInfo
                 ,0);
    plVar11 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
    *plVar11 = lVar12;
    thunk_FUN_0329bf60(plVar11,lVar12);
  }
  uVar9 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_04601630(uVar9,lVar12,0,0,0,0,10000,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x168) = uVar9;
  thunk_FUN_0329bf60(param_1 + 0x168,uVar9);
  uVar9 = thunk_FUN_0322f148(*(undefined8 *)puVar5);
  FUN_05e44034(uVar9,0);
  *(undefined8 *)(param_1 + 0x170) = uVar9;
  thunk_FUN_0329bf60(param_1 + 0x170,uVar9);
  uVar9 = thunk_FUN_0322f148(*(undefined8 *)puVar5);
  FUN_05e44034(uVar9,0);
  *(undefined8 *)(param_1 + 0x178) = uVar9;
  thunk_FUN_0329bf60(param_1 + 0x178,uVar9);
  *(undefined1 *)(param_1 + 0x210) = 1;
  *(undefined1 *)(param_1 + 600) = 1;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06cd1334(param_1);
  return;
}


