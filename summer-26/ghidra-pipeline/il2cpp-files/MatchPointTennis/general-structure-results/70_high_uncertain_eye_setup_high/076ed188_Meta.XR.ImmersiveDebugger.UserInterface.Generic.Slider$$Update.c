/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$Update
ENTRY_POINT: 076ed188
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__Update(long param_1,long param_2)

{
  long unaff_x19;
  float fVar1;
  
  if (param_2 != 0) {
    fVar1 = *(float *)(unaff_x19 + 0x70) * (float)*(int *)(param_1 + 0x18) +
            *(float *)(unaff_x19 + 0xa4);
    if (fVar1 <= 1.0) {
      fVar1 = 1.0;
    }
    FUN_09538ff0(0,fVar1,param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


