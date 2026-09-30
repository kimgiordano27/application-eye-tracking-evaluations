/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$OnDestroy
ENTRY_POINT: 06dfe9ec
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__OnDestroy(void)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (unaff_x20 != 0) {
    uVar1 = *(undefined4 *)(unaff_x20 + 0x1c);
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    *(undefined8 *)(unaff_x19 + 0x30) = 0;
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    *(undefined4 *)(unaff_x19 + 0xc) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


