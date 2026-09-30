/*
FUNCTION_NAME: OVRPlugin.EyeGazeState$$get_IsValid
ENTRY_POINT: 031652cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 95
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_EyeGazeState__get_IsValid(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  long *plVar2;
  long *unaff_x20;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 uStack0000000000000040;
  
  plVar2 = *(long **)(unaff_x19 + 0x700);
  uStack0000000000000040 = 0;
  uStack0000000000000028 = 0;
  uStack000000000000002c = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000038 = 0;
  uStack000000000000003c = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  thunk_FUN_01b4f09c(&stack0x00000020,0);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_03927648(0);
  uStack000000000000003c = uStack0000000000000010;
  uStack0000000000000034 = uStack0000000000000008;
  uStack000000000000002c = (undefined4)in_stack_00000000;
  uStack0000000000000030 = (undefined4)((ulong)in_stack_00000000 >> 0x20);
  puVar1 = *(undefined8 **)(*plVar2 + 0xb8);
  puVar1[4] = uStack0000000000000014;
  puVar1[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
  *puVar1 = uStack0000000000000020;
  puVar1[3] = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  puVar1[2] = CONCAT44(uStack0000000000000008,uStack0000000000000030);
  thunk_FUN_01b4f09c(*(undefined8 *)(*plVar2 + 0xb8),0);
  return;
}


