/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$OnEnable
ENTRY_POINT: 06dfeae8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentRaycastManager__OnEnable(long param_1)

{
  int iVar1;
  long unaff_x19;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    *(undefined8 *)(unaff_x19 + 0x30) = 0;
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    *(int *)(unaff_x19 + 8) = iVar1 + 1;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


