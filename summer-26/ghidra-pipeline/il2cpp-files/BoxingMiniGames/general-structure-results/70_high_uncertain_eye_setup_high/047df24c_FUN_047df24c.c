/*
FUNCTION_NAME: FUN_047df24c
ENTRY_POINT: 047df24c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_047df24c(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  lVar1 = FUN_047df4a0(param_1,param_2,*(undefined8 *)(lVar1 + 0x38));
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = param_3;
    thunk_FUN_036b7ad0((undefined8 *)(lVar1 + 0x18),param_3);
    return;
  }
  Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Equals
            (param_1,param_2 & 0xffffffff,param_3,
             *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x50));
  return;
}


