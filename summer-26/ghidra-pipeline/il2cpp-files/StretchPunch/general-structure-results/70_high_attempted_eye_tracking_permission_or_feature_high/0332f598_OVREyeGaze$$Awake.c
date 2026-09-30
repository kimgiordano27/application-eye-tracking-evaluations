/*
FUNCTION_NAME: OVREyeGaze$$Awake
ENTRY_POINT: 0332f598
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Awake(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000008;
  
  uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x68);
  if (*(int *)(**(long **)(param_1 + 0x8d0) + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_03331898(uVar4,uVar5,0,(long)&stack0x00000008 + 4,0);
  puVar2 = StringLiteral_4422;
  iVar1 = unaff_w20;
  if (in_stack_00000008._4_4_ == 0) {
    while( true ) {
      if (iVar1 < 1) {
        *(long *)(unaff_x19 + 0x68) = *(long *)(unaff_x19 + 0x68) + (long)unaff_w20;
        return;
      }
      uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      iVar3 = FUN_0333173c(uVar4);
      if (in_stack_00000008._4_4_ != 0) break;
      iVar1 = iVar1 - iVar3;
    }
  }
  uVar4 = FUN_0332deb0();
  thunk_FUN_01dd295c(StringLiteral_4422);
  FUN_01a94a5c();
  uVar4 = FUN_03330b74(uVar4,in_stack_00000008._4_4_,0);
  uVar5 = thunk_FUN_01dd295c(StringLiteral_6800);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar4,uVar5);
}


