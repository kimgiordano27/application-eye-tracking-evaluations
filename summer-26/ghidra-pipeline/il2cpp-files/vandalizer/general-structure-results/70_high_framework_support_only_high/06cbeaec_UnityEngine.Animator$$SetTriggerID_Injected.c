/*
FUNCTION_NAME: UnityEngine.Animator$$SetTriggerID_Injected
ENTRY_POINT: 06cbeaec
PROGRAM: vandalizer-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_4;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_2
*/


void UnityEngine_Animator__SetTriggerID_Injected(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x19;
  long lVar7;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  FUN_05e44034(param_1,0);
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  uVar4 = thunk_FUN_0322f148(*unaff_x21);
  FUN_06cb8048(uVar4,param_1);
  *(undefined8 *)(unaff_x19 + 0x138) = uVar4;
  thunk_FUN_0329bf60(unaff_x19 + 0x138,uVar4);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar5 = *unaff_x22;
  }
  puVar2 = System_Collections_Generic_HashSet<X509V2AttributeCertificate>_TypeInfo;
  puVar1 = System_Collections_Generic_HashSet<X509Name>_TypeInfo;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar5 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_0322f148(*(undefined8 *)System_Collections_Generic_HashSet<X509Crl>_TypeInfo);
    FUN_042cbcbc(lVar7,uVar4,*(undefined8 *)System_Collections_Generic_List<Srp6Group>_TypeInfo,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar6 = lVar7;
    thunk_FUN_0329bf60(plVar6,lVar7);
  }
  uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_04601630(uVar4,lVar7,0,0,0,0,10000,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x140) = uVar4;
  thunk_FUN_0329bf60(unaff_x19 + 0x140,uVar4);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar5 = *unaff_x22;
  }
  puVar3 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo;
  puVar1 = System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar5 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_0322f148(*(undefined8 *)System_Collections_Generic_HashSet<XRLoader>_TypeInfo)
    ;
    FUN_042cbcbc(lVar7,uVar4,*(undefined8 *)System_Collections_Generic_List<StackFrame>_TypeInfo,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar6 = lVar7;
    thunk_FUN_0329bf60(plVar6,lVar7);
  }
  uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_04601630(uVar4,lVar7,0,0,0,0,10000,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar4;
  thunk_FUN_0329bf60(unaff_x19 + 0x148,uVar4);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06cd1334();
  return;
}


