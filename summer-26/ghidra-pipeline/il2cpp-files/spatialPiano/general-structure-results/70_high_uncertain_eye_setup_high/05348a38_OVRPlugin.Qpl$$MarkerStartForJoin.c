/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStartForJoin
ENTRY_POINT: 05348a38
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerStartForJoin(undefined1 param_1 [16],long param_2)

{
  undefined4 in_w8;
  undefined8 in_x9;
  long unaff_x19;
  long unaff_x20;
  int iVar1;
  
  *(undefined4 *)(param_2 + 0x38) = in_w8;
  *(undefined8 *)(param_2 + 0x30) = in_x9;
  *(long *)(param_2 + 0x28) = param_1._8_8_;
  *(long *)(param_2 + 0x20) = param_1._0_8_;
  FUN_0534867c();
  *(undefined4 *)(unaff_x20 + 0x3c) = *(undefined4 *)(unaff_x19 + 0x3c);
  FUN_0534867c();
  iVar1 = 0;
  do {
    FUN_053485f0(&stack0x00000004);
    FUN_05348630();
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x1a);
  return;
}


