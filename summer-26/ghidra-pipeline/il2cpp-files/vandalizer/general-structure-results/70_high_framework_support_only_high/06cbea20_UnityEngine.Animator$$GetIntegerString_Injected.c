/*
FUNCTION_NAME: UnityEngine.Animator$$GetIntegerString_Injected
ENTRY_POINT: 06cbea20
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_6
*/


void UnityEngine_Animator__GetIntegerString_Injected(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  puVar4 = System_Collections_Generic_List<SpriteGlyph>_TypeInfo;
  puVar2 = System_Collections_Generic_List<PskIdentity>_TypeInfo;
  puVar1 = System_Collections_Generic_List<ProtocolVersion>_TypeInfo;
  if ((DAT_07a5096c & 1) == 0) {
    FUN_031f20f4(System_Collections_Generic_HashSet<XRLoader>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<X509Crl>_TypeInfo);
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
    DAT_07a5096c = 1;
  }
  lVar5 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  *(undefined4 *)(lVar5 + 0x14) = 0x3f800000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x3f800000;
  FUN_05e44034(lVar5,0);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  *(undefined1 *)(lVar5 + 0x18) = 1;
  uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
  FUN_06cb8048(uVar6,lVar5);
  *(undefined8 *)(param_1 + 0x138) = uVar6;
  thunk_FUN_0329bf60(param_1 + 0x138,uVar6);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar5 = *(long *)puVar4;
  }
  puVar2 = System_Collections_Generic_HashSet<X509V2AttributeCertificate>_TypeInfo;
  puVar1 = System_Collections_Generic_HashSet<X509Name>_TypeInfo;
  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar5 = *(long *)puVar4;
    }
    uVar6 = **(undefined8 **)(lVar5 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)System_Collections_Generic_HashSet<X509Crl>_TypeInfo);
    FUN_042cbcbc(lVar8,uVar6,*(undefined8 *)System_Collections_Generic_List<Srp6Group>_TypeInfo,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar7 = lVar8;
    thunk_FUN_0329bf60(plVar7,lVar8);
  }
  uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_04601630(uVar6,lVar8,0,0,0,0,10000,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x140) = uVar6;
  thunk_FUN_0329bf60(param_1 + 0x140,uVar6);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar5 = *(long *)puVar4;
  }
  puVar3 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo;
  puVar1 = System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo;
  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar5 = *(long *)puVar4;
    }
    uVar6 = **(undefined8 **)(lVar5 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)System_Collections_Generic_HashSet<XRLoader>_TypeInfo)
    ;
    FUN_042cbcbc(lVar8,uVar6,*(undefined8 *)System_Collections_Generic_List<StackFrame>_TypeInfo,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    *plVar7 = lVar8;
    thunk_FUN_0329bf60(plVar7,lVar8);
  }
  uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_04601630(uVar6,lVar8,0,0,0,0,10000,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x148) = uVar6;
  thunk_FUN_0329bf60(param_1 + 0x148,uVar6);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06cd1334(param_1,0);
  return;
}


