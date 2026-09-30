/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations|36_0
ENTRY_POINT: 04c2e710
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ray_interaction;data_collection
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations_36_0
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  *(undefined1 *)(unaff_x23 + 0x6fb) = 1;
  puVar3 = PTR_DAT_065e61c8;
  puVar2 = PTR_DAT_065ce828;
  puVar1 = PTR_DAT_065ce818;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_0411bc18(&stack0x00000008,*(undefined8 *)puVar1);
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,0xffffffff);
  FUN_030a4d08((ulong)&stack0x00000020 | 8,&stack0x00000020,*(undefined8 *)puVar3);
  FUN_0411bc2c((ulong)&stack0x00000020 | 8,*(undefined8 *)puVar2);
  return;
}


