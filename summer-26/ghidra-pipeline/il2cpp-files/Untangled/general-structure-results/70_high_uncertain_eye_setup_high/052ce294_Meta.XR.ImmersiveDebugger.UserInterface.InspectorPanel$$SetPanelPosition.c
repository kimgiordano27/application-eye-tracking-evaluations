/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$SetPanelPosition
ENTRY_POINT: 052ce294
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__SetPanelPosition(void)

{
  long in_x9;
  long in_x10;
  long in_x11;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (*(long *)(in_x10 + in_x11 * 8 + -8) != in_x9) {
    unaff_x20 = 0;
  }
  FUN_05296a2c(&stack0x00000008,unaff_x20);
  if (unaff_x21 != 0) {
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    FUN_04758b40();
    *(undefined1 *)(unaff_x19 + 0x1bc) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


