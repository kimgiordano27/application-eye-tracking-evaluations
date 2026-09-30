/*
FUNCTION_NAME: RealisticEyeMovements.EyeAndHeadAnimator$$GetRightEyeDirection
ENTRY_POINT: 035bede8
PROGRAM: Waifu-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_2
*/


void RealisticEyeMovements_EyeAndHeadAnimator__GetRightEyeDirection
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_086d8576 & 1) == 0) {
    FUN_0335b6c8(&DAT_083f7760,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f7768,1);
    DataMemoryBarrier(2,3);
    DAT_086d8576 = 1;
  }
  lVar3 = *(long *)(param_4 + 200);
  if (lVar3 != 0) {
    iVar4 = 0;
    while( true ) {
      if (*(int *)(lVar3 + 0x18) <= iVar4) {
        return;
      }
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar3 = (*DAT_086ef188)(param_4);
      if (lVar3 == 0) break;
      FUN_07a18d2c(lVar3,0);
      if (((*(long *)(param_4 + 200) == 0) ||
          (lVar3 = FUN_04ab0b48(*(long *)(param_4 + 200),iVar4,DAT_083f7768), lVar3 == 0)) ||
         (*(long *)(lVar3 + 0x10) == 0)) break;
      FUN_07a18d2c(*(long *)(lVar3 + 0x10),0);
      if (DAT_086d7ff6 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d7ff6 = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (((*(long *)(param_4 + 200) == 0) ||
          (lVar3 = FUN_04ab0b48(*(long *)(param_4 + 200),iVar4,DAT_083f7768), lVar3 == 0)) ||
         (*(long *)(lVar3 + 0x10) == 0)) break;
      fVar5 = (float)FUN_07a18d2c(*(long *)(lVar3 + 0x10),0);
      if ((*(long *)(param_4 + 200) == 0) ||
         (fVar7 = param_2, fVar8 = param_3,
         lVar3 = FUN_04ab0b48(*(long *)(param_4 + 200),iVar4,DAT_083f7768), lVar3 == 0)) break;
      fVar9 = *(float *)(lVar3 + 0x18);
      fVar10 = *(float *)(lVar3 + 0x1c);
      fVar11 = *(float *)(lVar3 + 0x20);
      if (DAT_086d7cc9 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d7cc9 = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if ((*(long *)(param_4 + 0xa0) == 0) || (*(long *)(param_4 + 200) == 0)) break;
      lVar3 = FUN_04ab0b48(*(long *)(param_4 + 200),iVar4,DAT_083f7768);
      if ((*(long *)(param_4 + 200) == 0) ||
         (((lVar1 = FUN_04ab0b48(*(long *)(param_4 + 200),iVar4,DAT_083f7768), lVar1 == 0 ||
           (*(long *)(lVar1 + 0x10) == 0)) ||
          (uVar6 = FUN_07a18d2c(*(long *)(lVar1 + 0x10),0), lVar3 == 0)))) break;
      *(undefined4 *)(lVar3 + 0x18) = uVar6;
      *(float *)(lVar3 + 0x1c) = fVar7;
      *(float *)(lVar3 + 0x20) = fVar8;
      if ((*(long *)(param_4 + 200) == 0) ||
         (lVar3 = FUN_04ab0b48(*(long *)(param_4 + 200),iVar4,DAT_083f7768), lVar3 == 0)) break;
      fVar5 = fVar5 - fVar9;
      param_2 = param_2 - fVar10;
      param_3 = param_3 - fVar11;
      fVar5 = SQRT(fVar5 * fVar5 + param_2 * param_2 + param_3 * param_3);
      *(float *)(lVar3 + 0x2c) = fVar5;
      param_2 = *(float *)(param_4 + 0x38);
      if (param_2 <= fVar5) {
        uVar2 = 1;
LAB_035bf048:
        *(undefined1 *)(param_4 + 0x4c) = uVar2;
      }
      else if ((fVar5 < param_2) && (0.0 < *(float *)(param_4 + 0x30))) {
        uVar2 = 0;
        goto LAB_035bf048;
      }
      lVar3 = *(long *)(param_4 + 200);
      iVar4 = iVar4 + 1;
      if (lVar3 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


