/*
FUNCTION_NAME: FUN_03792ed4
ENTRY_POINT: 03792ed4
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_03792ed4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_3 + 0x38);
  if (lVar5 == 0) {
    FUN_02eea7c4(param_3);
    lVar5 = *(long *)(param_3 + 0x38);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Qpl_Annotation>
                    (*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(lVar5 + 8));
  lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02eea768(lVar5);
  }
  uVar4 = thunk_FUN_02ef1808(lVar5);
  FUN_049835cc(uVar4,uVar1,uVar2,uVar3,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20));
  return uVar4;
}


