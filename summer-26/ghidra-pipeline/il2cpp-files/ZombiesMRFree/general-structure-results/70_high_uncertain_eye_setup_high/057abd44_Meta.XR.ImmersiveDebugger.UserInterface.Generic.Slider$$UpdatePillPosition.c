/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$UpdatePillPosition
ENTRY_POINT: 057abd44
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__UpdatePillPosition(void)

{
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  
  FUN_02fe925c(PTR_DAT_06f9afa0);
  FUN_02fe925c(PTR_DAT_06f9cf50);
  FUN_02fe925c(PTR_DAT_06f9cef0);
  *(undefined1 *)(unaff_x28 + 0x1cb) = 1;
  thunk_FUN_0301043c(*unaff_x27);
  thunk_FUN_0301043c(*unaff_x26,&stack0x00000048);
  thunk_FUN_0301043c(*unaff_x26,&stack0x00000038);
  thunk_FUN_0301043c(*unaff_x25);
  thunk_FUN_0301043c(*unaff_x24,&stack0x00000034);
  thunk_FUN_02fdfff0();
  return;
}


