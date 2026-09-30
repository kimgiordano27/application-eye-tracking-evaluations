/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 051b9ad4
PROGRAM: hellodot-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8
OVRPlugin__RecenterTrackingOrigin
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8)

{
  int in_w8;
  ulong *unaff_x19;
  float *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_s16;
  float fVar5;
  float in_s17;
  float in_s18;
  float in_s19;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 in_stack_000000a8;
  
  fVar5 = in_s16 * param_3;
  fVar4 = in_s16 * param_6 + in_s18 + in_s19;
  if (in_w8 == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    *(undefined1 *)(unaff_x24 + 0x231) = 1;
    param_1 = *unaff_x22;
    param_2 = unaff_x22[1];
    param_3 = unaff_x22[2];
    param_4 = unaff_x22[3];
    param_5 = unaff_x22[4];
    param_6 = unaff_x22[5];
  }
  fVar2 = ABS(fVar4);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = **(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8) * 8.0;
  fVar1 = fVar2 * DAT_013de160;
  if (fVar2 * DAT_013de160 <= fVar3) {
    fVar1 = fVar3;
  }
  fVar2 = 0.0;
  if (fVar1 <= ABS(0.0 - fVar4)) {
    fVar2 = (in_s17 - (fVar5 + param_7 + param_8)) / fVar4;
  }
  FUN_051b9e20(param_1 + param_4 * fVar2,param_2 + param_5 * fVar2,param_3 + fVar2 * param_6);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_05effcac(0,0,0,&stack0x00000040,0);
  FUN_051b9c70();
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000 & 0xffffffff00000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return 1;
}


