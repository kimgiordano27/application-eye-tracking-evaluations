/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$SetPanelPosition
ENTRY_POINT: 01444f4c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__SetPanelPosition
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  
  uVar1 = FUN_0143ef88();
  if (unaff_x19 != 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
    uVar1 = FUN_01443ffc();
    FUN_014349f4(param_1,param_2,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


