/*
FUNCTION_NAME: RealisticEyeMovements.EyeAndHeadAnimator$$set_RightEyeRay
ENTRY_POINT: 035b7e80
PROGRAM: Waifu-libil2cpp.so
SCORE: 150
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;weak_pose_support;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;weak_vector_component_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035b7f2c) */

void RealisticEyeMovements_EyeAndHeadAnimator__set_RightEyeRay(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  uint in_w9;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  uint unaff_w26;
  undefined8 *unaff_x27;
  long unaff_x28;
  float unaff_w29;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  undefined4 uVar14;
  float unaff_s9;
  undefined4 uVar15;
  float unaff_s10;
  undefined4 uVar16;
  float unaff_s11;
  float fVar17;
  float unaff_s13;
  float unaff_s14;
  float fVar18;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  
  do {
    fVar18 = *(float *)(param_1 + 0x18);
    fVar17 = *(float *)(param_1 + 0x1c);
    fVar13 = *(float *)(param_1 + 0x20);
    if (in_w9 == 0) {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc8 = 1;
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar6 = (ulong)(uint)(fVar13 * fVar13);
    fVar8 = SQRT((fVar13 * fVar13 + fVar18 * fVar18 + fVar17 * fVar17) *
                 (unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10 + unaff_s11 * unaff_s11));
    fVar11 = 0.0;
    if (fStack000000000000000c <= fVar8) {
      fVar8 = (fVar13 * unaff_s9 + fVar18 * unaff_s10 + fVar17 * unaff_s11) / fVar8;
      uVar6 = 0xbf800000;
      if (fVar8 < -1.0) {
        fVar8 = -1.0;
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      dVar10 = acos((double)fVar8);
      fVar11 = (float)dVar10 * fStack0000000000000008;
    }
    fVar18 = fStack0000000000000048;
    fVar17 = fStack0000000000000044;
    fVar13 = fStack0000000000000040;
    fVar8 = (float)uVar6;
    uVar12 = (ulong)(uint)fVar11;
    if (fVar11 <= (float)*(int *)(unaff_x19 + 0x400)) {
      *(float *)(unaff_x19 + 0x44c) = fStack0000000000000040;
      *(float *)(unaff_x19 + 0x450) = fStack0000000000000044;
      *(float *)(unaff_x19 + 0x454) = fStack0000000000000048;
      pcVar7 = *(code **)(unaff_x22 + 0x188);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68();
        *(code **)(unaff_x22 + 0x188) = pcVar7;
      }
      lVar5 = (*pcVar7)();
      if (lVar5 == 0) goto LAB_035b8154;
      fVar9 = (float)FUN_07a18d2c(lVar5,0);
      if (DAT_086d7ff6 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d7ff6 = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar18 = fVar18 - fVar8;
      uVar6 = (ulong)(uint)fVar18;
      lVar5 = *(long *)(unaff_x19 + 0x420);
      uVar12 = (ulong)(uint)(fVar18 * fVar18);
      fVar13 = SQRT(fVar18 * fVar18 +
                    (fVar13 - fVar9) * (fVar13 - fVar9) + (fVar17 - fVar11) * (fVar17 - fVar11));
      *(float *)(unaff_x19 + 0x458) = fVar13;
      if (lVar5 == 0) goto LAB_035b8154;
      pcVar7 = *(code **)(unaff_x28 + 0xe70);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.AI.NavMeshAgent::get_stoppingDistance()");
        *(code **)(unaff_x28 + 0xe70) = pcVar7;
      }
      fVar17 = (float)(*pcVar7)(lVar5);
      if ((fVar17 + unaff_s13 < fVar13) && (*(char *)(unaff_x19 + 0xdda) != '\0')) {
        lVar5 = *(long *)(unaff_x19 + 0x420);
        if (lVar5 == 0) goto LAB_035b8154;
        uVar14 = *(undefined4 *)(unaff_x19 + 0x454);
        uVar15 = *(undefined4 *)(unaff_x19 + 0x450);
        uVar16 = *(undefined4 *)(unaff_x19 + 0x44c);
        if (DAT_086ebf08 == (code *)0x0) {
          DAT_086ebf08 = (code *)FUN_033d1b68("UnityEngine.AI.NavMeshAgent::get_areaMask()");
        }
        uVar1 = (*DAT_086ebf08)(lVar5);
        uVar6 = FUN_0799a0d8(uVar16,uVar15,uVar14,0x40800000,&stack0x00000010,uVar1,0);
        uVar3 = DAT_0843cfe0;
        if ((uVar6 & 1) != 0) {
          lVar5 = *(long *)(unaff_x19 + 0xf78);
          if (lVar5 == 0) goto LAB_035b8154;
          if (DAT_086ec958 == (code *)0x0) {
            DAT_086ec958 = (code *)FUN_033d1b68(
                                               "UnityEngine.Animator::SetBoolString(System.String,System.Boolean)"
                                               );
          }
          (*DAT_086ec958)(lVar5,uVar3,0);
          if (*(long *)(unaff_x19 + 0x420) == 0) {
LAB_035b8154:
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          FUN_07998870(uStack0000000000000010,uStack0000000000000014,in_stack_00000018,
                       *(long *)(unaff_x19 + 0x420),0);
        }
        *(undefined4 *)(unaff_x19 + 0x458) = 0;
        return;
      }
    }
    do {
      do {
        fVar17 = (float)uVar6;
        fVar13 = (float)uVar12;
        lVar5 = *(long *)(unaff_x19 + 0x420);
        unaff_w26 = unaff_w26 + 1;
        if (lVar5 == 0) goto LAB_035b8154;
        pcVar7 = *(code **)(unaff_x28 + 0xe70);
        fVar18 = *(float *)(unaff_x19 + 0x458);
        if (pcVar7 == (code *)0x0) {
          pcVar7 = (code *)FUN_033d1b68("UnityEngine.AI.NavMeshAgent::get_stoppingDistance()");
          *(code **)(unaff_x28 + 0xe70) = pcVar7;
        }
        fVar8 = (float)(*pcVar7)(lVar5);
        if (10 < unaff_w26) {
          return;
        }
        if (fVar8 + unaff_s13 < fVar18) {
          return;
        }
        fVar8 = *(float *)(unaff_x19 + 0xf80);
        fVar9 = *(float *)(unaff_x19 + 0xf84);
        fVar11 = *(float *)(unaff_x19 + 0xf88);
        FUN_07a06ee0(0);
        FUN_07a06ee0(0);
        fVar18 = (float)*(int *)(unaff_x19 + 0x9f0);
        fVar13 = fVar13 * fVar18;
        fVar8 = fVar8 + fVar13;
        fVar9 = fVar9 + fVar18 * unaff_s14;
        fVar11 = fVar11 + fVar17 * fVar18;
        uVar6 = (ulong)(uint)fVar11;
        *(float *)(unaff_x19 + 0x44c) = fVar8;
        *(float *)(unaff_x19 + 0x450) = fVar9;
        *(float *)(unaff_x19 + 0x454) = fVar11;
        pcVar7 = *(code **)(unaff_x22 + 0x188);
        if (pcVar7 == (code *)0x0) {
          pcVar7 = (code *)FUN_033d1b68();
          *(code **)(unaff_x22 + 0x188) = pcVar7;
        }
        lVar5 = (*pcVar7)();
        if (lVar5 == 0) goto LAB_035b8154;
        fVar18 = (float)FUN_07a193bc(lVar5,0);
        uVar14 = *(undefined4 *)(unaff_x19 + 0x10dc);
        if (*(int *)(*(long *)(unaff_x23 + 0xcf8) + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar12 = (ulong)(uint)(fVar9 + unaff_w29);
        uVar2 = FUN_07a80464(fVar8,uVar12,uVar6,-fVar18,-fVar13,-fVar17,&stack0x00000040,uVar14,1,0)
        ;
      } while ((uVar2 & 1) == 0);
      uVar3 = FUN_07a84c20(&stack0x00000040,0);
      pcVar7 = *(code **)(unaff_x22 + 0x188);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68();
        *(code **)(unaff_x22 + 0x188) = pcVar7;
      }
      uVar4 = (*pcVar7)();
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870(DAT_083cf7d8);
      }
      uVar2 = FUN_07a0d2c4(uVar3,uVar4,0);
    } while ((uVar2 & 1) == 0);
    *unaff_x27 = CONCAT44(fStack0000000000000044,fStack0000000000000040);
    *(float *)(unaff_x19 + 0x454) = fStack0000000000000048;
    if (DAT_086d7c56 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7c56 = '\x01';
    }
    in_w9 = (uint)DAT_086d7cc8;
    param_1 = *(long *)(DAT_083d2c90 + 0xb8);
    unaff_s10 = fStack000000000000004c;
    unaff_s11 = fStack0000000000000050;
    unaff_s9 = fStack0000000000000054;
  } while( true );
}


