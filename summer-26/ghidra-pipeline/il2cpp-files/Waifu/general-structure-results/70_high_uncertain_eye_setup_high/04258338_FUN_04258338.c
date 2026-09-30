/*
FUNCTION_NAME: FUN_04258338
ENTRY_POINT: 04258338
PROGRAM: Waifu-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_04258338(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
              ((long *)(param_1 + 0x10),
               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


