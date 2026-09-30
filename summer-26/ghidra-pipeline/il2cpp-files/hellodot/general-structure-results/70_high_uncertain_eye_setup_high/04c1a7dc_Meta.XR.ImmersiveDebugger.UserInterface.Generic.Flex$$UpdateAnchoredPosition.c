/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$UpdateAnchoredPosition
ENTRY_POINT: 04c1a7dc
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__UpdateAnchoredPosition(void)

{
  undefined *puVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc558);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e3768);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5838);
  *(undefined1 *)(unaff_x21 + 0x635) = 1;
  puVar1 = PTR_DAT_065dc558;
  if (unaff_x20 != 0) {
    if (*(int *)(*(long *)PTR_DAT_065dc0d8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04ef45ec(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*(long *)puVar1);
    }
    FUN_04f16928();
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
    FUN_03c82c6c();
    return;
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}


