/*
FUNCTION_NAME: UnityEngine.Animator$$ResetTriggerID_Injected
ENTRY_POINT: 06cbeb74
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_3;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_2
*/


void UnityEngine_Animator__ResetTriggerID_Injected(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long unaff_x19;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  uVar9 = **(undefined8 **)(param_1 + 0xb8);
  uVar4 = thunk_FUN_0322f148(*(undefined8 *)System_Collections_Generic_HashSet<X509Crl>_TypeInfo);
  FUN_042cbcbc(uVar4,uVar9,*(undefined8 *)System_Collections_Generic_List<Srp6Group>_TypeInfo,0);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  *puVar5 = uVar4;
  thunk_FUN_0329bf60(puVar5,uVar4);
  uVar9 = thunk_FUN_0322f148(*unaff_x24);
  FUN_04601630(uVar9,uVar4,0,0,0,0,10000,*unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x140) = uVar9;
  thunk_FUN_0329bf60(unaff_x19 + 0x140,uVar9);
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar6 = *unaff_x22;
  }
  puVar3 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo;
  puVar1 = System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar6 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)System_Collections_Generic_HashSet<XRLoader>_TypeInfo)
    ;
    FUN_042cbcbc(lVar8,uVar4,*(undefined8 *)System_Collections_Generic_List<StackFrame>_TypeInfo,0);
    plVar7 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar7 = lVar8;
    thunk_FUN_0329bf60(plVar7,lVar8);
  }
  uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_04601630(uVar4,lVar8,0,0,0,0,10000,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar4;
  thunk_FUN_0329bf60(unaff_x19 + 0x148,uVar4);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06cd1334();
  return;
}


