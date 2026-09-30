/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$GetHashCode
ENTRY_POINT: 03cc4eec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetHashCode
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  uVar1 = FUN_0360f410(*(undefined8 *)(param_1 + 0x10),param_2,0,*(undefined4 *)(param_1 + 0x18),
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                      0x48) + 0x20) + 0xc0) + 0x50));
  if (-1 < (int)uVar1) {
    FUN_03cc50ec(param_1,uVar1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90));
  }
  return ~uVar1 >> 0x1f;
}


