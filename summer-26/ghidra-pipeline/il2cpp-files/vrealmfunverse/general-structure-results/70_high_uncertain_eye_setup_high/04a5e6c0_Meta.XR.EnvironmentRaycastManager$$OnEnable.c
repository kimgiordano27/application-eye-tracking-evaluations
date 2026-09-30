/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$OnEnable
ENTRY_POINT: 04a5e6c0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__OnEnable(void)

{
  int iVar1;
  int in_w8;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  iVar1 = 0;
  if (in_w8 != 0) {
    iVar1 = *(int *)(*(long *)(unaff_x20 + 0x18) + 0x18) / in_w8;
  }
  if (3 < iVar1) {
    FUN_04a60884();
    return;
  }
  return;
}


