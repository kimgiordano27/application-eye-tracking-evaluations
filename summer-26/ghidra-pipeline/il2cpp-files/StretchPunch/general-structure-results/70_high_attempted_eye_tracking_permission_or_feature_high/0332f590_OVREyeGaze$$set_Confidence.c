/*
FUNCTION_NAME: OVREyeGaze$$set_Confidence
ENTRY_POINT: 0332f590
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_6;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__set_Confidence(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  int in_w8;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000008;
  
  iVar1 = unaff_w20;
  puVar2 = StringLiteral_4422;
  if (in_w8 == 0) {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x68);
    if (*(int *)(*(long *)StringLiteral_4422 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_03331898(uVar6,uVar7,0,(long)&stack0x00000008 + 4,0);
    puVar2 = StringLiteral_4422;
    if (in_stack_00000008._4_4_ != 0) goto LAB_0332f694;
  }
  while( true ) {
    puVar3 = StringLiteral_4422;
    if (iVar1 < 1) {
      StringLiteral_4422 = puVar2;
      *(long *)(unaff_x19 + 0x68) = *(long *)(unaff_x19 + 0x68) + (long)unaff_w20;
      return;
    }
    lVar5 = *(long *)StringLiteral_4422;
    uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
    StringLiteral_4422 = puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    iVar4 = FUN_0333173c(uVar6);
    if (in_stack_00000008._4_4_ != 0) break;
    iVar1 = iVar1 - iVar4;
    puVar2 = StringLiteral_4422;
    StringLiteral_4422 = puVar3;
  }
LAB_0332f694:
  uVar6 = FUN_0332deb0();
  thunk_FUN_01dd295c(StringLiteral_4422);
  FUN_01a94a5c();
  uVar6 = FUN_03330b74(uVar6,in_stack_00000008._4_4_,0);
  uVar7 = thunk_FUN_01dd295c(StringLiteral_6800);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar6,uVar7);
}


