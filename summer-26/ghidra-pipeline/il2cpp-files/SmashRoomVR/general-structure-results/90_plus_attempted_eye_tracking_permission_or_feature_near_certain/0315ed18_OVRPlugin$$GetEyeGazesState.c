/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 0315ed18
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin__GetEyeGazesState(void)

{
  long lVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s9;
  float unaff_s11;
  float unaff_s12;
  float fVar8;
  float unaff_s15;
  float fVar9;
  float fVar10;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  *(undefined1 *)(unaff_x23 + 0x260) = 1;
  lVar1 = *(long *)(*unaff_x21 + 0xb8);
  fStack000000000000001c = *(float *)(lVar1 + 0x48);
  fStack0000000000000018 = *(float *)(lVar1 + 0x4c);
  fVar7 = *(float *)(lVar1 + 0x50);
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25c = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar8 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    fVar2 = fStack000000000000001c * fVar8;
    fVar4 = fStack0000000000000018 * fVar8;
    fStack0000000000000004 = unaff_s11;
    if (DAT_03fed25e == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25e = '\x01';
    }
    fVar9 = unaff_s15 - (fStack0000000000000014 + fVar2);
    fStack0000000000000008 = fStack0000000000000008 - (fStack0000000000000010 + fVar4);
    fVar2 = unaff_s12 - (fStack000000000000000c + fVar7 * fVar8);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar2 = SQRT(fVar2 * fVar2 + fVar9 * fVar9 + fStack0000000000000008 * fStack0000000000000008);
    if ((0.0 < unaff_s9) && (fVar4 = (float)FUN_0315efb8(fVar2), unaff_s9 < fVar4)) {
      return 0;
    }
    fVar9 = fStack000000000000001c;
    fVar4 = fStack0000000000000018;
    if ((*(int *)(unaff_x20 + 0x28) == 1) ||
       ((fVar10 = fStack000000000000001c, fVar6 = fVar7, fVar5 = fStack0000000000000018,
        *(int *)(unaff_x20 + 0x28) != 2 && (fStack0000000000000004 <= fVar8)))) {
      fVar10 = -fStack000000000000001c;
      fVar6 = -fVar7;
      fVar5 = -fStack0000000000000018;
    }
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar1 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0);
      if ((*(long *)(unaff_x20 + 0x20) != 0) && (lVar1 != 0)) {
        fVar8 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
        fStack000000000000000c = fStack000000000000000c + fVar7 * fVar8;
        fStack0000000000000010 = fStack0000000000000010 + fVar4 * fVar8;
        uVar3 = FUN_03927438(fStack0000000000000014 + fVar9 * fVar8,lVar1,0);
        *unaff_x19 = uVar3;
        unaff_x19[1] = fStack0000000000000010;
        unaff_x19[2] = fStack000000000000000c;
        if ((*(long *)(unaff_x20 + 0x20) != 0) &&
           (lVar1 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0), lVar1 != 0)) {
          uVar3 = FUN_03929a40(fVar10,lVar1,0);
          unaff_x19[3] = uVar3;
          unaff_x19[4] = fVar5;
          unaff_x19[5] = fVar6;
          uVar3 = FUN_0315efb8(fVar2);
          unaff_x19[6] = uVar3;
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


