/*
FUNCTION_NAME: OVREyeGaze$$set_Confidence
ENTRY_POINT: 079abe04
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_6;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__set_Confidence(undefined1 param_1 [16],undefined1 param_2 [16])

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  long lVar5;
  
  *(long *)((long)unaff_x22 + 0x14) = param_1._8_8_;
  *(long *)((long)unaff_x22 + 0xc) = param_1._0_8_;
  unaff_x22[4] = param_2._8_8_;
  unaff_x22[3] = param_2._0_8_;
  lVar5 = *unaff_x20;
  lVar3 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  unaff_x22[6] = unaff_x20[1];
  unaff_x22[5] = lVar5;
  unaff_x22[7] = lVar3;
  *(int *)(unaff_x22 + 8) = (int)lVar2;
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = unaff_x21;
        thunk_FUN_040ec700(puVar4);
      }
      else {
        FUN_05c26d88();
      }
      if (*unaff_x22 != 0) {
        FUN_079e36b4(*unaff_x22,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


