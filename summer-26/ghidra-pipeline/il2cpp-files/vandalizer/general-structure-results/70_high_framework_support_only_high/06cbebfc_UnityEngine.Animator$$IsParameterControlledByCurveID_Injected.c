/*
FUNCTION_NAME: UnityEngine.Animator$$IsParameterControlledByCurveID_Injected
ENTRY_POINT: 06cbebfc
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


void UnityEngine_Animator__IsParameterControlledByCurveID_Injected(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x19;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x22;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    param_1 = *unaff_x22;
  }
  puVar3 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo;
  puVar1 = System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo;
  lVar5 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
  if (lVar5 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      param_1 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(param_1 + 0xb8);
    lVar5 = thunk_FUN_0322f148(*(undefined8 *)System_Collections_Generic_HashSet<XRLoader>_TypeInfo)
    ;
    FUN_042cbcbc(lVar5,uVar6,*(undefined8 *)System_Collections_Generic_List<StackFrame>_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar4 = lVar5;
    thunk_FUN_0329bf60(plVar4,lVar5);
  }
  uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_04601630(uVar6,lVar5,0,0,0,0,10000,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar6;
  thunk_FUN_0329bf60(unaff_x19 + 0x148,uVar6);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06cd1334();
  return;
}


