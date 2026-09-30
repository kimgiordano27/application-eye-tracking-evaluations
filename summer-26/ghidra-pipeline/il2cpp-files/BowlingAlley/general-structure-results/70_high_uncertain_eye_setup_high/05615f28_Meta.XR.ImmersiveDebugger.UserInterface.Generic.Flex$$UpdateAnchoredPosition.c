/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$UpdateAnchoredPosition
ENTRY_POINT: 05615f28
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__UpdateAnchoredPosition
               (undefined8 param_1,long param_2)

{
  int in_w8;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x29;
  
  if (-1 < in_w8) {
    unaff_x19 = (undefined8 *)*unaff_x19;
  }
  *(undefined8 **)(unaff_x29 + -0x10) = unaff_x19;
  (**(code **)(param_2 + 0x10))();
  if (*(long *)(unaff_x21 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


