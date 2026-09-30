/*
FUNCTION_NAME: OVREyeGaze$$.ctor
ENTRY_POINT: 03118438
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze___ctor(float param_1,float param_2,float param_3)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  float *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined4 unaff_w28;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined4 in_stack_00000018;
  
  while (unaff_x19 != 0) {
    fVar3 = *unaff_x20;
    fVar4 = unaff_x20[1];
    fVar5 = unaff_x20[2];
    lVar2 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar2 == 0) break;
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    fVar3 = fVar3 + param_1 * unaff_s8;
    fVar4 = param_2 * unaff_s8 + fVar4;
    fVar5 = param_3 * unaff_s8 + fVar5;
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (int)uVar1 * unaff_x24;
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(float *)(lVar2 + 0x20) = fVar3;
      *(float *)(lVar2 + 0x24) = fVar4;
      *(float *)(lVar2 + 0x28) = fVar5;
      *(float *)(lVar2 + 0x2c) = unaff_s10 * unaff_s8;
      *(undefined4 *)(lVar2 + 0x30) = unaff_w28;
    }
    else {
      fStack0000000000000008 = fVar3;
      fStack000000000000000c = fVar4;
      fStack0000000000000010 = fVar5;
      fStack0000000000000014 = unaff_s10 * unaff_s8;
      in_stack_00000018 = unaff_w28;
      FUN_02b1c4e4();
    }
    unaff_w23 = unaff_w23 + 1;
    if ((*(long *)(unaff_x22 + 0x28) == 0) ||
       (lVar2 = FUN_02b59714(*(long *)(unaff_x22 + 0x28),unaff_w21,*unaff_x25), lVar2 == 0)) break;
    if (*(int *)(lVar2 + 0x18) <= unaff_w23) {
      return;
    }
    if ((*(long *)(unaff_x22 + 0x28) == 0) ||
       (lVar2 = FUN_02b59714(*(long *)(unaff_x22 + 0x28),unaff_w21,*unaff_x25), lVar2 == 0)) break;
    FUN_02b1c148(&stack0x00000008,lVar2,unaff_w23,*unaff_x26);
    unaff_w28 = in_stack_00000018;
    unaff_s10 = fStack0000000000000014;
    param_2 = unaff_x20[4];
    param_3 = unaff_x20[5];
    param_1 = (float)FUN_03914a7c(unaff_x20[3],param_2,param_3,unaff_x20[6],
                                  unaff_s9 * fStack0000000000000008,
                                  unaff_s9 * fStack000000000000000c,
                                  unaff_s9 * fStack0000000000000010,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


