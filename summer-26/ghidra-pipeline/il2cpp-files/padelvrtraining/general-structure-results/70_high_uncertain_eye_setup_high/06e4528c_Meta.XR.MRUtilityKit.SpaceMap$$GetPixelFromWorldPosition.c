/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$GetPixelFromWorldPosition
ENTRY_POINT: 06e4528c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMap__GetPixelFromWorldPosition(long *param_1)

{
  if (*param_1 != 0) {
    if (*(int *)((long)param_1 + 0xc) != *(int *)(*param_1 + 0x2c)) {
      FUN_07199bdc(0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


