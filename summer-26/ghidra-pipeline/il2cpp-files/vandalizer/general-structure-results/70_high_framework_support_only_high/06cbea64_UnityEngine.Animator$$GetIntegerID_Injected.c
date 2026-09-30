/*
FUNCTION_NAME: UnityEngine.Animator$$GetIntegerID_Injected
ENTRY_POINT: 06cbea64
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_5
*/


void UnityEngine_Animator__GetIntegerID_Injected(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_031f20f4(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
  FUN_031f20f4(System_Collections_Generic_HashSet<X509V2AttributeCertificate>_TypeInfo);
  FUN_031f20f4(System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo);
  FUN_031f20f4(System_Collections_Generic_HashSet<X509Name>_TypeInfo);
  FUN_031f20f4(System_Collections_Generic_List<PskIdentity>_TypeInfo);
  FUN_031f20f4(System_Collections_Generic_List<ProtocolVersion>_TypeInfo);
  FUN_031f20f4(System_Collections_Generic_List<Srp6Group>_TypeInfo);
  FUN_031f20f4(System_Collections_Generic_List<StackFrame>_TypeInfo);
  FUN_031f20f4(System_Collections_Generic_List<SpriteGlyph>_TypeInfo);
  FUN_031f20f4(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x96c) = 1;
  lVar4 = thunk_FUN_0322f148(*unaff_x23);
  *(undefined4 *)(lVar4 + 0x14) = 0x3f800000;
  *(undefined4 *)(lVar4 + 0x1c) = 0x3f800000;
  FUN_05e44034(lVar4,0);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  *(undefined1 *)(lVar4 + 0x18) = 1;
  uVar5 = thunk_FUN_0322f148(*unaff_x21);
  FUN_06cb8048(uVar5,lVar4);
  *(undefined8 *)(unaff_x19 + 0x138) = uVar5;
  thunk_FUN_0329bf60(unaff_x19 + 0x138,uVar5);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar4 = *unaff_x22;
  }
  puVar2 = System_Collections_Generic_HashSet<X509V2AttributeCertificate>_TypeInfo;
  puVar1 = System_Collections_Generic_HashSet<X509Name>_TypeInfo;
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar4 = *unaff_x22;
    }
    uVar5 = **(undefined8 **)(lVar4 + 0xb8);
    lVar7 = thunk_FUN_0322f148(*(undefined8 *)System_Collections_Generic_HashSet<X509Crl>_TypeInfo);
    FUN_042cbcbc(lVar7,uVar5,*(undefined8 *)System_Collections_Generic_List<Srp6Group>_TypeInfo,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar6 = lVar7;
    thunk_FUN_0329bf60(plVar6,lVar7);
  }
  uVar5 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_04601630(uVar5,lVar7,0,0,0,0,10000,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x140) = uVar5;
  thunk_FUN_0329bf60(unaff_x19 + 0x140,uVar5);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar4 = *unaff_x22;
  }
  puVar3 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo;
  puVar1 = System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo;
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar4 = *unaff_x22;
    }
    uVar5 = **(undefined8 **)(lVar4 + 0xb8);
    lVar7 = thunk_FUN_0322f148(*(undefined8 *)System_Collections_Generic_HashSet<XRLoader>_TypeInfo)
    ;
    FUN_042cbcbc(lVar7,uVar5,*(undefined8 *)System_Collections_Generic_List<StackFrame>_TypeInfo,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar6 = lVar7;
    thunk_FUN_0329bf60(plVar6,lVar7);
  }
  uVar5 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_04601630(uVar5,lVar7,0,0,0,0,10000,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar5;
  thunk_FUN_0329bf60(unaff_x19 + 0x148,uVar5);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06cd1334();
  return;
}


