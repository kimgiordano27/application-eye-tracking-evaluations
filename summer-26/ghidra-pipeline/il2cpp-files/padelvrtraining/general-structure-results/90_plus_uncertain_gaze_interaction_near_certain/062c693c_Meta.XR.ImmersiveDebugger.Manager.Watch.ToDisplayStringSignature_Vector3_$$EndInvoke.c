/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$EndInvoke
ENTRY_POINT: 062c693c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>__EndInvoke(void)

{
  long lVar1;
  int unaff_w19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 uVar2;
  
  lVar1 = FUN_03d8f26c();
  uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x48);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03db619c(*unaff_x22);
  }
  uVar2 = FUN_07186ef4(uVar2,0);
  FUN_07199fc4(uVar2,0);
  if (unaff_w19 < 0) {
    FUN_0719919c(0);
  }
  *unaff_x21 = unaff_x20;
  *(int *)(unaff_x21 + 1) = unaff_w19;
  return;
}


