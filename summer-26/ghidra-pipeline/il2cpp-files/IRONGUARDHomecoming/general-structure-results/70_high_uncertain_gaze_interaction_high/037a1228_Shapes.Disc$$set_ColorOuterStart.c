/*
FUNCTION_NAME: Shapes.Disc$$set_ColorOuterStart
ENTRY_POINT: 037a1228
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_2
*/


void Shapes_Disc__set_ColorOuterStart(undefined8 param_1,long param_2)

{
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  char *in_stack_00000020;
  undefined8 in_stack_00000028;
  char *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined1 uStack000000000000004c;
  
  if (DAT_04836f60 == (code *)0x0) {
    in_stack_00000020 = "OVRPlugin";
    in_stack_00000028 = 9;
    in_stack_00000030 = "ovrp_Media_SetCustomCameraAnchorPose";
    in_stack_00000038 = 0x24;
    uStack0000000000000048 = 0x24;
    in_stack_00000040 = DAT_00c8d6e0;
    uStack000000000000004c = 0;
    DAT_04836f60 = (code *)thunk_FUN_01f11a88(&stack0x00000020);
  }
  uStack0000000000000014 = *(undefined8 *)(param_2 + 0x14);
  uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  (*DAT_04836f60)(param_1);
  return;
}


