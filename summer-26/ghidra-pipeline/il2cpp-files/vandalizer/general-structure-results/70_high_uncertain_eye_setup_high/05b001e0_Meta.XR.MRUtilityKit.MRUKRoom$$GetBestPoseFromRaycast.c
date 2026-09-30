/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetBestPoseFromRaycast
ENTRY_POINT: 05b001e0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_MRUKRoom__GetBestPoseFromRaycast(long *param_1,long param_2)

{
  if (*(int *)((long)param_1 + 0xc) != 0) {
    if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(int *)((long)param_1 + 0xc) != *(int *)(*param_1 + 0x20) + 1) goto LAB_05b00214;
  }
  FUN_05e22a2c(0);
LAB_05b00214:
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  return param_1[2];
}


