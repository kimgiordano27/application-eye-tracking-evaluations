/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$EndInvoke
ENTRY_POINT: 05b668ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 131
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>__EndInvoke
               (undefined8 param_1)

{
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uStack0000000000000020;
  undefined1 *puStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  puStack0000000000000030 = &stack0x00000058;
  uStack0000000000000048 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000020 = param_1;
  if (unaff_x20 == 0) {
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    (**(code **)(unaff_x21 + 0x18))(*(undefined8 *)(unaff_x21 + 0x40));
  }
  else {
    if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    _uStack0000000000000038 = (**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x40));
  }
  FUN_0381f18c();
  return;
}


