/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorRay
ENTRY_POINT: 0729364c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;functionality_gaze_interaction_hits_4
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetCursorRay(void)

{
  long lVar1;
  undefined4 *unaff_x19;
  
  __cxa_end_catch();
  *(undefined8 *)(unaff_x19 + 0xc) = 0;
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  *unaff_x19 = 0xfffffffe;
  lVar1 = thunk_FUN_040dedf8(PTR_DAT_09285a68);
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_07590860(unaff_x19 + 2);
  return;
}


