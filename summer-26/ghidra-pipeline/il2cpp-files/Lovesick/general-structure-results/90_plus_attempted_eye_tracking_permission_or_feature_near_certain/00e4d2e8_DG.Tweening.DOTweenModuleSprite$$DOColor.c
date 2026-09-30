/*
FUNCTION_NAME: DG.Tweening.DOTweenModuleSprite$$DOColor
ENTRY_POINT: 00e4d2e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_15;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void DG_Tweening_DOTweenModuleSprite__DOColor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long unaff_x19;
  int iVar7;
  undefined8 *unaff_x20;
  int iVar8;
  long unaff_x21;
  float fVar9;
  float fVar10;
  float fStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
  thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xd66) = 1;
  puVar2 = StringLiteral_4992;
  *(undefined8 *)(unaff_x19 + 0x158) = *unaff_x20;
  fVar9 = (float)FUN_00e37408();
  if ((fVar9 <= 0.0) || (*(int *)(unaff_x19 + 0x150) != 1)) {
    fVar9 = (float)FUN_00e37408();
    puVar1 = OVREyeGaze_TypeInfo;
    if ((fVar9 <= 0.0) || (1 < *(int *)(unaff_x19 + 0x150) - 3U)) {
LAB_00e4d548:
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        return;
      }
    }
    else {
                    /* try { // try from 00e4d38c to 00f4d397 has its CatchHandler @ 00e4d428 */
      if (*(long *)(unaff_x19 + 0x60) != 0) {
                    /* try { // try from 00e4d398 to 00f4d447 has its CatchHandler @ 00e4d358 */
        FUN_0132138c(*(long *)(unaff_x19 + 0x60),0,&stack0x00000008,
                     *(undefined8 *)OVREyeGaze_TypeInfo);
        lVar6 = *(long *)(unaff_x19 + 0x78);
        *(float *)(unaff_x19 + 0x358) = -fStack0000000000000008;
        if (lVar6 != 0) {
          iVar5 = 0;
          iVar7 = 0;
          do {
            if (*(int *)(lVar6 + 0x10) <= iVar7) goto LAB_00e4d548;
            lVar6 = *(long *)(unaff_x19 + 0x48);
            while( true ) {
              if (lVar6 == 0) goto LAB_00e4d594;
              iVar8 = iVar5 + 1;
              FUN_0132138c(lVar6,iVar7,&stack0x00000008,*(undefined8 *)puVar2);
              if (CONCAT44(uStack000000000000000c,fStack0000000000000008) == 0) goto LAB_00e4d594;
              if (*(float *)(unaff_x19 + 0x358) - *(float *)(unaff_x19 + 0x50c) <=
                  *(float *)(CONCAT44(uStack000000000000000c,fStack0000000000000008) + 0x48)) break;
              lVar6 = *(long *)(unaff_x19 + 0x60);
              if (lVar6 == 0) goto LAB_00e4d594;
              if (iVar8 < *(int *)(lVar6 + 0x18)) {
                    /* catch() { ... } // from try @ 00e4d38c with catch @ 00e4d428 */
                FUN_0132138c(lVar6,iVar8,&stack0x00000008,*(undefined8 *)puVar1);
                fVar9 = -fStack0000000000000008;
              }
              else {
                lVar6 = *(long *)(unaff_x19 + 0x58);
                if (lVar6 == 0) goto LAB_00e4d594;
                FUN_0132138c(lVar6,*(int *)(lVar6 + 0x18) + -1,&stack0x00000008,
                             *(undefined8 *)puVar1);
                fVar9 = 0.0 - fStack0000000000000008;
              }
              uVar3 = FUN_0269e56c(0);
              if (((uVar3 & 1) != 0) &&
                 (*(int *)(unaff_x19 + 0x350) < iVar8 + *(int *)(unaff_x19 + 0x354))) {
                lVar6 = *(long *)(unaff_x19 + 0x78);
                if (lVar6 != 0) {
                  uVar4 = FUN_01601ad8(lVar6,iVar7,*(int *)(lVar6 + 0x10) - iVar7,0);
                  *(undefined8 *)(unaff_x19 + 0x78) = uVar4;
                  FUN_00e4e374();
                  *(int *)(unaff_x19 + 0x354) = *(int *)(unaff_x19 + 0x354) + iVar8;
                  return;
                }
                goto LAB_00e4d594;
              }
              lVar6 = *(long *)(unaff_x19 + 0x48);
              *(float *)(unaff_x19 + 0x358) = fVar9;
              iVar5 = iVar8;
            }
            lVar6 = *(long *)(unaff_x19 + 0x78);
            iVar7 = iVar7 + 1;
          } while (lVar6 != 0);
        }
      }
    }
  }
  else {
    fVar9 = (float)FUN_00e37408();
    if (*(int *)(unaff_x19 + 0x144) - 3U < 3) {
      fVar10 = fVar9 * -0.5;
    }
    else {
                    /* catch() { ... } // from try @ 00e4d398 with catch @ 00e4d358 */
      fVar10 = 0.0;
      if (2 < *(int *)(unaff_x19 + 0x144) - 6U) {
        fVar10 = -fVar9;
      }
    }
    lVar6 = *(long *)(unaff_x19 + 0x78);
    if (lVar6 != 0) {
      fVar9 = *(float *)(unaff_x19 + 0x518);
      iVar7 = 0;
      do {
        if (*(int *)(lVar6 + 0x10) <= iVar7) goto LAB_00e4d548;
        if (*(long *)(unaff_x19 + 0x48) == 0) break;
        FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar7,&stack0x00000008,*(undefined8 *)puVar2);
        if (CONCAT44(uStack000000000000000c,fStack0000000000000008) == 0) break;
        if (*(float *)(CONCAT44(uStack000000000000000c,fStack0000000000000008) + 0x48) <
            fVar10 + fVar9) {
          lVar6 = *(long *)(unaff_x19 + 0x78);
          if (lVar6 != 0) {
            uVar4 = FUN_01601ad8(lVar6,iVar7,*(int *)(lVar6 + 0x10) - iVar7,0);
            *(undefined8 *)(unaff_x19 + 0x78) = uVar4;
            FUN_00e4e374();
            return;
          }
          break;
        }
        lVar6 = *(long *)(unaff_x19 + 0x78);
        iVar7 = iVar7 + 1;
      } while (lVar6 != 0);
    }
  }
LAB_00e4d594:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


