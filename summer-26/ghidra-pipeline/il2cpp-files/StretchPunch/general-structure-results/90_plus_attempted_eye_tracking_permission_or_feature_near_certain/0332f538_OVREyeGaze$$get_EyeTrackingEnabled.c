/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 0332f538
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_EyeTrackingEnabled
               (ulong param_1,long *param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long unaff_x23;
  long lVar8;
  long lVar9;
  int iStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_4422);
    *(undefined1 *)(unaff_x23 + 0x460) = 1;
  }
  iStack000000000000000c = 0;
  if (*(int *)((long)param_2 + 0x5c) < param_5) {
    FUN_0332e5f0(param_2);
    uVar4 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    puVar1 = StringLiteral_4422;
    iVar7 = param_5;
    if (((uVar4 & 1) != 0) && ((char)param_2[8] == '\0')) {
      lVar8 = param_2[7];
      lVar9 = param_2[0xd];
      if (*(int *)(*(long *)StringLiteral_4422 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_03331898(lVar8,lVar9,0,&stack0x0000000c,0);
      puVar1 = StringLiteral_4422;
      if (iStack000000000000000c != 0) {
LAB_0332f694:
        uVar5 = FUN_0332deb0(param_2,param_2[6]);
        iVar7 = iStack000000000000000c;
        thunk_FUN_01dd295c(StringLiteral_4422);
        FUN_01a94a5c();
        uVar5 = FUN_03330b74(uVar5,iVar7,0);
        uVar6 = thunk_FUN_01dd295c(StringLiteral_6800);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar5,uVar6);
      }
    }
    for (; puVar2 = StringLiteral_4422, 0 < iVar7; iVar7 = iVar7 - iVar3) {
      lVar8 = *(long *)StringLiteral_4422;
      lVar9 = param_2[7];
      StringLiteral_4422 = puVar1;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      iVar3 = FUN_0333173c(lVar9,param_3,param_4,iVar7,&stack0x0000000c,0);
      if (iStack000000000000000c != 0) goto LAB_0332f694;
      param_4 = iVar3 + param_4;
      puVar1 = StringLiteral_4422;
      StringLiteral_4422 = puVar2;
    }
    StringLiteral_4422 = puVar1;
    param_2[0xd] = param_2[0xd] + (long)param_5;
  }
  else if (0 < param_5) {
    iVar7 = 0;
    do {
      iVar3 = FUN_0332f6e4(param_2,param_3,iVar7 + param_4,param_5);
      param_5 = param_5 - iVar3;
      if (param_5 == 0) {
        return;
      }
      iVar7 = iVar3 + iVar7;
      FUN_0332e5f0(param_2);
    } while (0 < param_5);
  }
  return;
}


