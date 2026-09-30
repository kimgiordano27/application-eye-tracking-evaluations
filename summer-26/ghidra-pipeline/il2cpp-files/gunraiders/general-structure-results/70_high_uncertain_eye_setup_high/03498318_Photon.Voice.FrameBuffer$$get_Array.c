/*
FUNCTION_NAME: Photon.Voice.FrameBuffer$$get_Array
ENTRY_POINT: 03498318
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Photon_Voice_FrameBuffer__get_Array(code *param_1)

{
  long unaff_x23;
  undefined4 unaff_w24;
  long unaff_x25;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  char *in_stack_00000020;
  undefined8 in_stack_00000028;
  char *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined1 uStack000000000000004c;
  
  if (param_1 == (code *)0x0) {
    in_stack_00000020 = "OVRPlugin";
    in_stack_00000028 = 9;
    in_stack_00000030 = "ovrp_SetOverlayQuad3";
    in_stack_00000038 = 0x14;
    uStack0000000000000048 = 0x48;
    in_stack_00000040 = DAT_00b91518;
    uStack000000000000004c = 0;
    param_1 = (code *)thunk_FUN_01c49924(&stack0x00000020);
    *(code **)(unaff_x25 + 0x940) = param_1;
  }
  uStack0000000000000014 = *(undefined8 *)(unaff_x23 + 0x14);
  uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(unaff_x23 + 8) >> 0x20);
  (*param_1)(unaff_w24);
  return;
}


