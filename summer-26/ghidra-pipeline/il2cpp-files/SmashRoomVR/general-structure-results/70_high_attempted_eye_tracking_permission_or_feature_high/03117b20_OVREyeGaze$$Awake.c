/*
FUNCTION_NAME: OVREyeGaze$$Awake
ENTRY_POINT: 03117b20
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Awake(long param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  
  if (param_1 != 0) {
    uVar1 = FUN_0391c27c(param_1,0);
    FUN_03136ee0(&stack0x00000010,uVar1,0,0);
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000024;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
    unaff_x19[1] = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    *unaff_x19 = in_stack_00000010;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


