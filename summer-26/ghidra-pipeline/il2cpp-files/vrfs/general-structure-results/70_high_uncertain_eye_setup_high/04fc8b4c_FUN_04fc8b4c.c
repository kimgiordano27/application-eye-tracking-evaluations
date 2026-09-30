/*
FUNCTION_NAME: FUN_04fc8b4c
ENTRY_POINT: 04fc8b4c
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_04fc8b4c(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
              (*(long *)(param_1 + 0x30),param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


