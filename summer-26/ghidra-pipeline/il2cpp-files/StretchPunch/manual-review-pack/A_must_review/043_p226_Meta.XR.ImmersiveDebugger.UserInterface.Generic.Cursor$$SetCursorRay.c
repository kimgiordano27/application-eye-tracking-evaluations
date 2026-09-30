/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorRay
ENTRY_POINT: 0315ae54
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 155
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetCursorRay
               (undefined8 param_1,int param_2)

{
  int unaff_w20;
  int unaff_w21;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_2 < 0) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  if (unaff_w20 < 0) {
                    /* try { // try from 0315aed8 to 0325b087 has its CatchHandler @ 0315aed8
                       catch() { ... } // from try @ 0315aed8 with catch @ 0315aed8
                       catch() { ... } // from try @ 0315b110 with catch @ 0315aed8
                       catch() { ... } // from try @ 0315b124 with catch @ 0315aed8
                       catch() { ... } // from try @ 0315b160 with catch @ 0315aed8
                       catch() { ... } // from try @ 0315b19c with catch @ 0315aed8 */
    FUN_033b3224(0x10,4,0);
  }
  if (*(int *)(unaff_x24 + 0x18) - unaff_w21 < unaff_w20) {
    FUN_033b2d60(0x17,0);
  }
  in_stack_00000030 = unaff_x23[2];
  in_stack_00000028 = unaff_x23[1];
  in_stack_00000020 = *unaff_x23;
  FUN_02039d10(*(undefined8 *)(unaff_x24 + 0x10),unaff_w21,unaff_w20,&stack0x00000020);
  return;
}


