/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$UpdatePillPosition
ENTRY_POINT: 05619340
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__UpdatePillPosition
               (ulong param_1,long param_2)

{
  long *unaff_x19;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_032934b8();
  }
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x188))();
  if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


