/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 03117ac0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_EyeTrackingEnabled
               (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  float fVar3;
  float fVar4;
  ulong uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  
  uVar1 = in_stack_00000030;
  fVar2 = fStack0000000000000038;
  uStack0000000000000000 = (ulong)*(uint *)(unaff_x20 + 0x28);
  uStack0000000000000008 = 0;
  if (*(int *)(**(long **)(param_1 + 0x2c0) + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar3 = (float)FUN_039274f8(&stack0x00000030,0);
  fVar4 = (float)uStack0000000000000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000044;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000040,uStack000000000000003c);
  unaff_x19[1] = CONCAT44(uStack000000000000003c,fVar2 + fVar4 * param_4);
  *unaff_x19 = CONCAT44((float)((ulong)uVar1 >> 0x20) + param_3 * fVar4,(float)uVar1 + fVar3 * fVar4
                       );
  return;
}


